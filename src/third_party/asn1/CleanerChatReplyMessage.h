/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CHATCLEANER-PROTOCOL"
 * 	found in "../../../docs/chatcleaner.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_CleanerChatReplyMessage_H_
#define	_CleanerChatReplyMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "CleanerChatType.h"
#include <NativeEnumerated.h>
#include <UTF8String.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Dependencies */
	typedef enum cleanerActionType {
		cleanerActionType_cleanerActionNone	= 0,
		cleanerActionType_cleanerActionWarning	= 1,
		 cleanerActionType_cleanerActionKick	= 2,
		 cleanerActionType_cleanerActionBan	= 3,
		  cleanerActionType_cleanerActionMute	= 4
	}
	                                        e_cleanerActionType;

	/* CleanerChatReplyMessage */
	typedef struct CleanerChatReplyMessage {
		unsigned long	 requestId;
		CleanerChatType_t	 cleanerChatType;
		unsigned long	 playerId;
		long	 cleanerActionType;
		UTF8String_t	*cleanerText	/* OPTIONAL */;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} CleanerChatReplyMessage_t;

	/* Implementation */
	/* extern asn_TYPE_descriptor_t asn_DEF_requestId_2;	// (Use -fall-defs-global to expose) */
	/* extern asn_TYPE_descriptor_t asn_DEF_playerId_4;	// (Use -fall-defs-global to expose) */
	/* extern asn_TYPE_descriptor_t asn_DEF_cleanerActionType_5;	// (Use -fall-defs-global to expose) */
	extern asn_TYPE_descriptor_t asn_DEF_CleanerChatReplyMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _CleanerChatReplyMessage_H_ */
#include <asn_internal.h>
