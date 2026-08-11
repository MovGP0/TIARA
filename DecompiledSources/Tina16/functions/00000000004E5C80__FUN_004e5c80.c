/* Ghidra address: 004e5c80 */
/* Ghidra symbol: FUN_004e5c80 */


undefined8 FUN_004e5c80(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_30;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = FUN_004e5960(param_1,param_2,param_3);
  if (iVar1 < 0) {
    local_30 = 0;
  }
  else {
    lVar3 = (longlong)iVar1;
    *(undefined4 *)(param_1[1] + lVar3 * 0x18) = 0xffffffff;
    local_30 = *(undefined8 *)(param_1[1] + 0x10 + lVar3 * 0x18);
    FUN_00414b50(&local_20,*(undefined8 *)(param_1[1] + 8 + lVar3 * 0x18));
    iVar2 = iVar1;
    while( true ) {
      iVar1 = iVar1 + 1;
      lVar3 = 0;
      if (param_1[1] != 0) {
        lVar3 = *(longlong *)(param_1[1] + -8);
      }
      if (iVar1 == lVar3) {
        iVar1 = 0;
      }
      uVar4 = *(uint *)(param_1[1] + (longlong)iVar1 * 0x18);
      if (uVar4 == 0xffffffff) break;
      iVar5 = 0;
      if (param_1[1] != 0) {
        iVar5 = (int)*(undefined8 *)(param_1[1] + -8);
      }
      uVar4 = uVar4 & iVar5 - 1U;
      if (((((int)uVar4 <= iVar2) || (iVar1 < (int)uVar4)) &&
          ((iVar2 <= iVar1 || ((int)uVar4 <= iVar2)))) && ((iVar2 <= iVar1 || (iVar1 < (int)uVar4)))
         ) {
        FUN_00417c40(param_1[1] + (longlong)iVar2 * 0x18,param_1[1] + (longlong)iVar1 * 0x18,
                     &DAT_00499760);
        *(undefined4 *)(param_1[1] + (longlong)iVar1 * 0x18) = 0xffffffff;
        iVar2 = iVar1;
      }
    }
    lVar3 = (longlong)iVar2;
    *(undefined4 *)(param_1[1] + lVar3 * 0x18) = 0xffffffff;
    FUN_00414480(param_1[1] + 8 + lVar3 * 0x18);
    *(undefined8 *)(param_1[1] + 0x10 + lVar3 * 0x18) = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    (**(code **)(*param_1 + 0x10))(param_1,local_20,param_4);
    (**(code **)(*param_1 + 0x18))(param_1,local_30,param_4);
  }
  FUN_00414480(&local_20);
  return local_30;
}

