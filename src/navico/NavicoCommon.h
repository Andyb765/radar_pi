
#ifndef NAVICO_SPOKES
#define NAVICO_SPOKES 2048
#endif

#ifndef NAVICO_SPOKE_LEN
#define NAVICO_SPOKE_LEN 512
#endif

#if SPOKES_MAX < NAVICO_SPOKES
#undef SPOKES_MAX
#define SPOKES_MAX NAVICO_SPOKES
#endif
#if SPOKE_LEN_MAX < NAVICO_SPOKE_LEN
#undef SPOKE_LEN_MAX
#define SPOKE_LEN_MAX NAVICO_SPOKE_LEN
#endif