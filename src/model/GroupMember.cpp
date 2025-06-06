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

#include "tribufu++/model/GroupMember.h"

namespace tribufu
{
    namespace models
    {

        GroupMember::GroupMember()
        {
            m_Id = utility::conversions::to_string_t("");
            m_IdIsSet = false;
            m_Uuid = utility::conversions::to_string_t("");
            m_UuidIsSet = false;
            m_Name = utility::conversions::to_string_t("");
            m_NameIsSet = false;
            m_Display_name = utility::conversions::to_string_t("");
            m_Display_nameIsSet = false;
            m_Verified = false;
            m_VerifiedIsSet = false;
            m_Photo_url = utility::conversions::to_string_t("");
            m_Photo_urlIsSet = false;
            m_Last_online = utility::datetime();
            m_Last_onlineIsSet = false;
            m_RankIsSet = false;
            m_Since = utility::datetime();
            m_SinceIsSet = false;
        }

        GroupMember::~GroupMember()
        {
        }

        void GroupMember::validate()
        {
            // TODO: implement validation
        }

        web::json::value GroupMember::toJson() const
        {
            web::json::value val = web::json::value::object();
            if (m_IdIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("id"))] = ModelBase::toJson(m_Id);
            }
            if (m_UuidIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("uuid"))] = ModelBase::toJson(m_Uuid);
            }
            if (m_NameIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("name"))] = ModelBase::toJson(m_Name);
            }
            if (m_Display_nameIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("display_name"))] = ModelBase::toJson(m_Display_name);
            }
            if (m_VerifiedIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("verified"))] = ModelBase::toJson(m_Verified);
            }
            if (m_Photo_urlIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("photo_url"))] = ModelBase::toJson(m_Photo_url);
            }
            if (m_Last_onlineIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("last_online"))] = ModelBase::toJson(m_Last_online);
            }
            if (m_RankIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("rank"))] = ModelBase::toJson(m_Rank);
            }
            if (m_SinceIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("since"))] = ModelBase::toJson(m_Since);
            }

            return val;
        }

        bool GroupMember::fromJson(const web::json::value &val)
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
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("uuid"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("uuid")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setUuid;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setUuid);
                    setUuid(refVal_setUuid);
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
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("display_name"))))
            {
                const web::json::value &fieldValue =
                    val.at(utility::conversions::to_string_t(_XPLATSTR("display_name")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setDisplayName;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setDisplayName);
                    setDisplayName(refVal_setDisplayName);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("verified"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("verified")));
                if (!fieldValue.is_null())
                {
                    bool refVal_setVerified;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setVerified);
                    setVerified(refVal_setVerified);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("photo_url"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("photo_url")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setPhotoUrl;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setPhotoUrl);
                    setPhotoUrl(refVal_setPhotoUrl);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("last_online"))))
            {
                const web::json::value &fieldValue =
                    val.at(utility::conversions::to_string_t(_XPLATSTR("last_online")));
                if (!fieldValue.is_null())
                {
                    utility::datetime refVal_setLastOnline;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setLastOnline);
                    setLastOnline(refVal_setLastOnline);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("rank"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("rank")));
                if (!fieldValue.is_null())
                {
                    std::shared_ptr<GroupRank> refVal_setRank;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setRank);
                    setRank(refVal_setRank);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("since"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("since")));
                if (!fieldValue.is_null())
                {
                    utility::datetime refVal_setSince;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setSince);
                    setSince(refVal_setSince);
                }
            }
            return ok;
        }

        void GroupMember::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                                      const utility::string_t &prefix) const
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
            if (m_UuidIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("uuid")), m_Uuid));
            }
            if (m_NameIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("name")), m_Name));
            }
            if (m_Display_nameIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("display_name")), m_Display_name));
            }
            if (m_VerifiedIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("verified")), m_Verified));
            }
            if (m_Photo_urlIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("photo_url")), m_Photo_url));
            }
            if (m_Last_onlineIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("last_online")), m_Last_online));
            }
            if (m_RankIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("rank")), m_Rank));
            }
            if (m_SinceIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("since")), m_Since));
            }
        }

        bool GroupMember::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t &prefix)
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
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("uuid"))))
            {
                utility::string_t refVal_setUuid;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("uuid"))), refVal_setUuid);
                setUuid(refVal_setUuid);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("name"))))
            {
                utility::string_t refVal_setName;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("name"))), refVal_setName);
                setName(refVal_setName);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("display_name"))))
            {
                utility::string_t refVal_setDisplayName;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("display_name"))),
                    refVal_setDisplayName);
                setDisplayName(refVal_setDisplayName);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("verified"))))
            {
                bool refVal_setVerified;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("verified"))),
                    refVal_setVerified);
                setVerified(refVal_setVerified);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("photo_url"))))
            {
                utility::string_t refVal_setPhotoUrl;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("photo_url"))),
                    refVal_setPhotoUrl);
                setPhotoUrl(refVal_setPhotoUrl);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("last_online"))))
            {
                utility::datetime refVal_setLastOnline;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("last_online"))),
                    refVal_setLastOnline);
                setLastOnline(refVal_setLastOnline);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("rank"))))
            {
                std::shared_ptr<GroupRank> refVal_setRank;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("rank"))), refVal_setRank);
                setRank(refVal_setRank);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("since"))))
            {
                utility::datetime refVal_setSince;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("since"))), refVal_setSince);
                setSince(refVal_setSince);
            }
            return ok;
        }

        utility::string_t GroupMember::getId() const
        {
            return m_Id;
        }

        void GroupMember::setId(const utility::string_t &value)
        {
            m_Id = value;
            m_IdIsSet = true;
        }

        bool GroupMember::idIsSet() const
        {
            return m_IdIsSet;
        }

        void GroupMember::unsetId()
        {
            m_IdIsSet = false;
        }
        utility::string_t GroupMember::getUuid() const
        {
            return m_Uuid;
        }

        void GroupMember::setUuid(const utility::string_t &value)
        {
            m_Uuid = value;
            m_UuidIsSet = true;
        }

        bool GroupMember::uuidIsSet() const
        {
            return m_UuidIsSet;
        }

        void GroupMember::unsetUuid()
        {
            m_UuidIsSet = false;
        }
        utility::string_t GroupMember::getName() const
        {
            return m_Name;
        }

        void GroupMember::setName(const utility::string_t &value)
        {
            m_Name = value;
            m_NameIsSet = true;
        }

        bool GroupMember::nameIsSet() const
        {
            return m_NameIsSet;
        }

        void GroupMember::unsetName()
        {
            m_NameIsSet = false;
        }
        utility::string_t GroupMember::getDisplayName() const
        {
            return m_Display_name;
        }

        void GroupMember::setDisplayName(const utility::string_t &value)
        {
            m_Display_name = value;
            m_Display_nameIsSet = true;
        }

        bool GroupMember::displayNameIsSet() const
        {
            return m_Display_nameIsSet;
        }

        void GroupMember::unsetDisplay_name()
        {
            m_Display_nameIsSet = false;
        }
        bool GroupMember::isVerified() const
        {
            return m_Verified;
        }

        void GroupMember::setVerified(bool value)
        {
            m_Verified = value;
            m_VerifiedIsSet = true;
        }

        bool GroupMember::verifiedIsSet() const
        {
            return m_VerifiedIsSet;
        }

        void GroupMember::unsetVerified()
        {
            m_VerifiedIsSet = false;
        }
        utility::string_t GroupMember::getPhotoUrl() const
        {
            return m_Photo_url;
        }

        void GroupMember::setPhotoUrl(const utility::string_t &value)
        {
            m_Photo_url = value;
            m_Photo_urlIsSet = true;
        }

        bool GroupMember::photoUrlIsSet() const
        {
            return m_Photo_urlIsSet;
        }

        void GroupMember::unsetPhoto_url()
        {
            m_Photo_urlIsSet = false;
        }
        utility::datetime GroupMember::getLastOnline() const
        {
            return m_Last_online;
        }

        void GroupMember::setLastOnline(const utility::datetime &value)
        {
            m_Last_online = value;
            m_Last_onlineIsSet = true;
        }

        bool GroupMember::lastOnlineIsSet() const
        {
            return m_Last_onlineIsSet;
        }

        void GroupMember::unsetLast_online()
        {
            m_Last_onlineIsSet = false;
        }
        std::shared_ptr<GroupRank> GroupMember::getRank() const
        {
            return m_Rank;
        }

        void GroupMember::setRank(const std::shared_ptr<GroupRank> &value)
        {
            m_Rank = value;
            m_RankIsSet = true;
        }

        bool GroupMember::rankIsSet() const
        {
            return m_RankIsSet;
        }

        void GroupMember::unsetRank()
        {
            m_RankIsSet = false;
        }
        utility::datetime GroupMember::getSince() const
        {
            return m_Since;
        }

        void GroupMember::setSince(const utility::datetime &value)
        {
            m_Since = value;
            m_SinceIsSet = true;
        }

        bool GroupMember::sinceIsSet() const
        {
            return m_SinceIsSet;
        }

        void GroupMember::unsetSince()
        {
            m_SinceIsSet = false;
        }

    }
}
