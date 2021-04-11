#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

extern "C" {

extern int IHM_G_ResolH;
extern int IHM_G_ResolV;
extern int IHM_G_mire;
extern int IHM_G_standard;
extern int IHM_G_hfp;
extern int IHM_G_vfp;
extern int IHM_G_hbp;
extern int IHM_G_vbp;
extern int IHM_G_hlength;
extern int IHM_G_vlength;
extern int IHM_G_hsyncpulse;
extern int IHM_G_vsyncpulse;
extern int IHM_G_hpolsync;
extern int IHM_G_vpolsync;
extern int IHM_G_pclock;
extern int IHM_G_fluxcommencer;

extern int IHM_G_protocole;
extern int IHM_G_freq;
extern int IHM_G_octet;
extern int IHM_G_motbinaire;
extern int IHM_G_taillemot;
extern int IHM_G_idcmd;
extern int IHM_G_operateur;
extern int IHM_G_facteurbaud;
extern int IHM_G_adresse;
extern int IHM_G_pins;
extern int IHM_G_buscommencer;

extern int IHM_R_taillebus;
extern int IHM_R_taillemot;
extern int IHM_R_adresse;
extern int IHM_R_operateurbaud;
extern int IHM_R_facteurbaud;
extern int IHM_R_motbinaire;
extern int IHM_R_commencer;

extern int IHM_R_ResolH;
extern int IHM_R_ResolV;
extern int IHM_R_Hsync;
extern int IHM_R_Vsync;
extern int IHM_R_blankingH;
extern int IHM_R_blankingV;
extern int IHM_R_frameformat;
extern int IHM_R_vidformat;
extern int IHM_R_data_dispo_SDI;
extern int IHM_R_data_dispo_DVI;

}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{

}

uint16_t Model::setRecFlux(int choix)
{
	switch (choix)
	{
	case 1:
	  return IHM_R_ResolH;
	  break;
	case 2:
	  return IHM_R_ResolV;
	  break;
	case 3:
	  return IHM_R_Hsync;
	  break;
	case 4:
	  return IHM_R_Vsync;
	  break;
	case 5:
	  return IHM_R_blankingH;
	  break;
	case 6:
	  return IHM_R_blankingV;
	  break;
	case 7:
	  return IHM_R_frameformat;
	  break;
	case 8:
	  return IHM_R_vidformat;
	  break;
	case 9:
	  return IHM_R_data_dispo_SDI=1;
	  break;
	case 10:
	  return IHM_R_data_dispo_DVI=1;
	  break;
	default:
		return 0;
	  break;
	}
}

uint16_t Model::setRecBus(int choix)
{
	switch (choix)
	{
	case 1:
	  return IHM_R_taillebus;
	  break;
	case 2:
	  return IHM_R_taillemot;
	  break;
	case 3:
	  return IHM_R_adresse;
	  break;
	case 4:
	  return IHM_R_operateurbaud;
	  break;
	case 5:
	  return IHM_R_facteurbaud;
	  break;
	case 6:
	  return IHM_R_motbinaire;
	  break;
	case 7:
	  return IHM_R_commencer;
	  break;
	case 8:
	  return IHM_R_commencer=1;
	  break;
	default:
		return 0;
	  break;
	}
}

void Model::setGenFlux(int choix, int val)
{
	switch (choix)
	{
	case 1:
		IHM_G_ResolH=val;
	  break;
	case 2:
		IHM_G_ResolV=val;
	  break;
	case 3:
		IHM_G_mire=val;
	  break;
	case 4:
		IHM_G_standard=val;
	  break;
	case 5:
		IHM_G_hfp=val;
	  break;
	case 6:
		IHM_G_vfp=val;
	  break;
	case 7:
		IHM_G_hbp=val;
	  break;
	case 8:
		IHM_G_vbp=val;
	  break;
	case 9:
		IHM_G_hlength=val;
	  break;
	case 10:
		IHM_G_vlength=val;
	  break;
	case 11:
		IHM_G_hsyncpulse=val;
	  break;
	case 12:
		IHM_G_vsyncpulse=val;
	  break;
	case 13:
		IHM_G_hpolsync=val;
	  break;
	case 14:
		IHM_G_vpolsync=val;
	  break;
	case 15:
		IHM_G_pclock=val;
	  break;
	case 16:
		IHM_G_fluxcommencer=val;
	  break;
	}
}


void Model::setGenBus(int choix, int val)
{
	switch (choix)
	{
	case 1:
		IHM_G_protocole=val;
	  break;
	case 2:
		IHM_G_freq=val;
	  break;
	case 3:
		IHM_G_octet=val;
	  break;
	case 4:
		IHM_G_motbinaire=val;
	  break;
	case 5:
		IHM_G_taillemot=val;
	  break;
	case 6:
		IHM_G_idcmd=val;
	  break;
	case 7:
		IHM_G_operateur=val;
	  break;
	case 8:
		IHM_G_facteurbaud=val;
	  break;
	case 9:
		IHM_G_adresse=val;
	  break;
	case 10:
		IHM_G_pins=val;
	  break;
	case 11:
		IHM_G_buscommencer=val;
	  break;
	}
}

