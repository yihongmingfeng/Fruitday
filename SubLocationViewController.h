//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "CLLocationManagerDelegate.h"
#import "HotLocationViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CLLocationManager, FDHomeViewController, FDViewController, NSArray, NSDictionary, NSString, UIButton, UITableView;

@interface SubLocationViewController : FDBaseViewController <UITableViewDelegate, UITableViewDataSource, CLLocationManagerDelegate, UIAlertViewDelegate, HotLocationViewDelegate>
{
    CLLocationManager *locationManager;
    _Bool _isFirstLaunch;
    _Bool _isLocationByGPSRetrieved;
    _Bool _isRegionNotSupported;
    _Bool _isSelectingLocationForFirstLaunch;
    UITableView *_subLocationsTableView;
    UIButton *_subLocationByGPSButton;
    FDHomeViewController *_homeViewController;
    NSDictionary *_subLocationByGPS;
    NSDictionary *_parentLocation;
    NSArray *_subLocations;
    NSArray *_locations;
    FDViewController *_tabBarViewController;
    NSArray *_hotLocations;
}

@property(retain, nonatomic) NSArray *hotLocations; // @synthesize hotLocations=_hotLocations;
@property(nonatomic) _Bool isSelectingLocationForFirstLaunch; // @synthesize isSelectingLocationForFirstLaunch=_isSelectingLocationForFirstLaunch;
@property(nonatomic) _Bool isRegionNotSupported; // @synthesize isRegionNotSupported=_isRegionNotSupported;
@property(nonatomic) _Bool isLocationByGPSRetrieved; // @synthesize isLocationByGPSRetrieved=_isLocationByGPSRetrieved;
@property(nonatomic) _Bool isFirstLaunch; // @synthesize isFirstLaunch=_isFirstLaunch;
@property(retain, nonatomic) FDViewController *tabBarViewController; // @synthesize tabBarViewController=_tabBarViewController;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSArray *subLocations; // @synthesize subLocations=_subLocations;
@property(retain, nonatomic) NSDictionary *parentLocation; // @synthesize parentLocation=_parentLocation;
@property(retain, nonatomic) NSDictionary *subLocationByGPS; // @synthesize subLocationByGPS=_subLocationByGPS;
@property(retain, nonatomic) FDHomeViewController *homeViewController; // @synthesize homeViewController=_homeViewController;
@property(nonatomic) __weak UIButton *subLocationByGPSButton; // @synthesize subLocationByGPSButton=_subLocationByGPSButton;
@property(nonatomic) __weak UITableView *subLocationsTableView; // @synthesize subLocationsTableView=_subLocationsTableView;
- (void).cxx_destruct;
- (void)finishSelectingLocation:(id)arg1;
- (void)onSubLocationByGPSPress:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didSelectHotLocation:(id)arg1;
- (void)initHotLocation;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)hackLocation;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locateCity:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)initLocating;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
