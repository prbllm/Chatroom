#pragma once

#include "Defines.h"
#include "String.h"

namespace Logger
{
    /*!
     * \brief The LoggerType enum Режимы работы логгера
     */
    enum class LoggerType
    {
        //! Консоль
        Console,

        //! Файл
        File,
    };

    /*!
     * \brief The Logger class Логирование действий
     */
    class Logger final
    {
    public:
        /*!
         * \brief Instance Получение логгера
         * \return логгер
         */
        NO_DISCARD static Logger* Instance();

        /*!
         * \brief SetLoggerType Установка режима работы логгера
         * \param type режим работы логгера
         */
        void SetLoggerType(LoggerType type);

        /*!
         * \brief GetLoggerType получение режима работы логгера
         * \return режим работы логгера
         */
        NO_DISCARD LoggerType GetLoggerType() const;

        /*!
         * \brief WriteMessage Запись сообщения
         * \param message сообщение
         */
        void WriteMessage(const String& message) const;

    private:
        /*!
         * \brief Logger Приватный конструктор по умолчанию
         */
        explicit Logger();

        /*!
         * \brief Logger Приватный деструктор по умолчанию
         */
        ~Logger();

        /*!
         * \brief Logger Удалённый контруктор копирования
         * \param other копируемый объект логгера
         */
        Logger(const Logger& other) = delete;

        //! режим работы логгера
        LoggerType _type{LoggerType::Console};

        /*!
         * \brief operator = Удалённый оператор присваивания
         * \param other присваемый объект
         */
        void operator= (const Logger& other) = delete;
    };
}
