/* Ghidra address: 008535a0 */
/* Ghidra symbol: FUN_008535a0 */


undefined8 *
FUN_008535a0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
            undefined1 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = FUN_008531a0(param_1,param_3,param_4);
  if (iVar1 < 0) {
    FUN_00414480(param_2);
  }
  else {
    lVar5 = (longlong)iVar1;
    *(undefined4 *)(param_1[1] + lVar5 * 0x18) = 0xffffffff;
    FUN_00414ad0(param_2,*(undefined8 *)(param_1[1] + 0x10 + lVar5 * 0x18));
    FUN_00414b50(&local_20,*(undefined8 *)(param_1[1] + 8 + lVar5 * 0x18));
    iVar2 = iVar1;
    while( true ) {
      iVar1 = iVar1 + 1;
      lVar5 = 0;
      if (param_1[1] != 0) {
        lVar5 = *(longlong *)(param_1[1] + -8);
      }
      if (iVar1 == lVar5) {
        iVar1 = 0;
      }
      uVar3 = *(uint *)(param_1[1] + (longlong)iVar1 * 0x18);
      if (uVar3 == 0xffffffff) break;
      iVar4 = 0;
      if (param_1[1] != 0) {
        iVar4 = (int)*(undefined8 *)(param_1[1] + -8);
      }
      uVar3 = uVar3 & iVar4 - 1U;
      if (((((int)uVar3 <= iVar2) || (iVar1 < (int)uVar3)) &&
          ((iVar2 <= iVar1 || ((int)uVar3 <= iVar2)))) && ((iVar2 <= iVar1 || (iVar1 < (int)uVar3)))
         ) {
        FUN_00417c40(param_1[1] + (longlong)iVar2 * 0x18,param_1[1] + (longlong)iVar1 * 0x18,
                     &DAT_00851218);
        *(undefined4 *)(param_1[1] + (longlong)iVar1 * 0x18) = 0xffffffff;
        iVar2 = iVar1;
      }
    }
    lVar5 = (longlong)iVar2;
    *(undefined4 *)(param_1[1] + lVar5 * 0x18) = 0xffffffff;
    FUN_00414480(param_1[1] + 8 + lVar5 * 0x18);
    FUN_00414480(param_1[1] + 0x10 + lVar5 * 0x18);
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    (**(code **)(*param_1 + 0x10))(param_1,local_20,param_5);
    (**(code **)(*param_1 + 0x18))(param_1,*param_2,param_5);
  }
  FUN_00414480(&local_20);
  return param_2;
}

