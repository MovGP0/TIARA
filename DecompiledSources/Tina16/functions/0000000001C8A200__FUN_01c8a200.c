/* Ghidra address: 01c8a200 */
/* Ghidra symbol: FUN_01c8a200 */


undefined8 FUN_01c8a200(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *param_3 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar2);
      if (*(int *)(lVar1 + 0x38) == param_2) {
        *param_3 = *(undefined8 *)(lVar1 + 0x28);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

