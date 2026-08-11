/* Ghidra address: 014a48c0 */
/* Ghidra symbol: FUN_014a48c0 */


void FUN_014a48c0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_963 [2217];
  undefined8 local_ba;
  undefined8 uStack_b2;
  undefined2 uStack_aa;
  undefined1 uStack_a8;
  undefined8 local_2b;
  undefined8 uStack_23;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  
  FUN_00417580(local_963,&DAT_01d0d0b8);
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x3dU) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_01d31180(*param_1,0xf293,0x10,0x13);
    if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
      FUN_00417c40(local_963,PTR_DAT_02004010,&DAT_01d0d0b8);
    }
    else {
      FUN_00417c40(local_963,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
    }
    local_2b = local_ba;
    uStack_23 = uStack_b2;
    uStack_1b = uStack_aa;
    uStack_19 = uStack_a8;
    FUN_01d311c0(*param_1,&local_2b,0x13);
    iVar2 = FUN_01d31a40(*param_1);
    if (iVar2 != 0) {
      FUN_00b047e0(0xfffffff3);
    }
  }
  FUN_00417740(local_963,&DAT_01d0d0b8);
  return;
}

