//
//  AVKVersion.h
//  AXVersionKit
//
//  Created by devedbox on 2017/3/30.
//  Copyright © 2017年 devedbox. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <Foundation/Foundation.h>

@interface AVKVersion : NSObject
/// primaryGenreName.
@property(readonly, copy, nonatomic) NSString *primaryGenreName;
/// Artist id of the app.
@property(readonly, copy, nonatomic) NSString *artistId;
/// artworkUrl100.
@property(readonly, copy, nonatomic) NSString *artworkUrl100;
/// sellerUrl.
@property(readonly, copy, nonatomic) NSString *sellerUrl;
/// currency.
@property(readonly, copy, nonatomic) NSString *currency;
/// artworkUrl512.
@property(readonly, copy, nonatomic) NSString *artworkUrl512;
/// ipadScreenshotUrls.
@property(readonly, copy, nonatomic) NSArray<NSString *> *ipadScreenshotUrls;
/// fileSizeBytes.
@property(readonly, nonatomic) NSUInteger fileSizeBytes;
/// genres.
@property(readonly, copy, nonatomic) NSArray<NSString *> *genres;
/// languageCodesISO2A.
@property(readonly, copy, nonatomic) NSArray<NSString *> *languageCodesISO2A;
/// artworkUrl60.
@property(readonly, copy, nonatomic) NSString *artworkUrl60;
/// supportedDevices.
@property(readonly, copy, nonatomic) NSArray<NSString *> *supportedDevices;
/// trackViewUrl.
@property(readonly, copy, nonatomic) NSString *trackViewUrl;
/// description.
@property(readonly, copy, nonatomic) NSString *description;
/// version.
@property(readonly, copy, nonatomic) NSString *version;
/// bundleId.
@property(readonly, copy, nonatomic) NSString *bundleId;
/// artistViewUrl.
@property(readonly, copy, nonatomic) NSString *artistViewUrl;
/// userRatingCountForCurrentVersion.
@property(readonly, nonatomic) NSUInteger userRatingCountForCurrentVersion;
/// releaseDate.
@property(readonly, copy, nonatomic) NSString *releaseDate;
/// appletvScreenshotUrls.
@property(readonly, copy, nonatomic) NSArray<NSString *> *appletvScreenshotUrls;
/// screenshotUrls.
@property(readonly, copy, nonatomic) NSArray<NSString *> *screenshotUrls;
/// isGameCenterEnabled.
@property(readonly, nonatomic) BOOL isGameCenterEnabled;
/// wrapperType.
@property(readonly, copy, nonatomic) NSString *wrapperType;
/// averageUserRatingForCurrentVersion.
@property(readonly, nonatomic) NSUInteger averageUserRatingForCurrentVersion;
/// genreIds.
@property(readonly, copy, nonatomic) NSArray<NSString *> *genreIds;
/// trackId.
@property(readonly, copy, nonatomic) NSString *trackId;
/// minimumOsVersion.
@property(readonly, copy, nonatomic) NSString *minimumOsVersion;
/// formattedPrice.
@property(readonly, copy, nonatomic) NSString *formattedPrice;
/// primaryGenreId.
@property(readonly, copy, nonatomic) NSString *primaryGenreId;
/// currentVersionReleaseDate.
@property(readonly, copy, nonatomic) NSString *currentVersionReleaseDate;
/// trackContentRating.
@property(readonly, copy, nonatomic) NSString *trackContentRating;
/// artistName.
@property(readonly, copy, nonatomic) NSString *artistName;
/// price
@property(readonly, nonatomic) NSDecimalNumber *price;
/// trackCensoredName.
@property(readonly, copy, nonatomic) NSString *trackCensoredName;
/// trackName.
@property(readonly, copy, nonatomic) NSString *trackName;
/// kind.
@property(readonly, copy, nonatomic) NSString *kind;
/// features.
@property(readonly, copy, nonatomic) NSArray<NSString *> *features;
/// releaseNotes.
@property(readonly, copy, nonatomic) NSString *releaseNotes;
/// isVppDeviceBasedLicensingEnabled.
@property(readonly, nonatomic) BOOL isVppDeviceBasedLicensingEnabled;
/// sellerName.
@property(readonly, copy, nonatomic) NSString *sellerName;
#pragma mark - Content rating.
/// Advisories items of content.
@property(readonly, copy, nonatomic) NSString *advisories;
/// Advisory rating of content.
@property(readonly, copy, nonatomic) NSString *contentAdvisoryRating;
@end
