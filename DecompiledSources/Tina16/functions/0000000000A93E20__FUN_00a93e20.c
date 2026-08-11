/* Ghidra address: 00a93e20 */
/* Ghidra symbol: FUN_00a93e20 */


void FUN_00a93e20(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0x2c) = 1;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 600);
  iVar2 = FUN_004aeba0(lVar1,param_1);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar4 = *(int *)(lVar1 + 0x10) + -1;
    if (iVar2 <= iVar4) {
      iVar4 = (iVar4 - iVar2) + 1;
      do {
        lVar3 = FUN_00a94970(lVar1,iVar2);
        if (*(int *)(*(longlong *)(param_1 + 8) + 0x18) != *(int *)(*(longlong *)(lVar3 + 8) + 0x18)
           ) break;
        lVar3 = FUN_00a94970(lVar1,iVar2);
        *(undefined1 *)(lVar3 + 0x2c) = 1;
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
  (**(code **)(lVar1 + 0x248))(*(undefined8 *)(lVar1 + 0x250),param_1);
  return;
}

