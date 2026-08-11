/* Ghidra address: 01b1c9b0 */
/* Ghidra symbol: FUN_01b1c9b0 */


undefined8 FUN_01b1c9b0(longlong param_1,undefined8 param_2,code *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      uVar5 = (uint)(iVar3 + iVar4) >> 1;
      iVar1 = (*param_3)(*(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar5 * 8),
                         param_2);
      if (iVar1 < 0) {
        iVar3 = uVar5 + 1;
      }
      else {
        iVar4 = uVar5 - 1;
        if (iVar1 == 0) {
          uVar2 = 1;
        }
      }
    } while (iVar3 <= iVar4);
  }
  *param_4 = iVar3;
  return uVar2;
}

