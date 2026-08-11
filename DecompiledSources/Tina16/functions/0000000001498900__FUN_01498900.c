/* Ghidra address: 01498900 */
/* Ghidra symbol: FUN_01498900 */


void FUN_01498900(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  if (*(char *)(param_1 + 0x929) != param_2) {
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),0,0);
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,0);
    if (param_2 == '\0') {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b8),0);
      FUN_007fdf10(param_1,*(int *)(*(longlong *)(param_1 + 0x6b0) + 0x94) +
                           *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x9c) +
                           *(int *)(*(longlong *)(param_1 + 2000) + 0x9c) + 2);
      uVar1 = FUN_00b89270();
      FUN_0041ddd0(&local_38,PTR_PTR_02005710);
      FUN_00b8e650(uVar1,&local_30,L"d.DesignToolObject_Dfm_More",local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_30);
    }
    else {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b8),1);
      FUN_007fdf10(param_1,*(int *)(*(longlong *)(param_1 + 0x6b8) + 0x94) +
                           *(int *)(param_1 + 0x914) +
                           *(int *)(*(longlong *)(param_1 + 2000) + 0x9c) + 2);
      uVar1 = FUN_00b89270();
      FUN_0041ddd0(&local_28,PTR_PTR_02002548);
      FUN_00b8e650(uVar1,local_20,L"d.DesignToolObject_Dfm_Less",local_28);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_20[0]);
    }
    *(char *)(param_1 + 0x929) = param_2;
  }
  FUN_00414560(&local_38,4);
  return;
}

