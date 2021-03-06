//
//  BaseService.h
//  BaseService
//
//

#import <Foundation/Foundation.h>

@class QBASessionCreationRequest;

@interface QBBaseModule : NSObject{
}

@property (nonatomic, retain) NSString *token;
@property (nonatomic, retain) NSDate *tokenExpirationDate;
@property (nonatomic, assign) enum QBSessionType sessionType;
@property (nonatomic, retain) QBASessionCreationRequest *sessionCreationRequest;

+ (void) createSharedModule;
+ (QBBaseModule *) sharedModule;

- (void)reset;


#pragma mark -
#pragma mark Server endpoint url

+ (NSString *)serverEndpointURL;
+ (NSString *)chatServerEndpointURL;
+ (NSString *)chatMUCServerEndpointURL;

@end