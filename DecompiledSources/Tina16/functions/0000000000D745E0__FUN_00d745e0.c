/* Ghidra address: 00d745e0 */
/* Ghidra symbol: FUN_00d745e0 */


undefined8 FUN_00d745e0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xb8) + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_00d74900(param_1,iVar3);
      if (*(char *)(lVar1 + 0x79) == param_2) {
        uVar2 = FUN_00d74900(param_1,iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

