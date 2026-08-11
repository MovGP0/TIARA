/* Ghidra address: 0155b320 */
/* Ghidra symbol: FUN_0155b320 */


undefined1 FUN_0155b320(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_0155ca60(param_1);
  FUN_01551250(param_1);
  FUN_015571d0(param_1,0);
  FUN_015571d0(param_1,1);
  FUN_0155eb30(param_1);
  FUN_01561270(param_1);
  if (*(char *)(param_1 + 0x708) != '\0') {
    FUN_015613c0(param_1);
  }
  if ((*(char *)(param_1 + 0x94d) == '\0') && (0 < *(int *)(*(longlong *)(param_1 + 0x750) + 0x10)))
  {
    FUN_01558b00(param_1);
  }
  if (*(char *)(param_1 + 0x94a) != '\0') {
    FUN_015695b0(param_1,*(undefined8 *)(param_1 + 0x8f8),*(undefined8 *)(param_1 + 0x720),1);
    FUN_00416cd0(local_20,4,*(undefined8 *)(param_1 + 0x7a8),&DAT_0155b578,L"mcu_components",L".txt"
                );
    FUN_015695b0(param_1,*(undefined8 *)(param_1 + 0x9a0),local_20[0],0);
    plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar1 = FUN_019954d0(*(undefined8 *)(param_1 + 0x748));
    *(undefined4 *)(param_1 + 0x7dc) = uVar1;
    FUN_01d43440(&local_28,uVar1);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_28);
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0xa0));
    }
    FUN_00416cd0(&local_30,4,*(undefined8 *)(param_1 + 0x7a8),&DAT_0155b578,L"tina_info",L".txt");
    FUN_015695b0(param_1,plVar2,local_30,0);
    FUN_00410f20(plVar2);
  }
  FUN_00416ba0(&local_38,&LAB_0155b5ec,*(undefined8 *)(param_1 + 0x720));
  FUN_0155b290(param_1,local_38,1);
  FUN_00414560(&local_38,4);
  return local_39;
}

