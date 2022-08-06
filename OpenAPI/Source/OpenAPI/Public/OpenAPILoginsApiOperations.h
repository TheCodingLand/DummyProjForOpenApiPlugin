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

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPILoginsApi.h"

#include "OpenAPIHTTPValidationError.h"
#include "OpenAPILoginBase.h"
#include "OpenAPILoginUpdate.h"

namespace OpenAPI
{

/* Delete All

*/
class OPENAPI_API OpenAPILoginsApi::RouteLoginsDeleteRequest : public Request
{
public:
    virtual ~RouteLoginsDeleteRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

};

class OPENAPI_API OpenAPILoginsApi::RouteLoginsDeleteResponse : public Response
{
public:
    virtual ~RouteLoginsDeleteResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPILoginBase> Content;
};

/* Get All

*/
class OPENAPI_API OpenAPILoginsApi::RouteLoginsGetRequest : public Request
{
public:
    virtual ~RouteLoginsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	TOptional<int32> Skip;
	TOptional<int32> Limit;
};

class OPENAPI_API OpenAPILoginsApi::RouteLoginsGetResponse : public Response
{
public:
    virtual ~RouteLoginsGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPILoginBase> Content;
};

/* Delete One

*/
class OPENAPI_API OpenAPILoginsApi::RouteLoginsItemIdDeleteRequest : public Request
{
public:
    virtual ~RouteLoginsItemIdDeleteRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	int32 ItemId = 0;
};

class OPENAPI_API OpenAPILoginsApi::RouteLoginsItemIdDeleteResponse : public Response
{
public:
    virtual ~RouteLoginsItemIdDeleteResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPILoginBase Content;
};

/* Get One

*/
class OPENAPI_API OpenAPILoginsApi::RouteLoginsItemIdGetRequest : public Request
{
public:
    virtual ~RouteLoginsItemIdGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	int32 ItemId = 0;
};

class OPENAPI_API OpenAPILoginsApi::RouteLoginsItemIdGetResponse : public Response
{
public:
    virtual ~RouteLoginsItemIdGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPILoginBase Content;
};

/* Update One

*/
class OPENAPI_API OpenAPILoginsApi::RouteLoginsItemIdPutRequest : public Request
{
public:
    virtual ~RouteLoginsItemIdPutRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	int32 ItemId = 0;
	OpenAPILoginUpdate OpenAPILoginUpdate;
};

class OPENAPI_API OpenAPILoginsApi::RouteLoginsItemIdPutResponse : public Response
{
public:
    virtual ~RouteLoginsItemIdPutResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPILoginBase Content;
};

/* Create One

*/
class OPENAPI_API OpenAPILoginsApi::RouteLoginsPostRequest : public Request
{
public:
    virtual ~RouteLoginsPostRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	OpenAPILoginBase OpenAPILoginBase;
};

class OPENAPI_API OpenAPILoginsApi::RouteLoginsPostResponse : public Response
{
public:
    virtual ~RouteLoginsPostResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPILoginBase Content;
};

}