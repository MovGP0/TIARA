/* Ghidra address: 014ed4b0 */
/* Ghidra symbol: FUN_014ed4b0 */


void FUN_014ed4b0(longlong param_1,char param_2)

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
  if (*(char *)(param_1 + 0x2370) != param_2) {
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),0,0);
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,0);
    if (param_2 == '\0') {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),0);
      FUN_007fdf10(param_1,*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x94) +
                           *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x9c) +
                           *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x9c) + 2);
      uVar1 = FUN_00b89270();
      FUN_0041ddd0(&local_38,PTR_PTR_02005710);
      FUN_00b8e650(uVar1,&local_30,L"d.DesignToolObject_Dfm_More",local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x750),local_30);
    }
    else {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),1);
      FUN_007fdf10(param_1,*(int *)(*(longlong *)(param_1 + 0x6e8) + 0x94) +
                           *(int *)(param_1 + 0x237c) +
                           *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x9c) + 2);
      uVar1 = FUN_00b89270();
      FUN_0041ddd0(&local_28,PTR_PTR_02002548);
      FUN_00b8e650(uVar1,local_20,L"d.DesignToolObject_Dfm_Less",local_28);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x750),local_20[0]);
    }
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),0,*(undefined4 *)(param_1 + 0x9c));
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
    *(char *)(param_1 + 0x2370) = param_2;
  }
  FUN_00414560(&local_38,4);
  return;
}

