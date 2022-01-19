#pragma once
#include <string>
#include <locale>
#include <codecvt>

#define WSTR(key) Formatter::ConvertStringToWString(key)
#define STR(key) Formatter::ConvertWStringToString(key)


//! Строковый формат
using String = std::wstring;

namespace Formatter
{
    /*!
     * \brief ConvertStringToWString Конвертирование string в wstring
     * \param str строка
     * \return результат
     */
    std::wstring ConvertStringToWString(const std::string& str)
    {
        return std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(str);
    }

    /*!
     * \brief ConvertWStringToString Конвертирование wstring в string
     * \param str строка
     * \return результат
     */
    std::string ConvertWStringToString(const std::wstring& str)
    {
        return std::wstring_convert<std::codecvt_utf8<wchar_t>>().to_bytes(str);
    }
}
