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

#include "OpenAPIInventoryBase.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIInventoryBase::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("character_id")); WriteJsonValue(Writer, CharacterId);
	Writer->WriteIdentifierPrefix(TEXT("slot")); WriteJsonValue(Writer, Slot);
	Writer->WriteIdentifierPrefix(TEXT("item")); WriteJsonValue(Writer, Item);
	Writer->WriteIdentifierPrefix(TEXT("amount")); WriteJsonValue(Writer, Amount);
	Writer->WriteObjectEnd();
}

bool OpenAPIInventoryBase::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("character_id"), CharacterId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("slot"), Slot);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("item"), Item);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("amount"), Amount);

	return ParseSuccess;
}

}
