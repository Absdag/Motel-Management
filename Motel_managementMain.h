/***************************************************************
 * Name:      Motel_managementMain.h
 * Purpose:   Defines Application Frame
 * Author:    Absdag ()
 * Created:   2022-10-25
 * Copyright: Absdag ()
 * License:
 **************************************************************/

#ifndef MOTEL_MANAGEMENTMAIN_H
#define MOTEL_MANAGEMENTMAIN_H

//(*Headers(Motel_managementFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class Motel_managementFrame: public wxFrame
{
    public:

        Motel_managementFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Motel_managementFrame();

    private:

        //(*Handlers(Motel_managementFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(Motel_managementFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Motel_managementFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // MOTEL_MANAGEMENTMAIN_H
