
#include "mainframe.h"

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	m_menubar2 = new wxMenuBar( 0 );
	m_meneFile = new wxMenu();
	m_menubar2->Append( m_meneFile, wxT("File") );

	m_menuHelp = new wxMenu();
	m_menubar2->Append( m_menuHelp, wxT("Help") );

	this->SetMenuBar( m_menubar2 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_dataViewCtrl8 = new wxDataViewCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_dataViewCtrl8, 0, wxALL, 5 );


	bSizer7->Add( bSizer8, 1, wxEXPAND, 0 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	m_staticTextUnitType = new wxStaticText( this, wxID_ANY, wxT("UnitType"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUnitType->Wrap( -1 );
	m_staticTextUnitType->SetFont( wxFont( 18, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer9->Add( m_staticTextUnitType, 0, wxALL, 5 );

	m_staticTextHP = new wxStaticText( this, wxID_ANY, wxT("HP:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHP->Wrap( -1 );
	bSizer9->Add( m_staticTextHP, 0, wxALL, 5 );

	m_staticTextMoves = new wxStaticText( this, wxID_ANY, wxT("Moves:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextMoves->Wrap( -1 );
	bSizer9->Add( m_staticTextMoves, 0, wxALL, 5 );

	m_staticTextWeapons = new wxStaticText( this, wxID_ANY, wxT("Weapons"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextWeapons->Wrap( -1 );
	m_staticTextWeapons->SetFont( wxFont( 14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer9->Add( m_staticTextWeapons, 0, wxALL, 5 );

	m_gridWeapons = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_gridWeapons->CreateGrid( 2, 2 );
	m_gridWeapons->EnableEditing( true );
	m_gridWeapons->EnableGridLines( true );
	m_gridWeapons->EnableDragGridSize( false );
	m_gridWeapons->SetMargins( 0, 0 );

	// Columns
	m_gridWeapons->EnableDragColMove( false );
	m_gridWeapons->EnableDragColSize( true );
	m_gridWeapons->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_gridWeapons->EnableDragRowSize( true );
	m_gridWeapons->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_gridWeapons->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer9->Add( m_gridWeapons, 0, wxALL, 5 );


	bSizer7->Add( bSizer9, 1, wxEXPAND, 0 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	m_bitmapUnitIMG = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_bitmapUnitIMG, 0, wxALL, 5 );


	bSizer7->Add( bSizer10, 1, wxEXPAND, 0 );


	this->SetSizer( bSizer7 );
	this->Layout();

	this->Centre( wxBOTH );
}

MainFrame::~MainFrame()
{
}
