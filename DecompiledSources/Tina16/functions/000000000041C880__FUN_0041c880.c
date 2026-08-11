/* Ghidra address: 0041c880 */
/* Ghidra symbol: FUN_0041c880 */


undefined8 FUN_0041c880(longlong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) < 1) {
    *param_3 = 0;
  }
  else {
    uVar3 = 0;
    iVar4 = *(int *)(param_1 + 8) + -1;
    if (-1 < iVar4) {
      do {
        uVar5 = uVar3 + iVar4 >> 1;
        lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar5 * 8);
        if (lVar1 - param_2 < 0) {
          uVar3 = uVar5 + 1;
        }
        else {
          iVar4 = uVar5 - 1;
          if (lVar1 == param_2) {
            uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar5 * 8);
            uVar3 = uVar5;
          }
        }
      } while ((int)uVar3 <= iVar4);
    }
    *param_3 = uVar3;
  }
  return uVar2;
}

