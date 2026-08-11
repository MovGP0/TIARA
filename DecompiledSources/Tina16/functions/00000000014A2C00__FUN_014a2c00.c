/* Ghidra address: 014a2c00 */
/* Ghidra symbol: FUN_014a2c00 */


void FUN_014a2c00(longlong *param_1)

{
  int iVar1;
  undefined1 local_95e [682];
  undefined1 local_6b4;
  undefined1 local_6b3;
  undefined1 local_6b2;
  undefined1 local_6b1;
  undefined1 local_6b0;
  undefined1 local_6af;
  undefined8 local_6ae;
  undefined8 local_6a6;
  undefined8 local_69e;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_00417580(local_95e,&DAT_01d0d0b8);
  FUN_01d31180(*param_1,0xf283,0x12,0x1e);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_95e,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_95e,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  local_26 = local_6b4;
  local_25 = local_6b3;
  local_24 = local_6b2;
  local_23 = local_6b1;
  local_22 = local_6b0;
  local_21 = local_6af;
  local_20 = local_6ae;
  local_18 = local_6a6;
  local_10 = local_69e;
  FUN_01d311c0(*param_1,&local_26,0x1e);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_95e,&DAT_01d0d0b8);
  return;
}

