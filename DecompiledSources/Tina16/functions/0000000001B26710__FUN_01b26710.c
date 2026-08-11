/* Ghidra address: 01b26710 */
/* Ghidra symbol: FUN_01b26710 */


undefined8 *
FUN_01b26710(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = FUN_01b262e0(param_1,param_3,param_4);
  if (iVar2 < 0) {
    FUN_00414480(param_2);
  }
  else {
    lVar6 = (longlong)iVar2;
    *(undefined4 *)(param_1[1] + lVar6 * 0x18) = 0xffffffff;
    FUN_00414ad0(param_2,*(undefined8 *)(param_1[1] + 0x10 + lVar6 * 0x18));
    uVar1 = *(undefined8 *)(param_1[1] + 8 + lVar6 * 0x18);
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
      uVar4 = *(uint *)(param_1[1] + (longlong)iVar2 * 0x18);
      if (uVar4 == 0xffffffff) break;
      iVar5 = 0;
      if (param_1[1] != 0) {
        iVar5 = (int)*(undefined8 *)(param_1[1] + -8);
      }
      uVar4 = uVar4 & iVar5 - 1U;
      if (((((int)uVar4 <= iVar3) || (iVar2 < (int)uVar4)) &&
          ((iVar3 <= iVar2 || ((int)uVar4 <= iVar3)))) && ((iVar3 <= iVar2 || (iVar2 < (int)uVar4)))
         ) {
        FUN_00417c40(param_1[1] + (longlong)iVar3 * 0x18,param_1[1] + (longlong)iVar2 * 0x18,
                     &DAT_01b18d08);
        *(undefined4 *)(param_1[1] + (longlong)iVar2 * 0x18) = 0xffffffff;
        iVar3 = iVar2;
      }
    }
    lVar6 = (longlong)iVar3;
    *(undefined4 *)(param_1[1] + lVar6 * 0x18) = 0xffffffff;
    *(undefined8 *)(param_1[1] + 8 + lVar6 * 0x18) = 0;
    FUN_00414480(param_1[1] + 0x10 + lVar6 * 0x18);
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    (**(code **)(*param_1 + 0x10))(param_1,uVar1,param_5);
    (**(code **)(*param_1 + 0x18))(param_1,*param_2,param_5);
  }
  return param_2;
}

