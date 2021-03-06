//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSTrackedItem.h"

@interface TSTrackedRotationItem : TSTrackedItem
{
    double _x;
    double _y;
    double _z;
    double _timestamp;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 timestamp:(double)arg4;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double z; // @synthesize z=_z;

@end

