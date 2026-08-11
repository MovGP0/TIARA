/* Ghidra address: 012e5af0 */
/* Ghidra symbol: FUN_012e5af0 */


void FUN_012e5af0(longlong param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  *param_3 = 0;
  *param_4 = 0;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  if (iVar2 != 0) {
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar4);
        iVar1 = FUN_012e52e0(uVar3);
        if (iVar1 == param_2) {
          *param_3 = iVar4;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_012e5a50(param_1,param_2);
    *param_4 = *param_3 + iVar2;
    if (*param_4 == -1) {
      *param_4 = 0;
    }
  }
  return;
}

