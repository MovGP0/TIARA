/* Ghidra address: 013cbab0 */
/* Ghidra symbol: FUN_013cbab0 */


void FUN_013cbab0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x878) = uVar2;
  *(undefined1 *)(param_1 + 0x930) = 0;
  *(undefined1 *)(param_1 + 0x931) = 0;
  *(undefined1 *)(param_1 + 0x932) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x898) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x8c0) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x8c8) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x8d0) = uVar2;
  FUN_00414480(param_1 + 0x940);
  *(undefined1 *)(param_1 + 0x948) = 1;
  *(undefined4 *)(param_1 + 0x908) = 1;
  *(undefined1 *)(param_1 + 0x949) = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_20,0xc);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x808),local_20[0]);
  FUN_013cd390(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x128))(*(longlong **)(param_1 + 0x740),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x740),0);
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x128))(*(longlong **)(param_1 + 0x748),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x748),0);
  *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x98);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_28);
  FUN_00414ad0(param_1 + 0x920,local_28);
  *(undefined4 *)(param_1 + 0x934) = 1;
  FUN_00414ad0(PTR_DAT_02003638,L"Line edit");
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x880) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x890) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x888) = uVar2;
  *(undefined1 *)(param_1 + 0x8e8) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x8f8) = uVar2;
  FUN_00c03380(*(undefined8 *)(param_1 + 0x848),0);
  FUN_0064cf60(param_1,0x203);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

