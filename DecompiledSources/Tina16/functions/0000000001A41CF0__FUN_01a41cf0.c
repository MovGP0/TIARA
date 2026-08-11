/* Ghidra address: 01a41cf0 */
/* Ghidra symbol: FUN_01a41cf0 */


void FUN_01a41cf0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined2 local_80;
  undefined1 *local_78;
  undefined1 *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_10 [8];
  
  local_60 = auStack_a8;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  uVar3 = FUN_019a4600();
  *(undefined8 *)(param_1 + 0x2af0) = uVar3;
  *(undefined1 *)(param_1 + 0x816) = 0;
  *(undefined8 *)(param_1 + 0x2b00) = 0;
  local_88 = local_88 & 0xffffff00;
  local_80 = 0;
  local_78 = local_10;
  FUN_014b7d50(6,*(undefined8 *)(param_1 + 0x2af0),1,0);
  FUN_00419260(param_1 + 0x2b08,&DAT_01a39828,1,0x400);
  local_50 = *(longlong *)(param_1 + 0x2b08);
  local_58 = local_50;
  if (local_50 != 0) {
    local_58 = *(longlong *)(local_50 + -8);
  }
  local_88 = 0x7d;
  local_48 = local_50;
  uVar2 = FUN_01d3f780(*(undefined8 *)(param_1 + 0x2af0),local_50,local_58 + -1,0x34);
  *(undefined4 *)(param_1 + 0x2b54) = uVar2;
  cVar1 = FUN_01a493e0(param_1,0x7d);
  *(char *)(param_1 + 0x2b42) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2b50) = 0x34;
  }
  else {
    *(undefined4 *)(param_1 + 0x2b50) = 0x7d;
  }
  FUN_01a494c0(param_1);
  if (0x400 < *(int *)(param_1 + 0x2b54)) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"NSwitches");
    FUN_004134c0(uVar3);
  }
  if (0 < *(int *)(param_1 + 0x2b54)) {
    *(undefined8 *)(param_1 + 0x2b00) = **(undefined8 **)(param_1 + 0x2b08);
  }
  FUN_00414560(&local_40,5);
  return;
}

