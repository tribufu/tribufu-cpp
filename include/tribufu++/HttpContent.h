/**
 * Tribufu API
 * REST API to access Tribufu services.
 *
 * The version of the OpenAPI document: 1.1.0
 * Contact: contact@tribufu.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.14.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * HttpContent.h
 *
 * This class represents a single item of a multipart-formdata request.
 */

#ifndef TRIBUFU_MODELS_HttpContent_H_
#define TRIBUFU_MODELS_HttpContent_H_

#include <cpprest/details/basic_types.h>

#include <memory>

namespace tribufu
{
    namespace models
    {

        class HttpContent
        {
        public:
            HttpContent();
            virtual ~HttpContent();

            virtual utility::string_t getContentDisposition() const;
            virtual void setContentDisposition(const utility::string_t &value);

            virtual utility::string_t getName() const;
            virtual void setName(const utility::string_t &value);

            virtual utility::string_t getFileName() const;
            virtual void setFileName(const utility::string_t &value);

            virtual utility::string_t getContentType() const;
            virtual void setContentType(const utility::string_t &value);

            virtual std::shared_ptr<std::istream> getData() const;
            virtual void setData(std::shared_ptr<std::istream> value);

            virtual void writeTo(std::ostream &stream);

        protected:
            // NOTE: no utility::string_t here because those strings can only contain ascii
            utility::string_t m_ContentDisposition;
            utility::string_t m_Name;
            utility::string_t m_FileName;
            utility::string_t m_ContentType;
            std::shared_ptr<std::istream> m_Data;
        };

    }
}

#endif /* TRIBUFU_MODELS_HttpContent_H_ */
