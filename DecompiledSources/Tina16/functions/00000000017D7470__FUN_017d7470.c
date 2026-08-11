/* Ghidra address: 017d7470 */
/* Ghidra symbol: FUN_017d7470 */


undefined8 FUN_017d7470(longlong param_1,undefined4 param_2,uint *param_3)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      uVar5 = uVar3 + iVar4 >> 1;
      cVar1 = FUN_00527140(*(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar5 * 4),
                           param_2);
      if (cVar1 < '\0') {
        uVar3 = uVar5 + 1;
      }
      else {
        iVar4 = uVar5 - 1;
        if (cVar1 == '\0') {
          uVar2 = 1;
          uVar3 = uVar5;
        }
      }
    } while ((int)uVar3 <= iVar4);
  }
  *param_3 = uVar3;
  return uVar2;
}

