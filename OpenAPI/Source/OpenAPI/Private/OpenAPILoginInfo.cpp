/**
 * Daor
 * Api for DAOR MMORPG server.
 *
 * OpenAPI spec version: 0.0.1
 * Contact: julien.lebourg@ctg.lu
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPILoginInfo.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPILoginInfo::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("username")); WriteJsonValue(Writer, Username);
	Writer->WriteIdentifierPrefix(TEXT("password")); WriteJsonValue(Writer, Password);
	Writer->WriteObjectEnd();
}

bool OpenAPILoginInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("username"), Username);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("password"), Password);

	return ParseSuccess;
}

}