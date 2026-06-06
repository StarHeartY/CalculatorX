// entry/src/main/cpp/ErrorHandler.cpp
#include "ErrorHandler.h"

CalcException::CalcException(CalcErrorCode c, const std::string& msg)
    : std::runtime_error(msg), code(c) {}

std::string CalcException::getFrontEndMessage() const {
    switch (code) {
        case CalcErrorCode::DIV_BY_ZERO: 
            return "Error:DivByZero"; // 除数不能为0
        case CalcErrorCode::DOMAIN_ERROR: 
            return "Error:Domain";    // 数学域错误或无效输入
        case CalcErrorCode::SYNTAX_ERROR: 
            return "Error:Syntax";    // 语法错误
        default: 
            return "Error:Unknown";
    }
}