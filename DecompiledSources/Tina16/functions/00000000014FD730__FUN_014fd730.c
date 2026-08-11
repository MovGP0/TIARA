/* Ghidra address: 014fd730 */
/* Ghidra symbol: FUN_014fd730 */


void FUN_014fd730(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  *(undefined8 *)(param_1 + 0x728) = 0;
  if (*PTR_DAT_02003fc8 == '\0') {
    if (*(longlong *)(param_1 + 0x790) == 0) {
      FUN_014fd300(1,param_1 + 0x790,param_1 + 0x798,param_1 + 0x7a0,*PTR_DAT_020024f8);
    }
    _SetStatusIdealMode(*PTR_DAT_020024f8);
    cVar1 = _initialize_digital_simulation(*(undefined8 *)(param_1 + 0x798));
    if (cVar1 == '\0') {
      FUN_0044d440();
    }
    uVar4 = FUN_019a4600();
    iVar2 = FUN_019954d0(uVar4);
    *(int *)(param_1 + 0x9c4) = iVar2 + 1;
    uVar4 = FUN_004095c0((longlong)(iVar2 + 1));
    *(undefined8 *)(param_1 + 0x730) = uVar4;
    uVar4 = FUN_004095c0((longlong)*(int *)(param_1 + 0x9c4));
    *(undefined8 *)(param_1 + 0x738) = uVar4;
    _Scan_node_values(*(undefined8 *)(param_1 + 0x798),*(undefined8 *)(param_1 + 0x730));
  }
  else {
    lVar3 = FUN_01521960(0,&PTR_FUN_01521858);
    *(longlong *)(param_1 + 0x728) = lVar3;
    if (lVar3 == 0) {
      FUN_0044d440();
    }
    uVar4 = FUN_004095c0(0x2711);
    *(undefined8 *)(param_1 + 0x730) = uVar4;
    uVar4 = FUN_004095c0(0x2711);
    *(undefined8 *)(param_1 + 0x738) = uVar4;
    FUN_01aab090(*(undefined8 *)(param_1 + 0x728),PTR_DAT_02004a70);
    cVar1 = FUN_01aab4c0(*(undefined8 *)(param_1 + 0x728));
    if (cVar1 == '\0') {
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,local_20,0x524);
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,&local_28,0x50e);
      FUN_00416ad0(local_20,local_28);
      FUN_016fd8d0(local_20[0]);
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_38,&LAB_014fd2b8);
      FUN_00b8e650(uVar4,&local_30,L"DControl.Dg_TryVHD",local_38);
      FUN_016fd8d0(local_30);
    }
    else {
      FUN_01aad5c0(*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730));
    }
  }
  FUN_00414560(&local_38,4);
  return;
}

