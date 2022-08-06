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

#include "CoreMinimal.h"
#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

class OPENAPI_API OpenAPIUsersApi
{
public:
	OpenAPIUsersApi();
	~OpenAPIUsersApi();

	/* Sets the URL Endpoint.
	* Note: several fallback endpoints can be configured in request retry policies, see Request::SetShouldRetry */
	void SetURL(const FString& Url);

	/* Adds global header params to all requests */
	void AddHeaderParam(const FString& Key, const FString& Value);
	void ClearHeaderParams();

	/* Sets the retry manager to the user-defined retry manager. User must manage the lifetime of the retry manager.
	* If no retry manager is specified and a request needs retries, a default retry manager will be used.
	* See also: Request::SetShouldRetry */
	void SetHttpRetryManager(FHttpRetrySystem::FManager& RetryManager);
	FHttpRetrySystem::FManager& GetHttpRetryManager();

	class RouteUsersDeleteRequest;
	class RouteUsersDeleteResponse;
	class RouteUsersGetRequest;
	class RouteUsersGetResponse;
	class RouteUsersItemIdDeleteRequest;
	class RouteUsersItemIdDeleteResponse;
	class RouteUsersItemIdGetRequest;
	class RouteUsersItemIdGetResponse;
	class RouteUsersItemIdPutRequest;
	class RouteUsersItemIdPutResponse;
	class RouteUsersPostRequest;
	class RouteUsersPostResponse;
	
    DECLARE_DELEGATE_OneParam(FRouteUsersDeleteDelegate, const RouteUsersDeleteResponse&);
    DECLARE_DELEGATE_OneParam(FRouteUsersGetDelegate, const RouteUsersGetResponse&);
    DECLARE_DELEGATE_OneParam(FRouteUsersItemIdDeleteDelegate, const RouteUsersItemIdDeleteResponse&);
    DECLARE_DELEGATE_OneParam(FRouteUsersItemIdGetDelegate, const RouteUsersItemIdGetResponse&);
    DECLARE_DELEGATE_OneParam(FRouteUsersItemIdPutDelegate, const RouteUsersItemIdPutResponse&);
    DECLARE_DELEGATE_OneParam(FRouteUsersPostDelegate, const RouteUsersPostResponse&);
    
    FHttpRequestPtr RouteUsersDelete(const RouteUsersDeleteRequest& Request, const FRouteUsersDeleteDelegate& Delegate = FRouteUsersDeleteDelegate()) const;
    FHttpRequestPtr RouteUsersGet(const RouteUsersGetRequest& Request, const FRouteUsersGetDelegate& Delegate = FRouteUsersGetDelegate()) const;
    FHttpRequestPtr RouteUsersItemIdDelete(const RouteUsersItemIdDeleteRequest& Request, const FRouteUsersItemIdDeleteDelegate& Delegate = FRouteUsersItemIdDeleteDelegate()) const;
    FHttpRequestPtr RouteUsersItemIdGet(const RouteUsersItemIdGetRequest& Request, const FRouteUsersItemIdGetDelegate& Delegate = FRouteUsersItemIdGetDelegate()) const;
    FHttpRequestPtr RouteUsersItemIdPut(const RouteUsersItemIdPutRequest& Request, const FRouteUsersItemIdPutDelegate& Delegate = FRouteUsersItemIdPutDelegate()) const;
    FHttpRequestPtr RouteUsersPost(const RouteUsersPostRequest& Request, const FRouteUsersPostDelegate& Delegate = FRouteUsersPostDelegate()) const;
    
private:
    void OnRouteUsersDeleteResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRouteUsersDeleteDelegate Delegate) const;
    void OnRouteUsersGetResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRouteUsersGetDelegate Delegate) const;
    void OnRouteUsersItemIdDeleteResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRouteUsersItemIdDeleteDelegate Delegate) const;
    void OnRouteUsersItemIdGetResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRouteUsersItemIdGetDelegate Delegate) const;
    void OnRouteUsersItemIdPutResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRouteUsersItemIdPutDelegate Delegate) const;
    void OnRouteUsersPostResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRouteUsersPostDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
