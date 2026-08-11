/* Ghidra address: 0138e190 */
/* Ghidra symbol: FUN_0138e190 */


void FUN_0138e190(longlong param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  undefined8 local_res18 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414610(param_5);
  FUN_00b8fec0(&local_10,param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x158) + 0x12f1),0,
               0x3cd203af9ee75616);
  iVar3 = FUN_00416db0(param_5,&DAT_0138e684);
  if (iVar3 == 0) {
    FUN_00414480(&local_18);
  }
  else if (param_5 == 0) {
    FUN_00414480(&local_18);
  }
  else {
    FUN_00b8fec0(&local_18,param_4,*(undefined1 *)(*(longlong *)(param_1 + 0x158) + 0x12f1),0,
                 0x3cd203af9ee75616);
  }
  if ((*PTR_DAT_02003720 != '\0') && (*PTR_DAT_02002b78 == '\0')) {
    *(double *)PTR_DAT_02005980 = param_2;
    *(undefined8 *)(PTR_DAT_02005980 + 8) = param_4;
    goto code_r0x0138e5b5;
  }
  if ((*PTR_DAT_020052b8 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x158) + 0x12f3) != '\x01'))
  {
LAB_0138e325:
    dVar4 = (double)FUN_0040c850(param_2 / 1e+50);
    if (1e-10 < 1.0 - dVar4) {
      dVar4 = (double)FUN_0040c850(param_2);
      if (1e-12 <= dVar4) {
        dVar4 = (double)FUN_0040c850(param_4);
        if ((dVar4 < 0.001) && (param_5 != 0)) {
          iVar3 = FUN_00416db0(param_5,&DAT_0138e684);
          if (iVar3 != 0) {
            FUN_00414b50(&local_18,&DAT_0138e698);
          }
        }
      }
      else {
        FUN_00414b50(&local_10,&DAT_0138e698);
      }
    }
    else {
      FUN_00414b50(&local_10,L" ???");
    }
  }
  else {
    dVar4 = (double)FUN_0040c850(param_2);
    if (1e-10 <= dVar4) goto LAB_0138e325;
    FUN_00414b50(&local_10,&DAT_0138e698);
  }
  FUN_00416cd0(*(longlong *)(*(longlong *)(param_1 + 0x158) + 0xa8) + 0xe30,5,&DAT_0138e6c4,local_10
               ,&PTR_DAT_0138e6d4,local_res18[0],&DAT_0138e6e8);
  if ((local_18 == 0) || (param_5 == 0)) {
    FUN_00414480(*(longlong *)(*(longlong *)(param_1 + 0x158) + 0xa8) + 0xe38);
  }
  else {
    FUN_00416cd0(*(longlong *)(*(longlong *)(param_1 + 0x158) + 0xa8) + 0xe38,5,&DAT_0138e6c4,
                 local_18,&PTR_DAT_0138e6d4,param_5,&DAT_0138e6e8);
  }
  cVar2 = FUN_005b83d0(local_res18[0],&DAT_0138e6f8);
  if (cVar2 == '\0') {
    FUN_00416ba0(&local_38,local_10,local_res18[0]);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x158) + 0x5c0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
  }
  else {
    FUN_00416ba0(local_30,local_10,&DAT_0138e70c);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x158) + 0x5c0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_30[0]);
  }
  if ((local_18 != 0) && (param_5 != 0)) {
    FUN_00416ba0(&local_40,local_18,param_5);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x158) + 0x5c0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_40);
  }
code_r0x0138e5b5:
  FUN_00414560(&local_40,3);
  FUN_00414560(&local_20,3);
  FUN_00414480(local_res18);
  FUN_00414480(&param_5);
  return;
}

