/* Ghidra address: 01413470 */
/* Ghidra symbol: FUN_01413470 */


void FUN_01413470(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_19 [9];
  
  local_38 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_020052a8,&DAT_01413724,L"flash_rom.asm");
  *(undefined4 *)(param_1 + 0x748) = 0xffffffff;
  FUN_00442620(&DAT_021084f8,local_28);
  FUN_00415dd0(&local_30,*(undefined8 *)(param_1 + 0x758),0);
  FUN_004425e0(&DAT_021094f8,local_30);
  FUN_006eae90(*(undefined8 *)(param_1 + 0x6f0),1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x510);
  (**(code **)(*plVar1 + 0x100))(plVar1,local_28);
  FUN_006eae90(*(undefined8 *)(param_1 + 0x6f0),0);
  uVar2 = FUN_015ff5b0();
  _compile_asm(uVar2,&DAT_021094f8,&DAT_021084f8,local_19,&DAT_02109cf8,param_1 + 0x748);
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x278))(*(longlong **)(param_1 + 0x6f8));
  if (local_19[0] == '\0') {
    FUN_00442ae0(&local_40,&DAT_02109cf8);
    FUN_00415980(&local_38,3,"Error: ",local_40," in line ");
    FUN_00416880(&local_48,local_38);
    FUN_01d43440(&local_50,*(undefined4 *)(param_1 + 0x748));
    FUN_00416ad0(&local_48,local_50);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_48);
    FUN_01413250(param_1,*(undefined8 *)(param_1 + 0x6f0));
    FUN_010a6f60(1,*(undefined4 *)(param_1 + 0x748),*(undefined8 *)(param_1 + 0x6f0),
                 *(undefined4 *)(param_1 + 0x714));
    FUN_01412f00(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x748) = 0xffffffff;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,L"Successfully compiled");
  }
  FUN_00414560(&local_50,2);
  FUN_00414590(&local_40,3);
  FUN_00414480(&local_28);
  return;
}

