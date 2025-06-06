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

#include "tribufu++/model/GameServerCluster.h"

namespace tribufu
{
    namespace models
    {

        GameServerCluster::GameServerCluster()
        {
            m_Id = utility::conversions::to_string_t("");
            m_IdIsSet = false;
            m_Name = utility::conversions::to_string_t("");
            m_NameIsSet = false;
            m_Description = utility::conversions::to_string_t("");
            m_DescriptionIsSet = false;
            m_Game_id = utility::conversions::to_string_t("");
            m_Game_idIsSet = false;
            m_Website_url = utility::conversions::to_string_t("");
            m_Website_urlIsSet = false;
            m_Banner_url = utility::conversions::to_string_t("");
            m_Banner_urlIsSet = false;
            m_Owner_id = utility::conversions::to_string_t("");
            m_Owner_idIsSet = false;
            m_Discord_server_id = utility::conversions::to_string_t("");
            m_Discord_server_idIsSet = false;
            m_Youtube_video_url = utility::conversions::to_string_t("");
            m_Youtube_video_urlIsSet = false;
            m_Tags = utility::conversions::to_string_t("");
            m_TagsIsSet = false;
            m_Comment_count = 0;
            m_Comment_countIsSet = false;
            m_Server_count = 0;
            m_Server_countIsSet = false;
            m_Created = utility::datetime();
            m_CreatedIsSet = false;
            m_Updated = utility::datetime();
            m_UpdatedIsSet = false;
        }

        GameServerCluster::~GameServerCluster()
        {
        }

        void GameServerCluster::validate()
        {
            // TODO: implement validation
        }

