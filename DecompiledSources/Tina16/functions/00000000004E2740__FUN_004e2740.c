/* Ghidra address: 004e2740 */
/* Ghidra symbol: FUN_004e2740 */


undefined8 *
FUN_004e2740(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = FUN_004e2370(param_1,param_3,param_4);
  if (iVar2 < 0) {
    FUN_0041b800(param_2);
  }
  else {
    lVar6 = (longlong)iVar2;
    *(undefined4 *)(param_1[1] + lVar6 * 0x10) = 0xffffffff;
    FUN_0041b840(param_2,*(undefined8 *)(param_1[1] + 8 + lVar6 * 0x10));
    uVar1 = *(undefined4 *)(param_1[1] + 4 + lVar6 * 0x10);
    iVar3 = iVar2;
    while( true ) {
      iVar2 = iVar2 + 1;
      lVar6 = 0;
      if (param_1[1] != 0) {
        lVar6 = *(longlong *)(param_1[1] + -8);
      }
      if (iVar2 == lVar6) {
        iVar2 = 0;
      }
      uVar4 = *(uint *)(param_1[1] + (longlong)iVar2 * 0x10);
      if (uVar4 == 0xffffffff) break;
      iVar5 = 0;
      if (param_1[1] != 0) {
        iVar5 = (int)*(undefined8 *)(param_1[1] + -8);
      }
      uVar4 = uVar4 & iVar5 - 1U;
      if (((((int)uVar4 <= iVar3) || (iVar2 < (int)uVar4)) &&
          ((iVar3 <= iVar2 || ((int)uVar4 <= iVar3)))) && ((iVar3 <= iVar2 || (iVar2 < (int)uVar4)))
         ) {
        FUN_00417c40(param_1[1] + (longlong)iVar3 * 0x10,param_1[1] + (longlong)iVar2 * 0x10,
                     &DAT_00490890);
        *(undefined4 *)(param_1[1] + (longlong)iVar2 * 0x10) = 0xffffffff;
        iVar3 = iVar2;
      }
    }
    lVar6 = (longlong)iVar3;
    *(undefined4 *)(param_1[1] + lVar6 * 0x10) = 0xffffffff;
    *(undefined4 *)(param_1[1] + 4 + lVar6 * 0x10) = 0;
    FUN_0041b800(param_1[1] + 8 + lVar6 * 0x10);
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    (**(code **)(*param_1 + 0x10))(param_1,uVar1,param_5);
    (**(code **)(*param_1 + 0x18))(param_1,*param_2,param_5);
  }
  return param_2;
}

