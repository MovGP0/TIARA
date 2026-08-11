/* Ghidra address: 00d3a840 */
/* Ghidra symbol: FUN_00d3a840 */


longlong FUN_00d3a840(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = FUN_007e2ef0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_007e2f10(param_2,iVar4);
      lVar3 = FUN_007de060(lVar2);
      if (lVar3 == *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18)) {
        iVar1 = FUN_00d3a7e0(param_1,lVar2);
        if (*(int *)(*(longlong *)(param_1 + 0x60) + 8) < iVar1) {
          return lVar2;
        }
        return 0;
      }
      lVar2 = FUN_00d3a840(param_1,lVar2);
      if (lVar2 != 0) {
        return lVar2;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

