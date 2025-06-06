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

#include "tribufu++/model/ProfileGroup.h"

namespace tribufu
{
    namespace models
    {

        ProfileGroup::ProfileGroup()
        {
            m_Id = utility::conversions::to_string_t("");
            m_IdIsSet = false;
            m_Uuid = utility::conversions::to_string_t("");
            m_UuidIsSet = false;
            m_Name = utility::conversions::to_string_t("");
            m_NameIsSet = false;
            m_Tag = utility::conversions::to_string_t("");
            m_TagIsSet = false;
            m_Privacy = 0;
            m_PrivacyIsSet = false;
            m_Verified = false;
            m_VerifiedIsSet = false;
            m_Photo_url = utility::conversions::to_string_t("");
            m_Photo_urlIsSet = false;
            m_Member_count = 0;
            m_Member_countIsSet = false;
            m_RankIsSet = false;
            m_Since = utility::datetime();
            m_SinceIsSet = false;
        }

        ProfileGroup::~ProfileGroup()
        {
        }

        void ProfileGroup::validate()
        {
            // TODO: implement validation
        }

        web::json::value ProfileGroup::toJson() const
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
            if (m_TagIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("tag"))] = ModelBase::toJson(m_Tag);
            }
            if (m_PrivacyIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("privacy"))] = ModelBase::toJson(m_Privacy);
            }
            if (m_VerifiedIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("verified"))] = ModelBase::toJson(m_Verified);
            }
            if (m_Photo_urlIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("photo_url"))] = ModelBase::toJson(m_Photo_url);
            }
            if (m_Member_countIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("member_count"))] = ModelBase::toJson(m_Member_count);
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

        bool ProfileGroup::fromJson(const web::json::value &val)
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
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("tag"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("tag")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setTag;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setTag);
                    setTag(refVal_setTag);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("privacy"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("privacy")));
                if (!fieldValue.is_null())
                {
                    int32_t refVal_setPrivacy;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setPrivacy);
                    setPrivacy(refVal_setPrivacy);
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
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("member_count"))))
            {
                const web::json::value &fieldValue =
                    val.at(utility::conversions::to_string_t(_XPLATSTR("member_count")));
                if (!fieldValue.is_null())
                {
                    int32_t refVal_setMemberCount;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setMemberCount);
                    setMemberCount(refVal_setMemberCount);
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

        void ProfileGroup::toMultipart(std::shared_ptr<MultipartFormData> multipart,
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
            if (m_TagIsSet)
            {
                multipart->add(
                    ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(_XPLATSTR("tag")), m_Tag));
            }
            if (m_PrivacyIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("privacy")), m_Privacy));
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
            if (m_Member_countIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("member_count")), m_Member_count));
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

        bool ProfileGroup::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t &prefix)
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
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("tag"))))
            {
                utility::string_t refVal_setTag;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("tag"))), refVal_setTag);
                setTag(refVal_setTag);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("privacy"))))
            {
                int32_t refVal_setPrivacy;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("privacy"))), refVal_setPrivacy);
                setPrivacy(refVal_setPrivacy);
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
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("member_count"))))
            {
                int32_t refVal_setMemberCount;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("member_count"))),
                    refVal_setMemberCount);
                setMemberCount(refVal_setMemberCount);
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

        utility::string_t ProfileGroup::getId() const
        {
            return m_Id;
        }

        void ProfileGroup::setId(const utility::string_t &value)
        {
            m_Id = value;
            m_IdIsSet = true;
        }

        bool ProfileGroup::idIsSet() const
        {
            return m_IdIsSet;
        }

        void ProfileGroup::unsetId()
        {
            m_IdIsSet = false;
        }
        utility::string_t ProfileGroup::getUuid() const
        {
            return m_Uuid;
        }

        void ProfileGroup::setUuid(const utility::string_t &value)
        {
            m_Uuid = value;
            m_UuidIsSet = true;
        }

        bool ProfileGroup::uuidIsSet() const
        {
            return m_UuidIsSet;
        }

        void ProfileGroup::unsetUuid()
        {
            m_UuidIsSet = false;
        }
        utility::string_t ProfileGroup::getName() const
        {
            return m_Name;
        }

        void ProfileGroup::setName(const utility::string_t &value)
        {
            m_Name = value;
            m_NameIsSet = true;
        }

        bool ProfileGroup::nameIsSet() const
        {
            return m_NameIsSet;
        }

        void ProfileGroup::unsetName()
        {
            m_NameIsSet = false;
        }
        utility::string_t ProfileGroup::getTag() const
        {
            return m_Tag;
        }

        void ProfileGroup::setTag(const utility::string_t &value)
        {
            m_Tag = value;
            m_TagIsSet = true;
        }

        bool ProfileGroup::tagIsSet() const
        {
            return m_TagIsSet;
        }

        void ProfileGroup::unsetTag()
        {
            m_TagIsSet = false;
        }
        int32_t ProfileGroup::getPrivacy() const
        {
            return m_Privacy;
        }

        void ProfileGroup::setPrivacy(int32_t value)
        {
            m_Privacy = value;
            m_PrivacyIsSet = true;
        }

        bool ProfileGroup::privacyIsSet() const
        {
            return m_PrivacyIsSet;
        }

        void ProfileGroup::unsetPrivacy()
        {
            m_PrivacyIsSet = false;
        }
        bool ProfileGroup::isVerified() const
        {
            return m_Verified;
        }

        void ProfileGroup::setVerified(bool value)
        {
            m_Verified = value;
            m_VerifiedIsSet = true;
        }

        bool ProfileGroup::verifiedIsSet() const
        {
            return m_VerifiedIsSet;
        }

        void ProfileGroup::unsetVerified()
        {
            m_VerifiedIsSet = false;
        }
        utility::string_t ProfileGroup::getPhotoUrl() const
        {
            return m_Photo_url;
        }

        void ProfileGroup::setPhotoUrl(const utility::string_t &value)
        {
            m_Photo_url = value;
            m_Photo_urlIsSet = true;
        }

        bool ProfileGroup::photoUrlIsSet() const
        {
            return m_Photo_urlIsSet;
        }

        void ProfileGroup::unsetPhoto_url()
        {
            m_Photo_urlIsSet = false;
        }
        int32_t ProfileGroup::getMemberCount() const
        {
            return m_Member_count;
        }

        void ProfileGroup::setMemberCount(int32_t value)
        {
            m_Member_count = value;
            m_Member_countIsSet = true;
        }

        bool ProfileGroup::memberCountIsSet() const
        {
            return m_Member_countIsSet;
        }

        void ProfileGroup::unsetMember_count()
        {
            m_Member_countIsSet = false;
        }
        std::shared_ptr<GroupRank> ProfileGroup::getRank() const
        {
            return m_Rank;
        }

        void ProfileGroup::setRank(const std::shared_ptr<GroupRank> &value)
        {
            m_Rank = value;
            m_RankIsSet = true;
        }

        bool ProfileGroup::rankIsSet() const
        {
            return m_RankIsSet;
        }

        void ProfileGroup::unsetRank()
        {
            m_RankIsSet = false;
        }
        utility::datetime ProfileGroup::getSince() const
        {
            return m_Since;
        }

        void ProfileGroup::setSince(const utility::datetime &value)
        {
            m_Since = value;
            m_SinceIsSet = true;
        }

        bool ProfileGroup::sinceIsSet() const
        {
            return m_SinceIsSet;
        }

        void ProfileGroup::unsetSince()
        {
            m_SinceIsSet = false;
        }

    }
}
