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

#include "tribufu++/model/LoginRequest.h"

namespace tribufu
{
    namespace models
    {

        LoginRequest::LoginRequest()
        {
            m_Login = utility::conversions::to_string_t("");
            m_LoginIsSet = false;
            m_Password = utility::conversions::to_string_t("");
            m_PasswordIsSet = false;
        }

        LoginRequest::~LoginRequest()
        {
        }

        void LoginRequest::validate()
        {
            // TODO: implement validation
        }

        web::json::value LoginRequest::toJson() const
        {
            web::json::value val = web::json::value::object();
            if (m_LoginIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("login"))] = ModelBase::toJson(m_Login);
            }
            if (m_PasswordIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("password"))] = ModelBase::toJson(m_Password);
            }

            return val;
        }

        bool LoginRequest::fromJson(const web::json::value &val)
        {
            bool ok = true;
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("login"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("login")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setLogin;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setLogin);
                    setLogin(refVal_setLogin);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("password"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("password")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setPassword;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setPassword);
                    setPassword(refVal_setPassword);
                }
            }
            return ok;
        }

        void LoginRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                                       const utility::string_t &prefix) const
        {
            utility::string_t namePrefix = prefix;
            if (namePrefix.size() > 0 &&
                namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(_XPLATSTR(".")))
            {
                namePrefix += utility::conversions::to_string_t(_XPLATSTR("."));
            }
            if (m_LoginIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("login")), m_Login));
            }
            if (m_PasswordIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("password")), m_Password));
            }
        }

        bool LoginRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t &prefix)
        {
            bool ok = true;
            utility::string_t namePrefix = prefix;
            if (namePrefix.size() > 0 &&
                namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(_XPLATSTR(".")))
            {
                namePrefix += utility::conversions::to_string_t(_XPLATSTR("."));
            }

            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("login"))))
            {
                utility::string_t refVal_setLogin;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("login"))), refVal_setLogin);
                setLogin(refVal_setLogin);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("password"))))
            {
                utility::string_t refVal_setPassword;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("password"))),
                    refVal_setPassword);
                setPassword(refVal_setPassword);
            }
            return ok;
        }

        utility::string_t LoginRequest::getLogin() const
        {
            return m_Login;
        }

        void LoginRequest::setLogin(const utility::string_t &value)
        {
            m_Login = value;
            m_LoginIsSet = true;
        }

        bool LoginRequest::loginIsSet() const
        {
            return m_LoginIsSet;
        }

        void LoginRequest::unsetLogin()
        {
            m_LoginIsSet = false;
        }
        utility::string_t LoginRequest::getPassword() const
        {
            return m_Password;
        }

        void LoginRequest::setPassword(const utility::string_t &value)
        {
            m_Password = value;
            m_PasswordIsSet = true;
        }

        bool LoginRequest::passwordIsSet() const
        {
            return m_PasswordIsSet;
        }

        void LoginRequest::unsetPassword()
        {
            m_PasswordIsSet = false;
        }

    }
}
