/* Ghidra address: 01a54400 */
/* Ghidra symbol: FUN_01a54400 */


undefined8 FUN_01a54400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(local_20);
  FUN_00414480(param_4);
  FUN_00414b50(&local_28,L"Local");
  iVar2 = 0;
  FUN_00416ba0(&local_30,local_28,&DAT_01a54884);
  if (local_30 != 0) {
    FUN_00416ba0(&local_38,local_28,&DAT_01a54884);
    iVar2 = *(int *)(local_38 + -4);
  }
  iVar1 = FUN_004170c0(local_28,local_res18[0],1);
  if (0 < iVar1) {
    FUN_00416dc0(local_20,local_res18[0],iVar2 + 1,0xff);
    FUN_00414ad0(param_4,local_28);
  }
  FUN_00414b50(&local_28,L"OpenAI");
  iVar2 = 0;
  FUN_00416ba0(&local_40,local_28,&DAT_01a54884);
  if (local_40 != 0) {
    FUN_00416ba0(&local_48,local_28,&DAT_01a54884);
    iVar2 = *(int *)(local_48 + -4);
  }
  iVar1 = FUN_004170c0(local_28,local_res18[0],1);
  if (0 < iVar1) {
    FUN_00416dc0(local_20,local_res18[0],iVar2 + 1,0xff);
    FUN_00414ad0(param_4,local_28);
  }
  FUN_00414b50(&local_28,L"GROQ");
  iVar2 = 0;
  FUN_00416ba0(&local_50,local_28,&DAT_01a54884);
  if (local_50 != 0) {
    FUN_00416ba0(&local_58,local_28,&DAT_01a54884);
    iVar2 = *(int *)(local_58 + -4);
  }
  iVar1 = FUN_004170c0(local_28,local_res18[0],1);
  if (0 < iVar1) {
    FUN_00416dc0(local_20,local_res18[0],iVar2 + 1,0xff);
    FUN_00414ad0(param_4,local_28);
  }
  FUN_00414b50(&local_28,L"OpenRouter");
  iVar2 = 0;
  FUN_00416ba0(&local_60,local_28,&DAT_01a54884);
  if (local_60 != 0) {
    FUN_00416ba0(&local_68,local_28,&DAT_01a54884);
    iVar2 = *(int *)(local_68 + -4);
  }
  iVar1 = FUN_004170c0(local_28,local_res18[0],1);
  if (0 < iVar1) {
    FUN_00416dc0(local_20,local_res18[0],iVar2 + 1,0xff);
    FUN_00414ad0(param_4,local_28);
  }
  FUN_00414b50(&local_28,L"Free");
  iVar2 = 0;
  FUN_00416ba0(&local_70,local_28,&DAT_01a54884);
  if (local_70 != 0) {
    FUN_00416ba0(&local_78,local_28,&DAT_01a54884);
    iVar2 = *(int *)(local_78 + -4);
  }
  iVar1 = FUN_004170c0(local_28,local_res18[0],1);
  if (0 < iVar1) {
    FUN_00416dc0(local_20,local_res18[0],iVar2 + 1,0xff);
    FUN_00414ad0(param_4,local_28);
  }
  FUN_0043ea00(&local_80,local_20[0]);
  FUN_00414b50(local_20,local_80);
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414560(&local_80,0xd);
  FUN_00414480(local_res18);
  return param_2;
}

