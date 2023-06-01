#ifndef WXHELPER_API_ROUTINES_H_
#define WXHELPER_API_ROUTINES_H_
namespace wxhelper {

typedef enum HTTP_API_ROUTE {
  // login check
  WECHAT_IS_LOGIN = 0,
  // self info
  WECHAT_GET_SELF_INFO,
  // send message
  WECHAT_MSG_SEND_TEXT,
  WECHAT_MSG_SEND_AT,
  WECHAT_MSG_SEND_CARD,
  WECHAT_MSG_SEND_IMAGE,
  WECHAT_MSG_SEND_FILE,
  WECHAT_MSG_SEND_ARTICLE,
  WECHAT_MSG_SEND_APP,
  // receive message
  WECHAT_MSG_START_HOOK,
  WECHAT_MSG_STOP_HOOK,
  WECHAT_MSG_START_IMAGE_HOOK,
  WECHAT_MSG_STOP_IMAGE_HOOK,
  WECHAT_MSG_START_VOICE_HOOK,
  WECHAT_MSG_STOP_VOICE_HOOK,
  // contact
  WECHAT_CONTACT_GET_LIST,
  WECHAT_CONTACT_CHECK_STATUS,
  WECHAT_CONTACT_DEL,
  WECHAT_CONTACT_SEARCH_BY_CACHE,
  WECHAT_CONTACT_SEARCH_BY_NET,
  WECHAT_CONTACT_ADD_BY_WXID,
  WECHAT_CONTACT_ADD_BY_V3,
  WECHAT_CONTACT_ADD_BY_PUBLIC_ID,
  WECHAT_CONTACT_VERIFY_APPLY,
  WECHAT_CONTACT_EDIT_REMARK,
  // chatroom
  WECHAT_CHATROOM_GET_MEMBER_LIST,
  WECHAT_CHATROOM_GET_MEMBER_NICKNAME,
  WECHAT_CHATROOM_DEL_MEMBER,
  WECHAT_CHATROOM_ADD_MEMBER,
  WECHAT_CHATROOM_SET_ANNOUNCEMENT,
  WECHAT_CHATROOM_SET_CHATROOM_NAME,
  WECHAT_CHATROOM_SET_SELF_NICKNAME,
  // database
  WECHAT_DATABASE_GET_HANDLES,
  WECHAT_DATABASE_BACKUP,
  WECHAT_DATABASE_QUERY,
  // version
  WECHAT_SET_VERSION,
  // log
  WECHAT_LOG_START_HOOK,
  WECHAT_LOG_STOP_HOOK,
  // browser
  WECHAT_BROWSER_OPEN_WITH_URL,
  WECHAT_GET_PUBLIC_MSG,
  WECHAT_MSG_FORWARD_MESSAGE,
  WECHAT_GET_QRCODE_IMAGE,
  WECHAT_GET_A8KEY,
  WECHAT_MSG_SEND_XML,
  WECHAT_LOGOUT,
  WECHAT_GET_TRANSFER,
  WECHAT_GET_CONTACT_ALL,
  WECHAT_GET_CHATROOM_INFO,
  WECHAT_GET_IMG_BY_NAME,
  WECHAT_DO_OCR,
  WECHAT_SEND_PAT_MSG,
  WECHAT_SET_TOP_MSG,
  WECHAT_REMOVE_TOP_MSG,
  WECHAT_SNS_GET_FIRST_PAGE,
  WECHAT_SNS_GET_NEXT_PAGE,
  WECHAT_CONTACT_NAME,
  WECHAT_ATTACH_DOWNLOAD,
  WECHAT_GET_VOICE,
  WECHAT_GET_QRCODE,
  WECHAT_INVITE_MEMBERS,
  WECHAT_GET_MEMBER_PROFILE,
  WECHAT_REVOKE_MSG,
  WECHAT_FORWARD_PUBLIC_MSG,
  WECHAT_FORWARD_PUBLIC_MSG_BY_SVRID,
} WECHAT_HTTP_APIS,
    *PWECHAT_HTTP_APIS;

}
#endif