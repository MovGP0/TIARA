/* Ghidra address: 014a2920 */
/* Ghidra symbol: FUN_014a2920 */


void FUN_014a2920(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_9ab [712];
  undefined8 local_6e3;
  undefined8 local_6db;
  undefined2 local_6d3;
  undefined1 local_6d1;
  undefined8 local_628;
  undefined2 local_620;
  undefined8 local_61e;
  undefined8 local_616;
  undefined1 local_60e;
  undefined2 local_60b;
  undefined8 local_609;
  undefined8 local_601;
  undefined8 local_5f9;
  undefined2 local_5f0;
  undefined8 local_5ee;
  undefined8 local_5e6;
  undefined1 local_5de;
  undefined2 local_73;
  undefined2 local_71;
  undefined2 local_6f;
  undefined2 local_6d;
  undefined8 local_6b;
  undefined8 local_63;
  undefined8 local_5b;
  undefined8 local_53;
  undefined8 local_4b;
  undefined8 local_43;
  undefined8 local_3b;
  undefined8 local_33;
  undefined8 local_2b;
  undefined8 local_23;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  FUN_00417580(local_9ab,&DAT_01d0d0b8);
  FUN_01d31180(*param_1,0xf282,0x15,0x5b);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_9ab,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_9ab,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar3 = false;
  }
  local_73 = FUN_00b905f0(local_620,0x7fff);
  if (bVar3) {
    local_73 = local_620;
  }
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar3 = false;
  }
  local_71 = FUN_00b905f0(local_60b,0x7fff);
  if (bVar3) {
    local_71 = local_60b;
  }
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar3 = false;
  }
  local_6f = FUN_00b905f0(local_5f0,0x7fff);
  if (bVar3) {
    local_6f = local_5f0;
  }
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar3 = false;
  }
  local_6d = FUN_00b905f0(local_6d3,0x7fff);
  if (bVar3) {
    local_6d = local_6d3;
  }
  local_6b = local_61e;
  local_63 = local_609;
  local_5b = local_5ee;
  local_53 = local_6e3;
  local_4b = local_616;
  local_43 = local_601;
  local_3b = local_5e6;
  local_33 = local_6db;
  local_2b = local_628;
  local_23 = local_5f9;
  local_1b = local_6d1;
  local_1a = local_60e;
  local_19 = local_5de;
  FUN_01d311c0(*param_1,&local_73,0x5b);
  iVar2 = FUN_01d31a40(*param_1);
  if (iVar2 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_9ab,&DAT_01d0d0b8);
  return;
}

