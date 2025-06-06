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
 * Profile.h
 *
 *
 */

#ifndef TRIBUFU_MODELS_Profile_H_
#define TRIBUFU_MODELS_Profile_H_

#include "tribufu++/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace tribufu
{
    namespace models
    {

        class Profile : public ModelBase
        {
        public:
            Profile();
            virtual ~Profile();

            /////////////////////////////////////////////
            /// ModelBase overrides

            void validate() override;

            web::json::value toJson() const override;
            bool fromJson(const web::json::value &json) override;

            void toMultipart(std::shared_ptr<MultipartFormData> multipart,
                             const utility::string_t &namePrefix) const override;
            bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                               const utility::string_t &namePrefix) override;

            /////////////////////////////////////////////
            /// Profile members

            utility::string_t getId() const;
            bool idIsSet() const;
            void unsetId();
            void setId(const utility::string_t &value);

            utility::string_t getUuid() const;
            bool uuidIsSet() const;
            void unsetUuid();
            void setUuid(const utility::string_t &value);

            utility::string_t getName() const;
            bool nameIsSet() const;
            void unsetName();
            void setName(const utility::string_t &value);

            utility::string_t getDisplayName() const;
            bool displayNameIsSet() const;
            void unsetDisplay_name();
            void setDisplayName(const utility::string_t &value);

            bool isVerified() const;
            bool verifiedIsSet() const;
            void unsetVerified();
            void setVerified(bool value);

            int32_t getLevel() const;
            bool levelIsSet() const;
            void unsetLevel();
            void setLevel(int32_t value);

            double getExperience() const;
            bool experienceIsSet() const;
            void unsetExperience();
            void setExperience(double value);

            bool isPublicBirthday() const;
            bool publicBirthdayIsSet() const;
            void unsetPublic_birthday();
            void setPublicBirthday(bool value);

            utility::datetime getBirthday() const;
            bool birthdayIsSet() const;
            void unsetBirthday();
            void setBirthday(const utility::datetime &value);

            double getPoints() const;
            bool pointsIsSet() const;
            void unsetPoints();
            void setPoints(double value);

            utility::string_t getLocation() const;
            bool locationIsSet() const;
            void unsetLocation();
            void setLocation(const utility::string_t &value);

            utility::string_t getPhotoUrl() const;
            bool photoUrlIsSet() const;
            void unsetPhoto_url();
            void setPhotoUrl(const utility::string_t &value);

            utility::string_t getBannerUrl() const;
            bool bannerUrlIsSet() const;
            void unsetBanner_url();
            void setBannerUrl(const utility::string_t &value);

            utility::datetime getLastOnline() const;
            bool lastOnlineIsSet() const;
            void unsetLast_online();
            void setLastOnline(const utility::datetime &value);

            utility::string_t getBiography() const;
            bool biographyIsSet() const;
            void unsetBiography();
            void setBiography(const utility::string_t &value);

            int32_t getViewCount() const;
            bool viewCountIsSet() const;
            void unsetView_count();
            void setViewCount(int32_t value);

            utility::datetime getCreated() const;
            bool createdIsSet() const;
            void unsetCreated();
            void setCreated(const utility::datetime &value);

            utility::datetime getUpdated() const;
            bool updatedIsSet() const;
            void unsetUpdated();
            void setUpdated(const utility::datetime &value);

        protected:
            utility::string_t m_Id;
            bool m_IdIsSet;

            utility::string_t m_Uuid;
            bool m_UuidIsSet;

            utility::string_t m_Name;
            bool m_NameIsSet;

            utility::string_t m_Display_name;
            bool m_Display_nameIsSet;

            bool m_Verified;
            bool m_VerifiedIsSet;

            int32_t m_Level;
            bool m_LevelIsSet;

            double m_Experience;
            bool m_ExperienceIsSet;

            bool m_Public_birthday;
            bool m_Public_birthdayIsSet;

            utility::datetime m_Birthday;
            bool m_BirthdayIsSet;

            double m_Points;
            bool m_PointsIsSet;

            utility::string_t m_Location;
            bool m_LocationIsSet;

            utility::string_t m_Photo_url;
            bool m_Photo_urlIsSet;

            utility::string_t m_Banner_url;
            bool m_Banner_urlIsSet;

            utility::datetime m_Last_online;
            bool m_Last_onlineIsSet;

            utility::string_t m_Biography;
            bool m_BiographyIsSet;

            int32_t m_View_count;
            bool m_View_countIsSet;

            utility::datetime m_Created;
            bool m_CreatedIsSet;

            utility::datetime m_Updated;
            bool m_UpdatedIsSet;
        };

    }
}

#endif /* TRIBUFU_MODELS_Profile_H_ */
