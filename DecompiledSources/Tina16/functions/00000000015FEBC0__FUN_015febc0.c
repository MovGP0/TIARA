/* Ghidra address: 015febc0 */
/* Ghidra symbol: FUN_015febc0 */


void FUN_015febc0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res8 [4];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  lVar1 = *(longlong *)(param_2 + 0x1a8);
  FUN_00416cd0(local_20,3,local_res8[0],L"\\Temp\\",L"flash_rom.asm");
  plVar2 = *(longlong **)(lVar1 + 0xd8);
  (**(code **)(*plVar2 + 0x100))(plVar2,local_20[0]);
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return;
}

