/* Ghidra address: 00fae480 */
/* Ghidra symbol: FUN_00fae480 */


void FUN_00fae480(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_118;
  undefined1 local_110 [256];
  undefined8 local_10;
  
  local_118 = 0;
  local_10 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(int *)(param_1 + 0xa58) = iVar1 + 8;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  *(int *)(param_1 + 0xa5c) = iVar1 + 8;
  *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)(param_1 + 0x7e8);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(undefined4 *)(param_1 + 0xa68) = uVar2;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  *(undefined4 *)(param_1 + 0xa6c) = uVar2;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  *(undefined4 *)(param_1 + 0xa70) = uVar2;
  *(undefined4 *)(param_1 + 0xa74) = *(undefined4 *)(param_1 + 0x7f4);
  *(undefined4 *)(param_1 + 0xa78) = *(undefined4 *)(param_1 + 0x7f0);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(int *)(param_1 + 0xa7c) = iVar1 * 0x40 + *(int *)(param_1 + 0x7f8) * 4;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  *(int *)(param_1 + 0xa80) = iVar1 * 0x40 + 0x10;
  *(int *)(param_1 + 0xa84) = *(int *)(param_1 + 0x7fc) * 8;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x728),&local_10);
  FUN_00416910(local_110,local_10,0xff);
  FUN_00415020(param_1 + 0xa9d,local_110,0x14);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_118);
  FUN_00416910(local_110,local_118,0xff);
  FUN_00415020(param_1 + 0xa88,local_110,0x14);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x740));
  FUN_00414480(&local_118);
  FUN_00414480(&local_10);
  return;
}

