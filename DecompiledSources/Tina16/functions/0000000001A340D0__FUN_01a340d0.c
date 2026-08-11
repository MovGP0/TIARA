/* Ghidra address: 01a340d0 */
/* Ghidra symbol: FUN_01a340d0 */


undefined8 FUN_01a340d0(longlong param_1,int param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *param_4 = -1;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar2);
      if (((*(int *)(lVar1 + 8) == param_2) && (*(int *)(lVar1 + 0xc) == param_3)) ||
         ((*(int *)(lVar1 + 8) == param_3 && (*(int *)(lVar1 + 0xc) == param_2)))) {
        *param_4 = iVar2;
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

