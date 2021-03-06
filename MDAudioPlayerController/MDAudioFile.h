//
//  AudioFile.h
//  MobileTheatre
//
//  Created by Matt Donnelly on 28/06/2010.
//  Copyright 2010 Matt Donnelly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>


@interface MDAudioFile : NSObject 
{
	NSURL			*filePath;
	NSDictionary	*fileInfoDict;
    NSData          *artData;
}

@property (nonatomic, retain) NSURL *filePath;
@property (nonatomic, retain) NSDictionary *fileInfoDict;
@property (nonatomic, retain) NSData *artData;

- (MDAudioFile *)initWithPath:(NSURL *)path;
- (NSDictionary *)songID3Tags;
- (NSString *)title;
- (NSString *)subtitle;
- (NSString *)artist;
- (NSString *)album;
- (float)duration;
- (NSString *)durationInMinutes;
- (UIImage *)coverImage;

@end
