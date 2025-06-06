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
 * Package.h
 *
 *
 */

#ifndef TRIBUFU_MODELS_Package_H_
#define TRIBUFU_MODELS_Package_H_

#include "tribufu++/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace tribufu
{
    namespace models
    {

        class Package : public ModelBase
        {
        public:
            Package();
            virtual ~Package();

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
            /// Package members

            utility::string_t getId() const;
            bool idIsSet() const;
            void unsetId();
            void setId(const utility::string_t &value);

            utility::string_t getName() const;
            bool nameIsSet() const;
            void unsetName();
            void setName(const utility::string_t &value);

            utility::string_t getDescription() const;
            bool descriptionIsSet() const;
            void unsetDescription();
            void setDescription(const utility::string_t &value);

            utility::string_t getImageUrl() const;
            bool imageUrlIsSet() const;
            void unsetImage_url();
            void setImageUrl(const utility::string_t &value);

            utility::string_t getAuthorId() const;
            bool authorIdIsSet() const;
            void unsetAuthor_id();
            void setAuthorId(const utility::string_t &value);

            utility::string_t getVersion() const;
            bool versionIsSet() const;
            void unsetVersion();
            void setVersion(const utility::string_t &value);

            utility::string_t getFileUrl() const;
            bool fileUrlIsSet() const;
            void unsetFile_url();
            void setFileUrl(const utility::string_t &value);

            double getRawSize() const;
            bool rawSizeIsSet() const;
            void unsetRaw_size();
            void setRawSize(double value);

            int32_t getDownloadCount() const;
            bool downloadCountIsSet() const;
            void unsetDownload_count();
            void setDownloadCount(int32_t value);

            utility::datetime getLastDownload() const;
            bool lastDownloadIsSet() const;
            void unsetLast_download();
            void setLastDownload(const utility::datetime &value);

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

            utility::string_t m_Name;
            bool m_NameIsSet;

            utility::string_t m_Description;
            bool m_DescriptionIsSet;

            utility::string_t m_Image_url;
            bool m_Image_urlIsSet;

            utility::string_t m_Author_id;
            bool m_Author_idIsSet;

            utility::string_t m_Version;
            bool m_VersionIsSet;

            utility::string_t m_File_url;
            bool m_File_urlIsSet;

            double m_Raw_size;
            bool m_Raw_sizeIsSet;

            int32_t m_Download_count;
            bool m_Download_countIsSet;

            utility::datetime m_Last_download;
            bool m_Last_downloadIsSet;

            utility::datetime m_Created;
            bool m_CreatedIsSet;

            utility::datetime m_Updated;
            bool m_UpdatedIsSet;
        };

    }
}

#endif /* TRIBUFU_MODELS_Package_H_ */
