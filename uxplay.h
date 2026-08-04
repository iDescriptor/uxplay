#ifdef __cplusplus
extern "C" {
#endif

int init_uxplay(int argc, char *argv[]);

void uxplay_cleanup();
void uxplay_set_audio_volume(double volume);
#ifdef __cplusplus
}
#endif
