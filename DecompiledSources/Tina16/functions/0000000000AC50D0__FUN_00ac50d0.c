/* Ghidra address: 00ac50d0 */
/* Ghidra symbol: FUN_00ac50d0 */


int FUN_00ac50d0(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,iVar4);
      iVar3 = *(int *)(lVar1 + 0x68) - param_2;
      if (-1 < iVar3) {
        uVar2 = FUN_004aeac0(param_1,iVar4);
        *param_3 = uVar2;
        return iVar3;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *param_3 = 0;
  return 99999999;
}

