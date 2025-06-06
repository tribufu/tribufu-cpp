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
 * MultipartFormData.h
 *
 * This class represents a container for building application/x-multipart-formdata requests.
 */

#ifndef TRIBUFU_MODELS_MultipartFormData_H_
#define TRIBUFU_MODELS_MultipartFormData_H_

#include "tribufu++/HttpContent.h"
#include "tribufu++/IHttpBody.h"

#include <cpprest/details/basic_types.h>

#include <map>
#include <memory>
#include <vector>

namespace tribufu
{
    namespace models
    {

        class MultipartFormData : public IHttpBody
        {
        public:
            MultipartFormData();
            MultipartFormData(const utility::string_t &boundary);
            virtual ~MultipartFormData();

            virtual void add(std::shared_ptr<HttpContent> content);
            virtual utility::string_t getBoundary();
            virtual std::shared_ptr<HttpContent> getContent(const utility::string_t &name) const;
            virtual bool hasContent(const utility::string_t &name) const;
            virtual void writeTo(std::ostream &target);

        protected:
            std::vector<std::shared_ptr<HttpContent>> m_Contents;
            utility::string_t m_Boundary;
            std::map<utility::string_t, std::shared_ptr<HttpContent>> m_ContentLookup;
        };

    }
}

#endif /* TRIBUFU_MODELS_MultipartFormData_H_ */
