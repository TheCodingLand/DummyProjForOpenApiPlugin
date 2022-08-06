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

class OPENAPI_API OpenAPIRealmsApi
{
public:
	OpenAPIRealmsApi();
	~OpenAPIRealmsApi();

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

	class RouteRealmsDeleteRequest;
	class RouteRealmsDeleteResponse;
	class RouteRealmsGetRequest;
	class RouteRealmsGetResponse;
	class RouteRealmsItemIdDeleteRequest;
	class RouteRealmsItemIdDeleteResponse;
	class RouteRealmsItemIdGetRequest;
	class RouteRealmsItemIdGetResponse;
	class RouteRealmsItemIdPutRequest;
	class RouteRealmsItemIdPutResponse;
	class RouteRealmsPostRequest;
	class RouteRealmsPostResponse;
	
    DECLARE_DELEGATE_OneParam(FRouteRealmsDeleteDelegate, const RouteRealmsDeleteResponse&);
    DECLARE_DELEGATE_OneParam(FRouteRealmsGetDelegate, const RouteRealmsGetResponse&);
    DECLARE_DELEGATE_OneParam(FRouteRealmsItemIdDeleteDelegate, const RouteRealmsItemIdDeleteResponse&);
    DECLARE_DELEGATE_OneParam(FRouteRealmsItemIdGetDelegate, const RouteRealmsItemIdGetResponse&);
    DECLARE_DELEGATE_OneParam(FRouteRealmsItemIdPutDelegate, const RouteRealmsItemIdPutResponse&);
    DECLARE_DELEGATE_OneParam(FRouteRealmsPostDelegate, const RouteRealmsPostResponse&);
    
    FHttpRequestPtr RouteRealmsDelete(const RouteRealmsDeleteRequest& Request, const FRouteRealmsDeleteDelegate& Delegate = FRouteRealmsDeleteDelegate()) const;
    FHttpRequestPtr RouteRealmsGet(const RouteRealmsGetRequest& Request, const FRouteRealmsGetDelegate& Delegate = FRouteRealmsGetDelegate()) const;
    FHttpRequestPtr RouteRealmsItemIdDelete(const RouteRealmsItemIdDeleteRequest& Request, const FRouteRealmsItemIdDeleteDelegate& Delegate = FRouteRealmsItemIdDeleteDelegate()) const;
    FHttpRequestPtr RouteRealmsItemIdGet(const RouteRealmsItemIdGetRequest& Request, const FRouteRealmsItemIdGetDelegate& Delegate = FRouteRealmsItemIdGetDelegate()) const;
    FHttpRequestPtr RouteRealmsItemIdPut(const RouteRealmsItemIdPutRequest& Request, const FRouteRealmsItemIdPutDelegate& Delegate = FRouteRealmsItemIdPutDelegate()) const;
    FHttpRequestPtr RouteRealmsPost(const RouteRealmsPostRequest& Request, const FRouteRealmsPostDelegate& Delegate = FRouteRealmsPostDelegate()) const;
    
private:
    void OnRouteRealmsDeleteResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRouteRealmsDeleteDelegate Delegate) const;
    void OnRouteRealmsGetResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRouteRealmsGetDelegate Delegate) const;
    void OnRouteRealmsItemIdDeleteResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRouteRealmsItemIdDeleteDelegate Delegate) const;
    void OnRouteRealmsItemIdGetResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRouteRealmsItemIdGetDelegate Delegate) const;
    void OnRouteRealmsItemIdPutResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRouteRealmsItemIdPutDelegate Delegate) const;
    void OnRouteRealmsPostResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRouteRealmsPostDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}