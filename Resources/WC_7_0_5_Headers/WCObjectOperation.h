//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class WCSocialInfluenceInfo;

@interface WCObjectOperation : NSObject <NSCoding>
{
    int snsOperateFlag;
    WCSocialInfluenceInfo *socialInfluenceInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int snsOperateFlag; // @synthesize snsOperateFlag;
@property(retain, nonatomic) WCSocialInfluenceInfo *socialInfluenceInfo; // @synthesize socialInfluenceInfo;

@end

