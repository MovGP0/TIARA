/* Ghidra address: 01d0e560 */
/* Ghidra symbol: FUN_01d0e560 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d0e560(undefined8 param_1)

{
  char cVar1;
  undefined8 local_res8 [4];
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined8 local_28;
  undefined1 *local_20;
  longlong *local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_38 = L"TINA.INI";
  FUN_00416cd0(&local_28,3,local_res8[0],&DAT_01d0ec04);
  local_10 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_28);
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Bode view",1);
  if (cVar1 != '\0') {
    PTR_DAT_035672e8._0_2_ = (ushort)PTR_DAT_035672e8 | 4;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Ampli view",0);
  if (cVar1 != '\0') {
    PTR_DAT_035672e8._0_2_ = (ushort)PTR_DAT_035672e8 | 1;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Phase view",0);
  if (cVar1 != '\0') {
    PTR_DAT_035672e8._0_2_ = (ushort)PTR_DAT_035672e8 | 2;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Nyquist view",0);
  if (cVar1 != '\0') {
    PTR_DAT_035672e8._0_2_ = (ushort)PTR_DAT_035672e8 | 8;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Group delay view",0);
  if (cVar1 != '\0') {
    PTR_DAT_035672e8._0_2_ = (ushort)PTR_DAT_035672e8 | 0x10;
  }
  _DAT_03567845 = (ushort)PTR_DAT_035672e8;
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Output noise",0);
  if (cVar1 != '\0') {
    DAT_03567304 = DAT_03567304 | 1;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Input noise",0);
  if (cVar1 != '\0') {
    DAT_03567304 = DAT_03567304 | 2;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Total noise",1);
  if (cVar1 != '\0') {
    DAT_03567304 = DAT_03567304 | 4;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"SN noise",0);
  if (cVar1 != '\0') {
    DAT_03567304 = DAT_03567304 | 8;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"S-Diagram",L"Bode view",0);
  if (cVar1 != '\0') {
    DAT_03567319 = DAT_03567319 | 4;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"S-Diagram",L"Ampli view",1);
  if (cVar1 != '\0') {
    DAT_03567319 = DAT_03567319 | 1;
    DAT_0356731d = DAT_0356731d | 1;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"S-Diagram",L"Phase view",0);
  if (cVar1 != '\0') {
    DAT_03567319 = DAT_03567319 | 2;
    DAT_0356731b = DAT_0356731b | 2;
    DAT_0356731d = DAT_0356731d | 2;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"S-Diagram",L"Smith view",0);
  if (cVar1 != '\0') {
    DAT_03567319 = DAT_03567319 | 0x20;
    DAT_0356731b = DAT_0356731b | 0x20;
    DAT_0356731d = DAT_0356731d | 0x20;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"S-Diagram",L"Polar view",0);
  if (cVar1 != '\0') {
    DAT_03567319 = DAT_03567319 | 0x40;
    DAT_0356731b = DAT_0356731b | 0x40;
    DAT_0356731d = DAT_0356731d | 0x40;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"S-Diagram",L"Group Delay view",0);
  if (cVar1 != '\0') {
    DAT_0356731d = DAT_0356731d | 0x10;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"S-Diagram",L"Loss view",0);
  if (cVar1 != '\0') {
    DAT_0356731b = DAT_0356731b | 0x80;
    DAT_0356731d = DAT_0356731d | 0x80;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"S-Diagram",L"VSWR view",1);
  if (cVar1 != '\0') {
    DAT_0356731b = DAT_0356731b | 0x100;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Fourier complex amplitude",1)
  ;
  if (cVar1 != '\0') {
    DAT_0356735f = DAT_0356735f | 1;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Fourier phase",0);
  if (cVar1 != '\0') {
    DAT_0356735f = DAT_0356735f | 2;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Fourier real part",0);
  if (cVar1 != '\0') {
    DAT_0356735f = DAT_0356735f | 4;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Fourier imaginary part",0);
  if (cVar1 != '\0') {
    DAT_0356735f = DAT_0356735f | 8;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Fourier power spectrum",0);
  if (cVar1 != '\0') {
    DAT_0356735f = DAT_0356735f | 0x10;
  }
  cVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"Analysis Setup",L"Fourier real amplitude",0);
  if (cVar1 != '\0') {
    DAT_0356735f = DAT_0356735f | 0x20;
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  FUN_00414480(local_res8);
  return;
}

