#ifndef TELEOP_PANEL_H
#define TELEOP_PANEL_H

#include <ros/ros.h>
#include <QLabel>
#include <rviz/panel.h>


class QLineEdit;

namespace cal_gui_plugin
{
  class calPanel: public rviz::Panel
  {
    Q_OBJECT
    public:
       QLabel* obs_msg_lb_;
       QLabel* final_resid_lb_;
       calPanel( QWidget* parent = 0 );

       ros::ServiceClient client1_;
       ros::ServiceClient client2_;
       ros::ServiceClient client3_;
       ros::ServiceClient client4_;
    public Q_SLOTS:
      void setbutton1Clicked ();
      void setbutton2Clicked ();
      void setbutton3Clicked ();
      void setbutton4Clicked ();
    private:
      QLineEdit* allowed_residual_;


  };
} //end namespace call_gui_plugin

#endif
