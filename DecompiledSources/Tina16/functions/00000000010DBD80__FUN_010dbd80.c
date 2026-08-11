/* Ghidra address: 010dbd80 */
/* Ghidra symbol: FUN_010dbd80 */


undefined1 FUN_010dbd80(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined1 local_19;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *param_3 = -1;
  local_19 = 0;
  FUN_010c04f0(local_res10);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar5);
      lVar4 = FUN_004113f0(uVar3,&PTR_FUN_011051a8);
      iVar2 = FUN_00416db0(local_res10[0],*(undefined8 *)(lVar4 + 8));
      if (iVar2 == 0) {
        *param_3 = iVar5;
        local_19 = 1;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_res10);
  return local_19;
}

