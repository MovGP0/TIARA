/* Ghidra address: 01cef240 */
/* Ghidra symbol: FUN_01cef240 */


undefined8 FUN_01cef240(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3 + -1);
      if (*(short *)(lVar1 + 0x18) == param_2) {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3 + -1);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

