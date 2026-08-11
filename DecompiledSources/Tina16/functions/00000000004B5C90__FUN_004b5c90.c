/* Ghidra address: 004b5c90 */
/* Ghidra symbol: FUN_004b5c90 */


undefined8 FUN_004b5c90(longlong *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  uVar3 = 0;
  iVar4 = (int)param_1[8] + -1;
  if (-1 < iVar4) {
    do {
      uVar5 = uVar3 + iVar4 >> 1;
      iVar1 = (**(code **)(*param_1 + 0x70))
                        (param_1,*(undefined8 *)(param_1[7] + (longlong)(int)uVar5 * 0x10),param_2);
      if (iVar1 < 0) {
        uVar3 = uVar5 + 1;
      }
      else {
        iVar4 = uVar5 - 1;
        if ((iVar1 == 0) && (uVar2 = 1, *(char *)((longlong)param_1 + 0x49) != '\x01')) {
          uVar3 = uVar5;
        }
      }
    } while ((int)uVar3 <= iVar4);
  }
  *param_3 = uVar3;
  return uVar2;
}

