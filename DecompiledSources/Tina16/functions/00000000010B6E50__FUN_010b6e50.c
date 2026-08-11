/* Ghidra address: 010b6e50 */
/* Ghidra symbol: FUN_010b6e50 */


void FUN_010b6e50(undefined8 *param_1,longlong *param_2,int param_3,ushort param_4,int *param_5,
                 int *param_6,undefined2 *param_7)

{
  short sVar1;
  longlong lVar2;
  int local_res18;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_48;
  int local_3e;
  int local_3a;
  int local_36;
  int local_32;
  int local_2e;
  undefined2 local_2a;
  short local_28;
  int local_26;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  undefined2 local_18;
  short local_12;
  undefined8 local_10;
  
  local_50 = auStack_78;
  if (param_4 < 0x13) {
    local_50 = auStack_78;
    FUN_01d30f00(*param_1,&local_26,0x16);
    local_3e = local_26;
    local_3a = (int)local_20;
    local_36 = (int)local_1e;
    local_32 = (int)local_1c;
    local_2e = (int)local_1a;
    local_2a = local_18;
    local_28 = local_12;
    local_res18 = param_3 + -0x16;
  }
  else {
    FUN_01d30f00(*param_1,&local_3e,0x18);
    local_res18 = param_3 + -0x18;
  }
  if (local_3e == DAT_01f1162c) {
    sVar1 = FUN_010b6c20(&local_3e);
    if (sVar1 == local_28) goto LAB_010b6f46;
  }
  FUN_010b6b40();
LAB_010b6f46:
  local_10 = thunk_FUN_0412a7bb(2,(longlong)local_res18);
  local_48 = thunk_FUN_0416a623(local_10);
  FUN_01d30f00(*param_1,local_48,local_res18);
  if (param_4 < 0x13) {
    lVar2 = thunk_FUN_0408ba55(local_res18,local_48);
    *param_2 = lVar2;
    lVar2 = FUN_010b6c40(*param_2);
    *param_2 = lVar2;
  }
  else {
    lVar2 = thunk_FUN_0412ef49(local_res18,local_48);
    *param_2 = lVar2;
  }
  if (*param_2 == 0) {
    FUN_010b6b40();
  }
  *param_5 = local_32 - local_3a;
  *param_6 = local_2e - local_36;
  *param_7 = local_2a;
  thunk_FUN_04172795(local_10);
  thunk_FUN_03d5bf3d(local_10);
  return;
}

