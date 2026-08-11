/* Ghidra address: 014a4a10 */
/* Ghidra symbol: FUN_014a4a10 */


void FUN_014a4a10(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_944 [2236];
  undefined4 local_88;
  undefined4 local_c;
  
  FUN_00417580(local_944,&DAT_01d0d0b8);
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_01d31180(*param_1,0xf294,0x10,4);
    if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
      FUN_00417c40(local_944,PTR_DAT_02004010,&DAT_01d0d0b8);
    }
    else {
      FUN_00417c40(local_944,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
    }
    local_c = local_88;
    FUN_01d311c0(*param_1,&local_c,4);
    iVar2 = FUN_01d31a40(*param_1);
    if (iVar2 != 0) {
      FUN_00b047e0(0xfffffff3);
    }
  }
  FUN_00417740(local_944,&DAT_01d0d0b8);
  return;
}

