/* Ghidra address: 00f8c160 */
/* Ghidra symbol: FUN_00f8c160 */


char FUN_00f8c160(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined1 local_438 [1024];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_19 [9];
  
  local_460 = 0;
  local_470 = 0;
  local_478 = 0;
  local_468 = 0;
  local_458 = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_00f8b940(param_1,&local_440,*(undefined8 *)(param_1 + 0x3440),&local_38);
  FUN_00414ad0(param_1 + 0x34b0,local_440);
  FUN_00f8bba0(param_1,&local_448);
  FUN_00416cd0(&local_28,3,*(undefined8 *)(param_1 + 0x3508),local_448,L".asm");
  FUN_00f8bba0(param_1,&local_450);
  FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0x3508),local_450,L".dat");
  FUN_00442620(param_1 + 0x1be0,local_28);
  FUN_00442620(param_1 + 0x23e0,local_30);
  FUN_00415dd0(&local_458,*(undefined8 *)(param_1 + 0x34b0),0);
  FUN_004425e0(local_438,local_458);
  if (param_2 != '\0') {
    FUN_006eae90(*(undefined8 *)(param_1 + 8),1);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x510);
    (**(code **)(*plVar1 + 0x100))(plVar1,local_28);
    FUN_006eae90(*(undefined8 *)(param_1 + 8),0);
  }
  uVar2 = FUN_015ff5b0();
  lVar3 = param_1 + 0x48;
  _compile_asm(uVar2,local_438,param_1 + 0x1be0,local_19,param_1 + 0x13e0,lVar3);
  uVar2 = (undefined4)((ulonglong)lVar3 >> 0x20);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))(*(longlong **)(param_1 + 0x20));
  if (local_19[0] == '\0') {
    FUN_00442ae0(&local_468,param_1 + 0x13e0);
    FUN_00415980(&local_460,3,"Error: ",local_468," in line ");
    FUN_00416880(&local_470,local_460);
    FUN_01d43440(&local_478,*(undefined4 *)(param_1 + 0x48));
    FUN_00416ad0(&local_470,local_478);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_470);
    *(undefined4 *)(param_1 + 0x34a0) = *(undefined4 *)(param_1 + 0x48);
    FUN_00f8c0d0(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x34c0),
                 *(undefined8 *)(param_1 + 0x34c8),*(undefined8 *)(param_1 + 0x34d0),
                 CONCAT44(uVar2,*(undefined4 *)(param_1 + 0x48)));
    FUN_010a6f60(1,*(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0x3498));
    FUN_00f8c790(param_1);
    *(undefined1 *)(param_1 + 0x3473) = 0;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,L"Successfully compiled");
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    _new_mcu_program(*(undefined8 *)(param_1 + 0x60),param_1 + 0x23e0);
    *(undefined1 *)(param_1 + 0x3473) = 1;
  }
  FUN_00414560(&local_478,2);
  FUN_00414590(&local_468,3);
  FUN_00414560(&local_450,3);
  FUN_00414560(&local_38,3);
  return local_19[0];
}

