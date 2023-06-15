#include <gst/gst.h>
#include <string>
#include<iostream>
using namespace std;
void usbset();//function to create thumbnail for usb video
static int set_pipeline(string video_path, string thumbnail_path);//function to set the pipeline and do operation
static void pad_added_handler(GstElement *src, GstPad *pad, GstElement *sink);//function to add the get the pad and connect
void message_bus_handler(GstMessage *msg);// print the message from bus
int internal_storage_set();//function to create thumbnail for internal storage video