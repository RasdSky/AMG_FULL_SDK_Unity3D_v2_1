#if !defined(__AGORA_SDK_C_WRAPPER_H__)
#define __AGORA_SDK_C_WRAPPER_H__

#define API

#if defined(__cplusplus)
extern "C" {
#endif

    API void createEngine(const char *appId);
    API void deleteEngine();
    API const char *getSdkVersion();
    API const char *getMediaEngineVersion();
    API void *getNativeHandle();
    API int joinChannel(const char *channelKey, const char *channelName, const char *info, unsigned int uid);
    API int leaveChannel();
    API int enableLastmileTest();
    API int disableLastmileTest();
    API int enableVideo();
    API int disableVideo();
    API int enableLocalVideo(int enabled);
    API int startPreview();
    API int stopPreview();
    API int enableAudio();
    API int disableAudio();
    API int setParameters(const char *options);
    API char *getParameter(const char *parameter, const char *args);
    API char *getCallId();
    API int rate(const char *callId, int rating, const char *desc);
    API int complain(const char *callId, const char *desc);
    API int setEnableSpeakerphone(int enabled);
    API int isSpeakerphoneEnabled();
    API int setDefaultAudioRoutetoSpeakerphone(int defaultToSpeaker);
    API int setSpeakerphoneVolume(int volume);
    API int enableAudioVolumeIndication(int interval, int smooth);
    API int startAudioRecording(const char *filePath, int quality);
    API int stopAudioRecording();
    API int startAudioMixing(const char *filePath, int loopback, int replace, int cycle, int playTime);
    API int stopAudioMixing();
    API int pauseAudioMixing();
    API int resumeAudioMixing();
    API int adjustAudioMixingVolume(int volume);
    API int getAudioMixingDuration();
    API int getAudioMixingCurrentPosition();
    API int setAudioMixingPosition(int pos);
    API int startEchoTest();
    API int stopEchoTest();
    API int muteLocalAudioStream(int muted);
    API int muteAllRemoteAudioStreams(int muted);
    API int muteRemoteAudioStream(int uid, int muted);
    API int switchCamera();
    API int setVideoProfile(int profile, int swapWidthAndHeight);
    API int muteLocalVideoStream(int muted);
    API int muteAllRemoteVideoStreams(int muted);
    API int muteRemoteVideoStream(int uid, int muted);
    API int setLogFile(const char *filePath);
    API int setLogFilter(unsigned int filter);
    API int renewChannelKey(const char *channelKey);
    API int setChannelProfile(int profile);
    API int setClientRole(int role, const char *permissionKey);
    API int enableDualStreamMode(int enabled);
    API int setEncryptionMode(const char *encryptionMode);
    API int setEncryptionSecret(const char *secret);
    API int setRemoteVideoStreamType(int uid, int streamType);
    API int startRecordingService(const char *recordingKey);
    API int stopRecordingService(const char *recordingKey);
    API int refreshRecordingServiceStatus();
    API int createDataStream(int reliable, int ordered);
    API int sendStreamMessage(int streamId, const char *data);
    API int setRecordingAudioFrameParametersWithSampleRate(int sampleRate, int channel, int mode, int samplesPerCall);
    API int setPlaybackAudioFrameParametersWithSampleRate(int sampleRate, int channel, int mode, int samplesPerCall);
    API int setMixedAudioFrameParameters(int sampleRate, int samplesPerCall);
    API int adjustRecordingSignalVolume(int volume);
    API int adjustPlaybackSignalVolume(int volume);
    API int setHighQualityAudioParametersWithFullband(int fullband, int stereo, int fullBitrate);
    API int enableInEarMonitoring(int enabled);
    API int enableWebSdkInteroperability(int enabled);
    API int setVideoQualityParameters(int preferFrameRateOverImageQuality);


    API int enableVideoObserver();
    API int disableVideoObserver();
    API int generateNativeTexture();
    API int updateTexture(int tex, unsigned int uid);
    API void deleteTexture(int tex);
    
    
    API int getMessageCount();
    API char *getMessage();
    API void freeObject(void *obj);
    
#if defined(__cplusplus)
}
#endif

#endif /* __AGORA_SDK_C_WRAPPER_H__ */
