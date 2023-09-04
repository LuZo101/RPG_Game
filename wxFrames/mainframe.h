///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-370-gc831f1f7)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/dataview.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/grid.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/frame.h>

class MainFrame : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar2;
		wxMenu* m_meneFile;
		wxMenu* m_menuHelp;
		wxDataViewCtrl* m_dataViewCtrl8;
		wxStaticText* m_staticTextUnitType;
		wxStaticText* m_staticTextHP;
		wxStaticText* m_staticTextMoves;
		wxStaticText* m_staticTextWeapons;
		wxGrid* m_gridWeapons;
		wxStaticBitmap* m_bitmapUnitIMG;

	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 795,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrame();

};

