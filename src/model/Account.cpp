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

#include "tribufu++/model/Account.h"

namespace tribufu
{
    namespace models
    {

        Account::Account()
        {
            m_Id = utility::conversions::to_string_t("");
            m_IdIsSet = false;
            m_Name = utility::conversions::to_string_t("");
            m_NameIsSet = false;
            m_ProviderIsSet = false;
            m_User_id = utility::conversions::to_string_t("");
            m_User_idIsSet = false;
            m_Authorized = false;
            m_AuthorizedIsSet = false;
            m_FieldsIsSet = false;
            m_Created = utility::datetime();
            m_CreatedIsSet = false;
            m_Updated = utility::datetime();
            m_UpdatedIsSet = false;
        }

        Account::~Account()
        {
        }

        void Account::validate()
        {
            // TODO: implement validation
        }

        web::json::value Account::toJson() const
        {
            web::json::value val = web::json::value::object();
            if (m_IdIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("id"))] = ModelBase::toJson(m_Id);
            }
            if (m_NameIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("name"))] = ModelBase::toJson(m_Name);
            }
            if (m_ProviderIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("provider"))] = ModelBase::toJson(m_Provider);
            }
            if (m_User_idIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("user_id"))] = ModelBase::toJson(m_User_id);
            }
            if (m_AuthorizedIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("authorized"))] = ModelBase::toJson(m_Authorized);
            }
            if (m_FieldsIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("fields"))] = ModelBase::toJson(m_Fields);
            }
            if (m_CreatedIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("created"))] = ModelBase::toJson(m_Created);
            }
            if (m_UpdatedIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("updated"))] = ModelBase::toJson(m_Updated);
            }

            return val;
        }

        bool Account::fromJson(const web::json::value &val)
        {
            bool ok = true;
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("id"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("id")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setId;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setId);
                    setId(refVal_setId);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("name"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("name")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setName;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setName);
                    setName(refVal_setName);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("provider"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("provider")));
                if (!fieldValue.is_null())
                {
                    std::shared_ptr<LoginProvider> refVal_setProvider;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setProvider);
                    setProvider(refVal_setProvider);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("user_id"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("user_id")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setUserId;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
                    setUserId(refVal_setUserId);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("authorized"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("authorized")));
                if (!fieldValue.is_null())
                {
                    bool refVal_setAuthorized;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setAuthorized);
                    setAuthorized(refVal_setAuthorized);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("fields"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("fields")));
                if (!fieldValue.is_null())
                {
                    std::shared_ptr<AnyType> refVal_setFields;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setFields);
                    setFields(refVal_setFields);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("created"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("created")));
                if (!fieldValue.is_null())
                {
                    utility::datetime refVal_setCreated;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setCreated);
                    setCreated(refVal_setCreated);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("updated"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("updated")));
                if (!fieldValue.is_null())
                {
                    utility::datetime refVal_setUpdated;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setUpdated);
                    setUpdated(refVal_setUpdated);
                }
            }
            return ok;
        }

        void Account::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t &prefix) const
        {
            utility::string_t namePrefix = prefix;
            if (namePrefix.size() > 0 &&
                namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(_XPLATSTR(".")))
            {
                namePrefix += utility::conversions::to_string_t(_XPLATSTR("."));
            }
            if (m_IdIsSet)
            {
                multipart->add(
                    ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(_XPLATSTR("id")), m_Id));
            }
            if (m_NameIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("name")), m_Name));
            }
            if (m_ProviderIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("provider")), m_Provider));
            }
            if (m_User_idIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("user_id")), m_User_id));
            }
            if (m_AuthorizedIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("authorized")), m_Authorized));
            }
            if (m_FieldsIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("fields")), m_Fields));
            }
            if (m_CreatedIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("created")), m_Created));
            }
            if (m_UpdatedIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("updated")), m_Updated));
            }
        }

        bool Account::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t &prefix)
        {
            bool ok = true;
            utility::string_t namePrefix = prefix;
            if (namePrefix.size() > 0 &&
                namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(_XPLATSTR(".")))
            {
                namePrefix += utility::conversions::to_string_t(_XPLATSTR("."));
            }

            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("id"))))
            {
                utility::string_t refVal_setId;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("id"))), refVal_setId);
                setId(refVal_setId);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("name"))))
            {
                utility::string_t refVal_setName;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("name"))), refVal_setName);
                setName(refVal_setName);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("provider"))))
            {
                std::shared_ptr<LoginProvider> refVal_setProvider;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("provider"))),
                    refVal_setProvider);
                setProvider(refVal_setProvider);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("user_id"))))
            {
                utility::string_t refVal_setUserId;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("user_id"))), refVal_setUserId);
                setUserId(refVal_setUserId);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("authorized"))))
            {
                bool refVal_setAuthorized;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("authorized"))),
                    refVal_setAuthorized);
                setAuthorized(refVal_setAuthorized);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("fields"))))
            {
                std::shared_ptr<AnyType> refVal_setFields;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("fields"))), refVal_setFields);
                setFields(refVal_setFields);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("created"))))
            {
                utility::datetime refVal_setCreated;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("created"))), refVal_setCreated);
                setCreated(refVal_setCreated);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("updated"))))
            {
                utility::datetime refVal_setUpdated;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("updated"))), refVal_setUpdated);
                setUpdated(refVal_setUpdated);
            }
            return ok;
        }

        utility::string_t Account::getId() const
        {
            return m_Id;
        }

        void Account::setId(const utility::string_t &value)
        {
            m_Id = value;
            m_IdIsSet = true;
        }

        bool Account::idIsSet() const
        {
            return m_IdIsSet;
        }

        void Account::unsetId()
        {
            m_IdIsSet = false;
        }
        utility::string_t Account::getName() const
        {
            return m_Name;
        }

        void Account::setName(const utility::string_t &value)
        {
            m_Name = value;
            m_NameIsSet = true;
        }

        bool Account::nameIsSet() const
        {
            return m_NameIsSet;
        }

        void Account::unsetName()
        {
            m_NameIsSet = false;
        }
        std::shared_ptr<LoginProvider> Account::getProvider() const
        {
            return m_Provider;
        }

        void Account::setProvider(const std::shared_ptr<LoginProvider> &value)
        {
            m_Provider = value;
            m_ProviderIsSet = true;
        }

        bool Account::providerIsSet() const
        {
            return m_ProviderIsSet;
        }

        void Account::unsetProvider()
        {
            m_ProviderIsSet = false;
        }
        utility::string_t Account::getUserId() const
        {
            return m_User_id;
        }

        void Account::setUserId(const utility::string_t &value)
        {
            m_User_id = value;
            m_User_idIsSet = true;
        }

        bool Account::userIdIsSet() const
        {
            return m_User_idIsSet;
        }

        void Account::unsetUser_id()
        {
            m_User_idIsSet = false;
        }
        bool Account::isAuthorized() const
        {
            return m_Authorized;
        }

        void Account::setAuthorized(bool value)
        {
            m_Authorized = value;
            m_AuthorizedIsSet = true;
        }

        bool Account::authorizedIsSet() const
        {
            return m_AuthorizedIsSet;
        }

        void Account::unsetAuthorized()
        {
            m_AuthorizedIsSet = false;
        }
        std::shared_ptr<AnyType> Account::getFields() const
        {
            return m_Fields;
        }

        void Account::setFields(const std::shared_ptr<AnyType> &value)
        {
            m_Fields = value;
            m_FieldsIsSet = true;
        }

        bool Account::fieldsIsSet() const
        {
            return m_FieldsIsSet;
        }

        void Account::unsetFields()
        {
            m_FieldsIsSet = false;
        }
        utility::datetime Account::getCreated() const
        {
            return m_Created;
        }

        void Account::setCreated(const utility::datetime &value)
        {
            m_Created = value;
            m_CreatedIsSet = true;
        }

        bool Account::createdIsSet() const
        {
            return m_CreatedIsSet;
        }

        void Account::unsetCreated()
        {
            m_CreatedIsSet = false;
        }
        utility::datetime Account::getUpdated() const
        {
            return m_Updated;
        }

        void Account::setUpdated(const utility::datetime &value)
        {
            m_Updated = value;
            m_UpdatedIsSet = true;
        }

        bool Account::updatedIsSet() const
        {
            return m_UpdatedIsSet;
        }

        void Account::unsetUpdated()
        {
            m_UpdatedIsSet = false;
        }

    }
}
