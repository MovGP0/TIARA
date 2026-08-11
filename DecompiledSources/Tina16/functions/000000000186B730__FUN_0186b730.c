/* Ghidra address: 0186b730 */
/* Ghidra symbol: FUN_0186b730 */


void FUN_0186b730(void)

{
  undefined4 uVar1;
  undefined2 extraout_AX;
  undefined2 extraout_AX_00;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 local_58 [2];
  undefined1 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30 [2];
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_20[0] = 0;
  uVar1 = FUN_00419bd0(&PTR_FUN_00640c18);
  local_30[0] = thunk_FUN_0417a31e();
  local_28 = 0;
  FUN_00442f70(local_20,L"Delphi%.8X",local_30,0);
  FUN_00414ad0(&DAT_02110500,local_20[0]);
  local_50 = 0;
  local_58[0] = uVar1;
  local_48 = FUN_00427ab0();
  local_40 = 0;
  FUN_00442f70(&local_38,L"ControlOfs%.8X%.8X",local_58,1);
  FUN_00414ad0(&DAT_02110508,local_38);
  FUN_00416740(DAT_02110500);
  DAT_021104fc = thunk_FUN_041e8323(CONCAT44(extraout_var_01,CONCAT22(extraout_var,extraout_AX)));
  FUN_00416740(DAT_02110508);
  DAT_021104fe = thunk_FUN_041e8323(CONCAT44(extraout_var_02,
                                             CONCAT22(extraout_var_00,extraout_AX_00)));
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return;
}

