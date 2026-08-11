/* Ghidra address: 012cc7b0 */
/* Ghidra symbol: FUN_012cc7b0 */


void FUN_012cc7b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_1 + 0x6f8) = *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x80);
  *(undefined8 *)(param_1 + 0x700) = *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x88);
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  *(longlong *)(lVar1 + 0x88) = param_1;
  *(code **)(lVar1 + 0x80) = FUN_012cd240;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_20);
  FUN_00414ad0(param_1 + 0x720,local_20);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_28);
  FUN_00414ad0(param_1 + 0x728,local_28);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_30);
  FUN_00414ad0(param_1 + 0x730,local_30);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x738) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x740) = uVar2;
  uVar2 = FUN_00618bb0(&PTR_FUN_006179c0,1);
  *(undefined8 *)(param_1 + 0x748) = uVar2;
  FUN_00414560(&local_30,3);
  return;
}

