#ifndef _DataControlRenderer_hpp_
#define _DataControlRenderer_hpp_

// simple c-style method that hides implementation from viewer main
// alternatively could have class definition here and instantiate in viewer main
void data_control_renderer_setup(BotViewer* iViewer,
                                 const int iPriority,
                                 const lcm_t* iLcm,
                                 const BotParam* iParam,
                                 const BotFrames* iFrames);

#endif
