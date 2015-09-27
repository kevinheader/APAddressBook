//
//  APSocialContact.h
//  SyncBook
//
//  Created by David on 2014-08-01.
//  Copyright (c) 2014 David Muzi. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, APSocialNetworkType)
{
    APSocialNetworkUnknown = 0,
    APSocialNetworkFacebook = 1,
    APSocialNetworkTwitter = 2,
    APSocialNetworkLinkedIn = 3,
    APSocialNetworkFlickr = 4,
    APSocialNetworkGameCenter = 5
};

@interface APSocialProfile : NSObject

@property (nonatomic, readonly) APSocialNetworkType socialNetwork;
@property (nullable, nonatomic, readonly) NSString *username;
@property (nullable, nonatomic, readonly) NSString *userIdentifier;
@property (nullable, nonatomic, readonly) NSURL *url;

- (nonnull instancetype)initWithSocialDictionary:(nonnull NSDictionary *)dictionary;

@end
