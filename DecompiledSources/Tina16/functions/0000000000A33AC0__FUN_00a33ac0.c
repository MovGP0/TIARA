/* Ghidra address: 00a33ac0 */
/* Ghidra symbol: FUN_00a33ac0 */


undefined8 FUN_00a33ac0(longlong param_1,undefined **param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_38 = 0;
  if (((((param_2 == &PTR_FUN_00a30a98) || (param_2 == &PTR_FUN_00a31db8)) ||
       (param_2 == &PTR_FUN_00a31730)) || (param_2 == &PTR_FUN_00a30850)) &&
     (*(char *)(*(longlong *)(param_1 + 8) + 0x168) == '\0')) {
    FUN_0041ddd0(&local_20,PTR_PTR_02003620);
    FUN_00a39bd0(*(undefined8 *)(param_1 + 8),&PTR_FUN_00a2cf00,local_20);
    goto LAB_00a33c0d;
  }
  if (param_2 == &PTR_FUN_00a31488) {
    lVar3 = FUN_00a33e30(param_1,&PTR_FUN_00a31488);
    if (lVar3 == 0) goto LAB_00a33b99;
  }
  else {
LAB_00a33b99:
    if (param_2 == &PTR_FUN_00a31a70) {
      lVar3 = FUN_00a33e30(param_1,&PTR_FUN_00a31a70);
      if (lVar3 != 0) goto LAB_00a33be5;
    }
    if (param_2 != &PTR_FUN_00a31108) goto LAB_00a33c0d;
    lVar3 = FUN_00a33e30(param_1,&PTR_FUN_00a31108);
    if (lVar3 == 0) goto LAB_00a33c0d;
  }
LAB_00a33be5:
  FUN_0041ddd0(&local_28,PTR_PTR_02003620);
  FUN_00a39bd0(*(undefined8 *)(param_1 + 8),&PTR_FUN_00a2cf00,local_28);
LAB_00a33c0d:
  lVar3 = FUN_00a33e30(param_1,&PTR_FUN_00a30a98);
  lVar4 = FUN_00a33e30(param_1,&PTR_FUN_00a30850);
  if (((lVar4 == 0) || (lVar3 == 0)) && (*(char *)(*(longlong *)(param_1 + 8) + 0x168) == '\0')) {
    FUN_0041ddd0(&local_30,PTR_PTR_02003878);
    FUN_00a39bd0(*(undefined8 *)(param_1 + 8),&PTR_FUN_00a2cf00,local_30);
  }
  else {
    local_38 = (*(code *)param_2[2])(param_2,1,*(undefined8 *)(param_1 + 8));
    if (((param_2 == &PTR_FUN_00a31488) || (param_2 == &PTR_FUN_00a31108)) ||
       (param_2 == &PTR_FUN_00a31730)) {
      iVar1 = FUN_00a33ed0(lVar3);
      FUN_00a33910(param_1,local_38,iVar1 + 1);
    }
    else if (param_2 == &PTR_FUN_00a30850) {
      FUN_00a33910(param_1,local_38,*(undefined4 *)(param_1 + 0x10));
    }
    else if (param_2 == &PTR_FUN_00a30a98) {
      FUN_00a33910(param_1,local_38,0);
    }
    else if (param_2 == &PTR_FUN_00a31a70) {
      lVar4 = FUN_00a33e30(param_1,&PTR_FUN_00a31db8);
      lVar5 = FUN_00a33e30(param_1,&PTR_FUN_00a31730);
      if (lVar5 == 0) {
        if (lVar4 == 0) {
          iVar1 = FUN_00a33ed0(lVar3);
          FUN_00a33910(param_1,local_38,iVar1 + 1);
        }
        else {
          uVar2 = FUN_00a33ed0(lVar4);
          FUN_00a33910(param_1,local_38,uVar2);
        }
      }
      else {
        iVar1 = FUN_00a33ed0(lVar5);
        FUN_00a33910(param_1,local_38,iVar1 + 1);
      }
    }
    else {
      uVar2 = FUN_00a33ed0(lVar4);
      FUN_00a33910(param_1,local_38,uVar2);
    }
  }
  FUN_00414560(&local_30,3);
  return local_38;
}

