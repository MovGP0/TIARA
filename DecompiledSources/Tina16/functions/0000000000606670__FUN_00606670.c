/* Ghidra address: 00606670 */
/* Ghidra symbol: FUN_00606670 */


void FUN_00606670(longlong param_1,longlong *param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [40];
  undefined1 *local_c0;
  longlong local_b8;
  undefined1 local_ac [32];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  int local_26;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_12;
  undefined8 local_10;
  
  local_c0 = auStack_e8;
  FUN_00606460(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,&local_26,0x16);
  if (local_26 == -0x65393229) {
    sVar1 = FUN_00601640(&local_26);
    if (sVar1 == local_12) goto LAB_006066e7;
  }
  FUN_005ffe90();
LAB_006066e7:
  param_3 = param_3 + -0x16;
  local_10 = FUN_004095c0((longlong)param_3);
  local_b8 = *(longlong *)(param_1 + 0x48);
  (**(code **)(*param_2 + 0x18))(param_2,local_10,param_3);
  *(short *)(*(longlong *)(param_1 + 0x48) + 0x28) = local_18;
  if (local_18 == 0) {
    local_18 = 0x60;
  }
  uVar2 = thunk_FUN_03f3ed25((int)local_1c - (int)local_20,0x9ec,local_18);
  *(undefined4 *)(local_b8 + 0x18) = uVar2;
  uVar2 = thunk_FUN_03f3ed25((int)local_1a - (int)local_1e,0x9ec,local_18);
  *(undefined4 *)(local_b8 + 0x1c) = uVar2;
  local_40 = 8;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  uVar3 = thunk_FUN_03b4ba23(param_3,local_10,0,&local_40);
  *(undefined8 *)(local_b8 + 0x10) = uVar3;
  if (*(longlong *)(local_b8 + 0x10) == 0) {
    FUN_005ffe90();
  }
  thunk_FUN_04079bf6(*(undefined8 *)(local_b8 + 0x10),0x6c,local_ac);
  local_40 = 8;
  local_3c = local_8c;
  local_38 = local_88;
  local_30 = 0;
  thunk_FUN_040d2fd9(*(undefined8 *)(local_b8 + 0x10));
  uVar3 = thunk_FUN_03b4ba23(param_3,local_10,0,&local_40);
  *(undefined8 *)(local_b8 + 0x10) = uVar3;
  if (*(longlong *)(local_b8 + 0x10) == 0) {
    FUN_005ffe90();
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_004095f0(local_10,(longlong)param_3);
  return;
}

