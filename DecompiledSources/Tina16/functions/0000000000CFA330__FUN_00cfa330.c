/* Ghidra address: 00cfa330 */
/* Ghidra symbol: FUN_00cfa330 */


char FUN_00cfa330(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130 [64];
  code *local_f0;
  undefined1 *local_40;
  longlong local_38;
  char local_29;
  int local_28 [2];
  undefined8 local_20;
  
  local_40 = auStack_178;
  local_140 = 0;
  local_138 = 0;
  FUN_00cfa210(param_1);
  local_38 = param_2;
  if (param_2 != 0) {
    local_38 = *(longlong *)(param_2 + -8);
  }
  *(int *)(param_1 + 0xb) = (int)local_38;
  if ((int)local_38 != 0) {
    param_1[0xc] = param_2;
  }
  local_28[1] = 2;
  local_28[0] = FUN_00cf94e0(*(undefined8 *)(param_1[1] + 8));
  local_20 = FUN_00409570(local_28[0]);
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  param_1[8] = (longlong)local_28;
  local_158 = 0xffffffff;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_1 + 9,param_1 + 7,&local_40);
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 - 0x90313U < 2) {
    FUN_00cf8f40(DAT_01eb2478,local_130);
    if (local_f0 == (code *)0x0) {
      FUN_0041ddd0(&local_138,PTR_PTR_02004238);
      uVar3 = FUN_0044d490(&PTR_FUN_00cf5f58,1,local_138);
      FUN_004134c0(uVar3);
    }
    uVar3 = FUN_00cfa2d0(param_1);
    FUN_00cf8f40(DAT_01eb2478,local_130);
    uVar2 = (*local_f0)(uVar3,param_1 + 7);
    *(undefined4 *)(param_1 + 6) = uVar2;
    FUN_00cf8f80(*DAT_01eb2478,uVar2,L"CompleteAuthToken");
  }
  if ((((int)param_1[6] == 0x90312) || ((int)param_1[6] == 0x90314)) || (local_28[0] != 0)) {
    local_29 = '\x01';
  }
  else {
    local_29 = '\0';
  }
  if (local_29 != '\0') {
    FUN_00878310(&local_140,local_20,local_28[0]);
    FUN_004194b0(param_3,local_140,&DAT_0086e978);
  }
  FUN_004095f0(local_20);
  FUN_00419430(&local_140,&DAT_0086e978);
  FUN_00414480(&local_138);
  return local_29;
}

