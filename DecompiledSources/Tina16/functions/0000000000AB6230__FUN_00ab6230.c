/* Ghidra address: 00ab6230 */
/* Ghidra symbol: FUN_00ab6230 */


int FUN_00ab6230(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                undefined1 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00ab6950(*(undefined8 *)(param_1 + 0x80),param_2,param_3,param_4,param_5);
  if (param_3 == *(longlong *)(*(longlong *)(param_1 + 0x80) + 0xd8)) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xb0);
    if (iVar2 == 0) {
      iVar1 = iVar1 + *(int *)(*(longlong *)(param_1 + 0x80) + 300);
    }
    else {
      iVar1 = (iVar1 * 100) / (100 - iVar2);
    }
  }
  if (*(char *)(param_1 + 0x4f) != '\0') {
    iVar2 = FUN_005fdff0(param_2,&LAB_00ab62e4);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

