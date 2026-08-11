/* Ghidra address: 017f3f30 */
/* Ghidra symbol: FUN_017f3f30 */


undefined8 FUN_017f3f30(longlong param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = 0;
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar4) {
    do {
      uVar5 = (uint)(iVar3 + iVar4) >> 1;
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar5 * 4);
      if (iVar2 < param_2) {
        iVar2 = -1;
      }
      else if (param_2 < iVar2) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 < 0) {
        iVar3 = uVar5 + 1;
      }
      else {
        iVar4 = uVar5 - 1;
        if (iVar2 == 0) {
          uVar1 = 1;
        }
      }
    } while (iVar3 <= iVar4);
  }
  *param_3 = iVar3;
  return uVar1;
}

