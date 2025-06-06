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
 * UserType.h
 *
 *
 */

#ifndef TRIBUFU_MODELS_UserType_H_
#define TRIBUFU_MODELS_UserType_H_

#include "tribufu++/ModelBase.h"

namespace tribufu
{
    namespace models
    {

        class UserType : public ModelBase
        {
        public:
            UserType();
            UserType(utility::string_t str);
            operator utility::string_t() const
            {
                return enumToStrMap.at(getValue());
            }

            virtual ~UserType();

            /////////////////////////////////////////////
            /// ModelBase overrides

            void validate() override;

            web::json::value toJson() const override;
            bool fromJson(const web::json::value &json) override;

            void toMultipart(std::shared_ptr<MultipartFormData> multipart,
                             const utility::string_t &namePrefix) const override;
            bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                               const utility::string_t &namePrefix) override;

            enum class eUserType
            {
                UserType_USER,
                UserType_BOT,
            };

            eUserType getValue() const;
            void setValue(eUserType const value);

        protected:
            eUserType m_value;
            std::map<eUserType, utility::string_t> enumToStrMap = {{eUserType::UserType_USER, "USER"},
                                                                   {eUserType::UserType_BOT, "BOT"}};
            std::map<utility::string_t, eUserType> strToEnumMap = {{"USER", eUserType::UserType_USER},
                                                                   {"BOT", eUserType::UserType_BOT}};
        };

    }
}

#endif /* TRIBUFU_MODELS_UserType_H_ */
