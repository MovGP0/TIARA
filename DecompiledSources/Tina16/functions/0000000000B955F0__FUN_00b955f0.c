/* Ghidra address: 00b955f0 */
/* Ghidra symbol: FUN_00b955f0 */


undefined8 FUN_00b955f0(longlong *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar4 = 0;
  iVar5 = (int)param_1[2] + -1;
  if (-1 < iVar5) {
    do {
      uVar6 = uVar4 + iVar5 >> 1;
      uVar2 = (**(code **)(*param_1 + 0x38))
                        (param_1,*(undefined8 *)(param_1[1] + (longlong)(int)uVar6 * 8));
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1,uVar2,param_2);
      if (iVar1 < 0) {
        uVar4 = uVar6 + 1;
      }
      else {
        iVar5 = uVar6 - 1;
        if ((iVar1 == 0) && (uVar3 = 1, *(char *)((longlong)param_1 + 0x21) == '\0')) {
          uVar4 = uVar6;
        }
      }
    } while ((int)uVar4 <= iVar5);
  }
  *param_3 = uVar4;
  return uVar3;
}

