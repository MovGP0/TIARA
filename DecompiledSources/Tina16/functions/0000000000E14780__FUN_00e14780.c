/* Ghidra address: 00e14780 */
/* Ghidra symbol: FUN_00e14780 */


int FUN_00e14780(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar2);
        if (*(int *)(lVar1 + 0xc) == param_2) {
          return *(int *)(lVar1 + 8);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return param_2;
}

