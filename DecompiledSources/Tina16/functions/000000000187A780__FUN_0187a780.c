/* Ghidra address: 0187a780 */
/* Ghidra symbol: FUN_0187a780 */


void FUN_0187a780(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x208) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x208),iVar2);
        FUN_0187a6c0(param_1,*(undefined8 *)(lVar1 + 0x218),param_3);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

