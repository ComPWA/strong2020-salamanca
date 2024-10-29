#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{

  double Q2_bin[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
  double W_bin[31] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
  double costheta_bin[40] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};

  double ACC_Q2_f[20] = {0};
  double ACC_W_f[31] = {0};
  double ACC_c_f[40] = {0};
  double ACC_Q2_b[20] = {0};
  double ACC_W_b[31] = {0};
  double ACC_c_b[40] = {0};

  double Q2[20] = {0};
  double W[31] = {0};
  double costheta[40] = {0};

  double Q2_data_x_up[20] = {0};
  double W_data_x_up[31] = {0};
  double costheta_data_x_up[40] = {0};
  double Q2_MC_x_up[20] = {0};
  double W_MC_x_up[31] = {0};
  double costheta_MC_x_up[40] = {0};
  double Q2_REC_x_up[20] = {0};
  double W_REC_x_up[31] = {0};
  double costheta_REC_x_up[40] = {0};

  double Q2_data_y_up[20] = {0};
  double W_data_y_up[31] = {0};
  double costheta_data_y_up[40] = {0};
  double Q2_MC_y_up[20] = {0};
  double W_MC_y_up[31] = {0};
  double costheta_MC_y_up[40] = {0};
  double Q2_REC_y_up[20] = {0};
  double W_REC_y_up[31] = {0};
  double costheta_REC_y_up[40] = {0};

  double Q2_data_z_up[20] = {0};
  double W_data_z_up[31] = {0};
  double costheta_data_z_up[40] = {0};
  double Q2_MC_z_up[20] = {0};
  double W_MC_z_up[31] = {0};
  double costheta_MC_z_up[40] = {0};
  double Q2_REC_z_up[20] = {0};
  double W_REC_z_up[31] = {0};
  double costheta_REC_z_up[40] = {0};

  double Q2_data_x_down[20] = {0};
  double W_data_x_down[31] = {0};
  double costheta_data_x_down[40] = {0};
  double Q2_MC_x_down[20] = {0};
  double W_MC_x_down[31] = {0};
  double costheta_MC_x_down[40] = {0};
  double Q2_REC_x_down[20] = {0};
  double W_REC_x_down[31] = {0};
  double costheta_REC_x_down[40] = {0};

  double Q2_data_y_down[20] = {0};
  double W_data_y_down[31] = {0};
  double costheta_data_y_down[40] = {0};
  double Q2_MC_y_down[20] = {0};
  double W_MC_y_down[31] = {0};
  double costheta_MC_y_down[40] = {0};
  double Q2_REC_y_down[20] = {0};
  double W_REC_y_down[31] = {0};
  double costheta_REC_y_down[40] = {0};

  double Q2_data_z_down[20] = {0};
  double W_data_z_down[31] = {0};
  double costheta_data_z_down[40] = {0};
  double Q2_MC_z_down[20] = {0};
  double W_MC_z_down[31] = {0};
  double costheta_MC_z_down[40] = {0};
  double Q2_REC_z_down[20] = {0};
  double W_REC_z_down[31] = {0};
  double costheta_REC_z_down[40] = {0};

  bool Pprime = true;
  bool Psec = false;
  bool Punprime = false;
  bool sigmaTRUE = false;
  bool windowTRUE = true;

  // Leggo i file 1D e acquisisco i valori

  ifstream lettura;

  if (windowTRUE)
  {

    if (!sigmaTRUE)
      if (Pprime)
        lettura.open("Q2_Pprime_induced_lambda.dat");
  }

  int tot = 0;
  for (int i = 0; i < 20; i++)
  {
    lettura >> Q2[i] >> Q2_data_x_up[i] >> Q2_data_x_down[i] >> Q2_data_y_up[i] >> Q2_data_y_down[i] >> Q2_data_z_up[i] >> Q2_data_z_down[i];
  }
  lettura.close();

  if (windowTRUE)
  {

    if (!sigmaTRUE)
      if (Pprime)
        lettura.open("genKY_Q2_Pprime_induced_MC_lambda.dat");
  }

  if (!windowTRUE)
  {

    if (!sigmaTRUE)
      if (Pprime)
        lettura.open("/home/Lucilla/workspace/KYdata/prove1/genKY_Q2_Pprime_induced_MC_lambda.dat");
  }

  tot = 0;
  for (int i = 0; i < 20; i++)
  {
    lettura >> Q2[i] >> Q2_MC_x_up[i] >> Q2_MC_x_down[i] >> Q2_MC_y_up[i] >> Q2_MC_y_down[i] >> Q2_MC_z_up[i] >> Q2_MC_z_down[i];
    Q2_MC_x_up[i] = Q2_MC_x_up[i] * 0.64;
    Q2_MC_x_down[i] = Q2_MC_x_down[i] * 0.64;
    Q2_MC_y_up[i] = Q2_MC_y_up[i] * 0.64;
    Q2_MC_y_down[i] = Q2_MC_y_down[i] * 0.64;
    Q2_MC_z_up[i] = Q2_MC_z_up[i] * 0.64;
    Q2_MC_z_down[i] = Q2_MC_z_down[i] * 0.64;
  }
  lettura.close();

  if (windowTRUE)
  {

    if (!sigmaTRUE)
      if (Pprime)
        lettura.open("Q2_Pprime_induced_REC_genKY_lambda.dat");
  }

  tot = 0;
  for (int i = 0; i < 20; i++)
  {
    lettura >> Q2[i] >> Q2_REC_x_up[i] >> Q2_REC_x_down[i] >> Q2_REC_y_up[i] >> Q2_REC_y_down[i] >> Q2_REC_z_up[i] >> Q2_REC_z_down[i];
  }
  lettura.close();

  for (int i = 0; i < 20; i++)
  {
    ACC_Q2_f[i] = 0.64 * (double)(Q2_REC_x_up[i] / (Q2_MC_x_up[i]));
  }
  for (int i = 0; i < 20; i++)
  {
    ACC_Q2_b[i] = 0.64 * (double)(Q2_REC_x_down[i] / (Q2_MC_x_down[i]));
  }

  if (windowTRUE)
  {

    if (!sigmaTRUE)
      if (Pprime)
        lettura.open("W_Pprime_induced_lambda.dat");
  }

  tot = 0;
  for (int i = 0; i < 31; i++)
  {
    lettura >> W[i] >> W_data_x_up[i] >> W_data_x_down[i] >> W_data_y_up[i] >> W_data_y_down[i] >> W_data_z_up[i] >> W_data_z_down[i];
  }
  lettura.close();

  if (windowTRUE)
  {

    if (!sigmaTRUE)
      if (Pprime)
        lettura.open("genKY_W_Pprime_induced_MC_lambda.dat");
  }

  tot = 0;
  for (int i = 0; i < 31; i++)
  {
    lettura >> W[i] >> W_MC_x_up[i] >> W_MC_x_down[i] >> W_MC_y_up[i] >> W_MC_y_down[i] >> W_MC_z_up[i] >> W_MC_z_down[i];
    W_MC_x_up[i] = W_MC_x_up[i] * 0.64;
    W_MC_x_down[i] = W_MC_x_down[i] * 0.64;
    W_MC_y_up[i] = W_MC_y_up[i] * 0.64;
    W_MC_y_down[i] = W_MC_y_down[i] * 0.64;
    W_MC_z_up[i] = W_MC_z_up[i] * 0.64;
    W_MC_z_down[i] = W_MC_z_down[i] * 0.64;
  }
  lettura.close();

  if (windowTRUE)
  {

    if (!sigmaTRUE)
      if (Pprime)
        lettura.open("W_Pprime_induced_REC_genKY_lambda.dat");
  }

  tot = 0;
  for (int i = 0; i < 31; i++)
  {
    lettura >> W[i] >> W_REC_x_up[i] >> W_REC_x_down[i] >> W_REC_y_up[i] >> W_REC_y_down[i] >> W_REC_z_up[i] >> W_REC_z_down[i];
  }
  lettura.close();
  for (int i = 0; i < 31; i++)
  {
    if (W_MC_x_up[i] != 0)
      ACC_W_f[i] = 0.64 * (double)(W_REC_x_up[i] / (W_MC_x_up[i]));
  }
  for (int i = 0; i < 31; i++)
  {
    if (W_MC_x_down[i] != 0)
      ACC_W_b[i] = 0.64 * (double)(W_REC_x_down[i] / (W_MC_x_down[i]));
  }

  if (windowTRUE)
  {

    if (!sigmaTRUE)
      if (Pprime)
        lettura.open("costheta_Pprime_induced_lambda.dat");
  }

  tot = 0;
  for (int i = 0; i < 40; i++)
  {
    lettura >> costheta[i] >> costheta_data_x_up[i] >> costheta_data_x_down[i] >> costheta_data_y_up[i] >> costheta_data_y_down[i] >> costheta_data_z_up[i] >> costheta_data_z_down[i];
  }
  lettura.close();

  if (windowTRUE)
  {

    if (!sigmaTRUE)
      if (Pprime)
        lettura.open("genKY_costheta_Pprime_induced_MC_lambda.dat");
  }

  for (int i = 0; i < 40; i++)
  {
    lettura >> costheta[i] >> costheta_MC_x_up[i] >> costheta_MC_x_down[i] >> costheta_MC_y_up[i] >> costheta_MC_y_down[i] >> costheta_MC_z_up[i] >> costheta_MC_z_down[i];
    costheta_MC_x_up[i] = costheta_MC_x_up[i] * 0.64;
    costheta_MC_x_down[i] = costheta_MC_x_down[i] * 0.64;
    costheta_MC_y_up[i] = costheta_MC_y_up[i] * 0.64;
    costheta_MC_y_down[i] = costheta_MC_y_down[i] * 0.64;
    costheta_MC_z_up[i] = costheta_MC_z_up[i] * 0.64;
    costheta_MC_z_down[i] = costheta_MC_z_down[i] * 0.64;
  }
  lettura.close();

  if (windowTRUE)
  {

    if (!sigmaTRUE)
      if (Pprime)
        lettura.open("costheta_Pprime_induced_REC_genKY_lambda.dat");
  }

  for (int i = 0; i < 40; i++)
  {
    lettura >> costheta[i] >> costheta_REC_x_up[i] >> costheta_REC_x_down[i] >> costheta_REC_y_up[i] >> costheta_REC_y_down[i] >> costheta_REC_z_up[i] >> costheta_REC_z_down[i];
  }
  lettura.close();

  for (int i = 0; i < 40; i++)
  {
    ACC_c_f[i] = 0.64 * (double)(costheta_REC_x_up[i] / (costheta_MC_x_up[i]));
  }
  for (int i = 0; i < 40; i++)
  {
    ACC_c_b[i] = 0.64 * (double)(costheta_REC_x_down[i] / (costheta_MC_x_down[i]));
  }

  double N_tot = 0;
  char comp_array[] = {"xyz"};
  double Costheta_array[40] = {-1, -0.95, -0.9, -0.85, -0.8, -0.75, -0.7, -0.65, -0.6, -0.55, -0.5, -0.45, -0.4, -0.35, -0.3, -0.25, -0.2, -0.15, -0.1, -0.05, 0., 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95};
  double W_array[31] = {1.625, 1.650, 1.675, 1.7, 1.725, 1.75, 1.775, 1.8, 1.825, 1.85, 1.875, 1.9, 1.925, 1.95, 1.975, 2., 2.025, 2.05, 2.075, 2.1, 2.125, 2.15, 2.175, 2.2, 2.225, 2.25, 2.275, 2.3, 2.325, 2.35, 2.375};
  double Q2_array[20] = {0.35, 0.45, 0.55, 0.65, 0.75, 0.85, 0.95, 1.05, 1.15, 1.25, 1.35, 1.45, 1.6, 1.8, 2., 2.2, 2.4, 2.65, 2.95, 3.3};
  double asimmetry_q2[20] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_q2_REC[20] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_q2_corr[20] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_q2_REC_corr[20] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_q2_MC[20] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_w[31] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_w_REC[31] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_w_corr[31] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_w_REC_corr[31] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_w_MC[31] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_c[40] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_c_REC[40] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_c_corr[40] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_c_REC_corr[40] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double asimmetry_c_MC[40] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double err_q2[20] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double err_q2_REC[20] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double err_q2_MC[20] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double err_w[31] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double err_w_REC[31] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double err_w_MC[31] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double err_c[40] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double err_c_REC[40] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};
  double err_c_MC[40] = {0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.};

  // Q2
  ofstream myfile;
  myfile.open("example.txt");
  //   cout<<" X  "<<endl;
  for (int i = 0; i < 20; i++)
  {
    asimmetry_q2[i] = (double)(Q2_data_x_up[i] - Q2_data_x_down[i]) / (Q2_data_x_up[i] + Q2_data_x_down[i]) / 0.5 / 0.732;
    asimmetry_q2_REC[i] = (double)(Q2_REC_x_up[i] - Q2_REC_x_down[i]) / (Q2_REC_x_up[i] + Q2_REC_x_down[i]) / 0.5 / 0.732;
    asimmetry_q2_MC[i] = (double)(Q2_MC_x_up[i] - Q2_MC_x_down[i]) / (Q2_MC_x_up[i] + Q2_MC_x_down[i]) / 0.5 / 0.732;
    asimmetry_q2_corr[i] = (double)((Q2_data_x_up[i] / (Q2_REC_x_up[i] / Q2_MC_x_up[i])) - (Q2_data_x_down[i] / (Q2_REC_x_down[i] / Q2_MC_x_down[i]))) / ((Q2_data_x_up[i] / (Q2_REC_x_up[i] / Q2_MC_x_up[i])) + (Q2_data_x_down[i] / (Q2_REC_x_down[i] / Q2_MC_x_down[i]))) / 0.5 / 0.732;
    if (sigmaTRUE)
    {
      asimmetry_q2[i] = asimmetry_q2[i] / (-0.256);
      asimmetry_q2_REC[i] = asimmetry_q2_REC[i] / (-0.256);
      asimmetry_q2_MC[i] = asimmetry_q2_MC[i] / (-0.256);
      asimmetry_q2_corr[i] = asimmetry_q2_corr[i] / (-0.256);
    }
    //   cout<<"Q2: "<<Q2_array[i]<<"   "<<asimmetry_q2_corr[i]<<"   "<<Q2_data_x_up[i] <<"   "<< Q2_REC_x_up[i]<<"  "<<Q2_MC_x_up[i]<<endl;
    asimmetry_q2_REC_corr[i] = (double)((Q2_REC_x_up[i] / (Q2_REC_x_up[i] / Q2_MC_x_up[i])) - (Q2_REC_x_down[i] / (Q2_REC_x_down[i] / Q2_MC_x_down[i]))) / ((Q2_REC_x_up[i] / (Q2_REC_x_up[i] / Q2_MC_x_up[i])) + (Q2_REC_x_down[i] / (Q2_REC_x_down[i] / Q2_MC_x_down[i]))) / 0.5 / 0.732;

    myfile << Q2_array[i] << "  " << asimmetry_q2_corr[i] << endl;
  }

  myfile.close();

  // W

  //   cout<<" X  "<<endl;
  for (int i = 0; i < 31; i++)
  {
    asimmetry_w[i] = (double)(W_data_x_up[i] - W_data_x_down[i]) / (W_data_x_up[i] + W_data_x_down[i]) / 0.5 / 0.732;
    asimmetry_w_REC[i] = (double)(W_REC_x_up[i] - W_REC_x_down[i]) / (W_REC_x_up[i] + W_REC_x_down[i]) / 0.5 / 0.732;
    asimmetry_w_MC[i] = (double)(W_MC_x_up[i] - W_MC_x_down[i]) / (W_MC_x_up[i] + W_MC_x_down[i]) / 0.5 / 0.732;
    asimmetry_w_corr[i] = (double)((W_data_x_up[i] / (W_REC_x_up[i] / W_MC_x_up[i])) - (W_data_x_down[i] / (W_REC_x_down[i] / W_MC_x_down[i]))) / ((W_data_x_up[i] / (W_REC_x_up[i] / W_MC_x_up[i])) + (W_data_x_down[i] / (W_REC_x_down[i] / W_MC_x_down[i]))) / 0.5 / 0.732;
    if (sigmaTRUE)
    {
      asimmetry_w[i] = asimmetry_w[i] / (-0.256);
      asimmetry_w_REC[i] = asimmetry_w_REC[i] / (-0.256);
      asimmetry_w_MC[i] = asimmetry_w_MC[i] / (-0.256);
      asimmetry_w_corr[i] = asimmetry_w_corr[i] / (-0.256);
    }

    //   cout<<W_array[i]<<"   "<<asimmetry_w_corr[i]<<endl;
    asimmetry_w_REC_corr[i] = (double)((W_REC_x_up[i] / (W_REC_x_up[i] / W_MC_x_up[i])) - (W_REC_x_down[i] / (W_REC_x_down[i] / W_MC_x_down[i]))) / ((W_REC_x_up[i] / (W_REC_x_up[i] / W_MC_x_up[i])) + (W_REC_x_down[i] / (W_REC_x_down[i] / W_MC_x_down[i]))) / 0.5 / 0.732;
  }

  // costheta

  //    cout<<" X  "<<endl;
  for (int i = 0; i < 40; i++)
  {
    asimmetry_c[i] = (double)(costheta_data_x_up[i] - costheta_data_x_down[i]) / (costheta_data_x_up[i] + costheta_data_x_down[i]) / 0.5 / 0.732;
    asimmetry_c_REC[i] = (double)(costheta_REC_x_up[i] - costheta_REC_x_down[i]) / (costheta_REC_x_up[i] + costheta_REC_x_down[i]) / 0.5 / 0.732;
    asimmetry_c_MC[i] = (double)(costheta_MC_x_up[i] - costheta_MC_x_down[i]) / (costheta_MC_x_up[i] + costheta_MC_x_down[i]) / 0.5 / 0.732;
    asimmetry_c_corr[i] = (double)((costheta_data_x_up[i] / (costheta_REC_x_up[i] / costheta_MC_x_up[i])) - (costheta_data_x_down[i] / (costheta_REC_x_down[i] / costheta_MC_x_down[i]))) / ((costheta_data_x_up[i] / (costheta_REC_x_up[i] / costheta_MC_x_up[i])) + (costheta_data_x_down[i] / (costheta_REC_x_down[i] / costheta_MC_x_down[i]))) / 0.5 / 0.732;

    if (sigmaTRUE)
    {
      asimmetry_c[i] = asimmetry_c[i] / (-0.256);
      asimmetry_c_REC[i] = asimmetry_c_REC[i] / (-0.256);
      asimmetry_c_MC[i] = asimmetry_c_MC[i] / (-0.256);
      asimmetry_c_corr[i] = asimmetry_c_corr[i] / (-0.256);
    }

    // cout<<Costheta_array[i]<<"   "<<asimmetry_c_corr[i]<<endl;
    asimmetry_c_REC_corr[i] = (double)((costheta_REC_x_up[i] / (costheta_REC_x_up[i] / costheta_MC_x_up[i])) - (costheta_REC_x_down[i] / (costheta_REC_x_down[i] / costheta_MC_x_down[i]))) / ((costheta_REC_x_up[i] / (costheta_REC_x_up[i] / costheta_MC_x_up[i])) + (costheta_REC_x_down[i] / (costheta_REC_x_down[i] / costheta_MC_x_down[i]))) / 0.5 / 0.732;
  }

  return 0;
}