        web::json::value GameServerCluster::toJson() const
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
            if (m_DescriptionIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("description"))] = ModelBase::toJson(m_Description);
            }
            if (m_Game_idIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("game_id"))] = ModelBase::toJson(m_Game_id);
            }
            if (m_Website_urlIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("website_url"))] = ModelBase::toJson(m_Website_url);
            }
            if (m_Banner_urlIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("banner_url"))] = ModelBase::toJson(m_Banner_url);
            }
            if (m_Owner_idIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("owner_id"))] = ModelBase::toJson(m_Owner_id);
            }
            if (m_Discord_server_idIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("discord_server_id"))] =
                    ModelBase::toJson(m_Discord_server_id);
            }
            if (m_Youtube_video_urlIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("youtube_video_url"))] =
                    ModelBase::toJson(m_Youtube_video_url);
            }
            if (m_TagsIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("tags"))] = ModelBase::toJson(m_Tags);
            }
            if (m_Comment_countIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("comment_count"))] = ModelBase::toJson(m_Comment_count);
            }
            if (m_Server_countIsSet)
            {

                val[utility::conversions::to_string_t(_XPLATSTR("server_count"))] = ModelBase::toJson(m_Server_count);
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

        bool GameServerCluster::fromJson(const web::json::value &val)
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
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("description"))))
            {
                const web::json::value &fieldValue =
                    val.at(utility::conversions::to_string_t(_XPLATSTR("description")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setDescription;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
                    setDescription(refVal_setDescription);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("game_id"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("game_id")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setGameId;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setGameId);
                    setGameId(refVal_setGameId);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("website_url"))))
            {
                const web::json::value &fieldValue =
                    val.at(utility::conversions::to_string_t(_XPLATSTR("website_url")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setWebsiteUrl;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setWebsiteUrl);
                    setWebsiteUrl(refVal_setWebsiteUrl);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("banner_url"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("banner_url")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setBannerUrl;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setBannerUrl);
                    setBannerUrl(refVal_setBannerUrl);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("owner_id"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("owner_id")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setOwnerId;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setOwnerId);
                    setOwnerId(refVal_setOwnerId);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("discord_server_id"))))
            {
                const web::json::value &fieldValue =
                    val.at(utility::conversions::to_string_t(_XPLATSTR("discord_server_id")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setDiscordServerId;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setDiscordServerId);
                    setDiscordServerId(refVal_setDiscordServerId);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("youtube_video_url"))))
            {
                const web::json::value &fieldValue =
                    val.at(utility::conversions::to_string_t(_XPLATSTR("youtube_video_url")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setYoutubeVideoUrl;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setYoutubeVideoUrl);
                    setYoutubeVideoUrl(refVal_setYoutubeVideoUrl);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("tags"))))
            {
                const web::json::value &fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("tags")));
                if (!fieldValue.is_null())
                {
                    utility::string_t refVal_setTags;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setTags);
                    setTags(refVal_setTags);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("comment_count"))))
            {
                const web::json::value &fieldValue =
                    val.at(utility::conversions::to_string_t(_XPLATSTR("comment_count")));
                if (!fieldValue.is_null())
                {
                    int32_t refVal_setCommentCount;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setCommentCount);
                    setCommentCount(refVal_setCommentCount);
                }
            }
            if (val.has_field(utility::conversions::to_string_t(_XPLATSTR("server_count"))))
            {
                const web::json::value &fieldValue =
                    val.at(utility::conversions::to_string_t(_XPLATSTR("server_count")));
                if (!fieldValue.is_null())
                {
                    int32_t refVal_setServerCount;
                    ok &= ModelBase::fromJson(fieldValue, refVal_setServerCount);
                    setServerCount(refVal_setServerCount);
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

        void GameServerCluster::toMultipart(std::shared_ptr<MultipartFormData> multipart,
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
            if (m_NameIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("name")), m_Name));
            }
            if (m_DescriptionIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("description")), m_Description));
            }
            if (m_Game_idIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("game_id")), m_Game_id));
            }
            if (m_Website_urlIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("website_url")), m_Website_url));
            }
            if (m_Banner_urlIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("banner_url")), m_Banner_url));
            }
            if (m_Owner_idIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("owner_id")), m_Owner_id));
            }
            if (m_Discord_server_idIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("discord_server_id")),
                    m_Discord_server_id));
            }
            if (m_Youtube_video_urlIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("youtube_video_url")),
                    m_Youtube_video_url));
            }
            if (m_TagsIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("tags")), m_Tags));
            }
            if (m_Comment_countIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("comment_count")), m_Comment_count));
            }
            if (m_Server_countIsSet)
            {
                multipart->add(ModelBase::toHttpContent(
                    namePrefix + utility::conversions::to_string_t(_XPLATSTR("server_count")), m_Server_count));
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

        bool GameServerCluster::fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                                              const utility::string_t &prefix)
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
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("description"))))
            {
                utility::string_t refVal_setDescription;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("description"))),
                    refVal_setDescription);
                setDescription(refVal_setDescription);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("game_id"))))
            {
                utility::string_t refVal_setGameId;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("game_id"))), refVal_setGameId);
                setGameId(refVal_setGameId);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("website_url"))))
            {
                utility::string_t refVal_setWebsiteUrl;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("website_url"))),
                    refVal_setWebsiteUrl);
                setWebsiteUrl(refVal_setWebsiteUrl);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("banner_url"))))
            {
                utility::string_t refVal_setBannerUrl;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("banner_url"))),
                    refVal_setBannerUrl);
                setBannerUrl(refVal_setBannerUrl);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("owner_id"))))
            {
                utility::string_t refVal_setOwnerId;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("owner_id"))), refVal_setOwnerId);
                setOwnerId(refVal_setOwnerId);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("discord_server_id"))))
            {
                utility::string_t refVal_setDiscordServerId;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("discord_server_id"))),
                    refVal_setDiscordServerId);
                setDiscordServerId(refVal_setDiscordServerId);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("youtube_video_url"))))
            {
                utility::string_t refVal_setYoutubeVideoUrl;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("youtube_video_url"))),
                    refVal_setYoutubeVideoUrl);
                setYoutubeVideoUrl(refVal_setYoutubeVideoUrl);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("tags"))))
            {
                utility::string_t refVal_setTags;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("tags"))), refVal_setTags);
                setTags(refVal_setTags);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("comment_count"))))
            {
                int32_t refVal_setCommentCount;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("comment_count"))),
                    refVal_setCommentCount);
                setCommentCount(refVal_setCommentCount);
            }
            if (multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("server_count"))))
            {
                int32_t refVal_setServerCount;
                ok &= ModelBase::fromHttpContent(
                    multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("server_count"))),
                    refVal_setServerCount);
                setServerCount(refVal_setServerCount);
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

        utility::string_t GameServerCluster::getId() const
        {
            return m_Id;
        }

        void GameServerCluster::setId(const utility::string_t &value)
        {
            m_Id = value;
            m_IdIsSet = true;
        }

        bool GameServerCluster::idIsSet() const
        {
            return m_IdIsSet;
        }

        void GameServerCluster::unsetId()
        {
            m_IdIsSet = false;
        }
        utility::string_t GameServerCluster::getName() const
        {
            return m_Name;
        }

        void GameServerCluster::setName(const utility::string_t &value)
        {
            m_Name = value;
            m_NameIsSet = true;
        }

        bool GameServerCluster::nameIsSet() const
        {
            return m_NameIsSet;
        }

        void GameServerCluster::unsetName()
        {
            m_NameIsSet = false;
        }
        utility::string_t GameServerCluster::getDescription() const
        {
            return m_Description;
        }

        void GameServerCluster::setDescription(const utility::string_t &value)
        {
            m_Description = value;
            m_DescriptionIsSet = true;
        }

        bool GameServerCluster::descriptionIsSet() const
        {
            return m_DescriptionIsSet;
        }

        void GameServerCluster::unsetDescription()
        {
            m_DescriptionIsSet = false;
        }
        utility::string_t GameServerCluster::getGameId() const
        {
            return m_Game_id;
        }

        void GameServerCluster::setGameId(const utility::string_t &value)
        {
            m_Game_id = value;
            m_Game_idIsSet = true;
        }

        bool GameServerCluster::gameIdIsSet() const
        {
            return m_Game_idIsSet;
        }

        void GameServerCluster::unsetGame_id()
        {
            m_Game_idIsSet = false;
        }
        utility::string_t GameServerCluster::getWebsiteUrl() const
        {
            return m_Website_url;
        }

        void GameServerCluster::setWebsiteUrl(const utility::string_t &value)
        {
            m_Website_url = value;
            m_Website_urlIsSet = true;
        }

        bool GameServerCluster::websiteUrlIsSet() const
        {
            return m_Website_urlIsSet;
        }

        void GameServerCluster::unsetWebsite_url()
        {
            m_Website_urlIsSet = false;
        }
        utility::string_t GameServerCluster::getBannerUrl() const
        {
            return m_Banner_url;
        }

        void GameServerCluster::setBannerUrl(const utility::string_t &value)
        {
            m_Banner_url = value;
            m_Banner_urlIsSet = true;
        }

        bool GameServerCluster::bannerUrlIsSet() const
        {
            return m_Banner_urlIsSet;
        }

        void GameServerCluster::unsetBanner_url()
        {
            m_Banner_urlIsSet = false;
        }
        utility::string_t GameServerCluster::getOwnerId() const
        {
            return m_Owner_id;
        }

        void GameServerCluster::setOwnerId(const utility::string_t &value)
        {
            m_Owner_id = value;
            m_Owner_idIsSet = true;
        }

        bool GameServerCluster::ownerIdIsSet() const
        {
            return m_Owner_idIsSet;
        }

        void GameServerCluster::unsetOwner_id()
        {
            m_Owner_idIsSet = false;
        }
        utility::string_t GameServerCluster::getDiscordServerId() const
        {
            return m_Discord_server_id;
        }

        void GameServerCluster::setDiscordServerId(const utility::string_t &value)
        {
            m_Discord_server_id = value;
            m_Discord_server_idIsSet = true;
        }

        bool GameServerCluster::discordServerIdIsSet() const
        {
            return m_Discord_server_idIsSet;
        }

        void GameServerCluster::unsetDiscord_server_id()
        {
            m_Discord_server_idIsSet = false;
        }
        utility::string_t GameServerCluster::getYoutubeVideoUrl() const
        {
            return m_Youtube_video_url;
        }

        void GameServerCluster::setYoutubeVideoUrl(const utility::string_t &value)
        {
            m_Youtube_video_url = value;
            m_Youtube_video_urlIsSet = true;
        }

        bool GameServerCluster::youtubeVideoUrlIsSet() const
        {
            return m_Youtube_video_urlIsSet;
        }

        void GameServerCluster::unsetYoutube_video_url()
        {
            m_Youtube_video_urlIsSet = false;
        }
        utility::string_t GameServerCluster::getTags() const
        {
            return m_Tags;
        }

        void GameServerCluster::setTags(const utility::string_t &value)
        {
            m_Tags = value;
            m_TagsIsSet = true;
        }

        bool GameServerCluster::tagsIsSet() const
        {
            return m_TagsIsSet;
        }

        void GameServerCluster::unsetTags()
        {
            m_TagsIsSet = false;
        }
        int32_t GameServerCluster::getCommentCount() const
        {
            return m_Comment_count;
        }

        void GameServerCluster::setCommentCount(int32_t value)
        {
            m_Comment_count = value;
            m_Comment_countIsSet = true;
        }

        bool GameServerCluster::commentCountIsSet() const
        {
            return m_Comment_countIsSet;
        }

        void GameServerCluster::unsetComment_count()
        {
            m_Comment_countIsSet = false;
        }
        int32_t GameServerCluster::getServerCount() const
        {
            return m_Server_count;
        }

        void GameServerCluster::setServerCount(int32_t value)
        {
            m_Server_count = value;
            m_Server_countIsSet = true;
        }

        bool GameServerCluster::serverCountIsSet() const
        {
            return m_Server_countIsSet;
        }

        void GameServerCluster::unsetServer_count()
        {
            m_Server_countIsSet = false;
        }
        utility::datetime GameServerCluster::getCreated() const
        {
            return m_Created;
        }

        void GameServerCluster::setCreated(const utility::datetime &value)
        {
            m_Created = value;
            m_CreatedIsSet = true;
        }

        bool GameServerCluster::createdIsSet() const
        {
            return m_CreatedIsSet;
        }

        void GameServerCluster::unsetCreated()
        {
            m_CreatedIsSet = false;
        }
        utility::datetime GameServerCluster::getUpdated() const
        {
            return m_Updated;
        }

        void GameServerCluster::setUpdated(const utility::datetime &value)
        {
            m_Updated = value;
            m_UpdatedIsSet = true;
        }

        bool GameServerCluster::updatedIsSet() const
        {
            return m_UpdatedIsSet;
        }

        void GameServerCluster::unsetUpdated()
        {
            m_UpdatedIsSet = false;
        }

    }
}
