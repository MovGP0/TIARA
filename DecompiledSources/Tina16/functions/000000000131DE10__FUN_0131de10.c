/* Ghidra address: 0131de10 */
/* Ghidra symbol: FUN_0131de10 */


void FUN_0131de10(longlong param_1,double param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  double dVar3;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00b8fec0(&local_10,param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x128) + 0x12f1),0,
               0x3cd203af9ee75616);
  if ((*PTR_DAT_02003720 != '\0') && (*PTR_DAT_02002b78 == '\0')) {
    *(double *)PTR_DAT_02005400 = param_2;
    goto code_r0x0131e028;
  }
  if ((*PTR_DAT_020052b8 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x128) + 0x12f3) != '\x01'))
  {
LAB_0131dee8:
    dVar3 = (double)FUN_0040c850(param_2 / 1e+50);
    if (1.0 - dVar3 <= 1e-10) {
      FUN_00414b50(&local_10,L" ???");
    }
  }
  else {
    dVar3 = (double)FUN_0040c850(param_2);
    if (1e-10 <= dVar3) goto LAB_0131dee8;
    FUN_00414b50(&local_10,&DAT_0131e0c4);
  }
  FUN_00416cd0(*(longlong *)(*(longlong *)(param_1 + 0x128) + 0xa8) + 0xe30,5,&DAT_0131e0f0,local_10
               ,&PTR_DAT_0131e100,local_res18[0],&DAT_0131e114);
  FUN_00414480(*(longlong *)(*(longlong *)(param_1 + 0x128) + 0xa8) + 0xe38);
  cVar2 = FUN_005b83d0(local_res18[0],&DAT_0131e124);
  if (cVar2 == '\0') {
    FUN_00416ba0(&local_28,local_10,local_res18[0]);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x128) + 0x5c0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
  }
  else {
    FUN_00416ba0(local_20,local_10,&LAB_0131e138);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x128) + 0x5c0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_20[0]);
  }
code_r0x0131e028:
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return;
}

