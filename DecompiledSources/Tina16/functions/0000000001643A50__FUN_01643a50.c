/* Ghidra address: 01643a50 */
/* Ghidra symbol: FUN_01643a50 */


undefined8 FUN_01643a50(longlong *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x1c8))();
  *param_3 = -1;
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x210))(param_1,iVar3);
      if (iVar2 == param_2) {
        *param_3 = iVar3;
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

