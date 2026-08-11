/* Ghidra address: 00fc0700 */
/* Ghidra symbol: FUN_00fc0700 */


void FUN_00fc0700(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_118;
  undefined1 local_110 [256];
  undefined8 local_10;
  
  local_118 = 0;
  local_10 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(undefined4 *)(param_1 + 0xb88) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  *(undefined4 *)(param_1 + 0xb8c) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  *(undefined4 *)(param_1 + 0xb90) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700));
  *(undefined4 *)(param_1 + 0xb94) = uVar1;
  *(undefined4 *)(param_1 + 0xb9c) = *(undefined4 *)(param_1 + 0x818);
  *(undefined4 *)(param_1 + 0xba0) = *(undefined4 *)(param_1 + 0x81c);
  *(undefined8 *)(param_1 + 0xba8) = *(undefined8 *)(param_1 + 0x820);
  *(undefined4 *)(param_1 + 0xbb0) = 2;
  *(int *)(param_1 + 0xbb4) = *(int *)(param_1 + 0x814) * 4;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  *(int *)(param_1 + 3000) =
       *(int *)(param_1 + 0x818) * 0x10 + iVar2 * 8 + *(int *)(param_1 + 0x810) * 2;
  *(undefined4 *)(param_1 + 0xbbc) = *(undefined4 *)(param_1 + 0x82c);
  *(undefined4 *)(param_1 + 0xbc0) = *(undefined4 *)(param_1 + 0x828);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x728),&local_10);
  FUN_00416910(local_110,local_10,0xff);
  FUN_00415020(param_1 + 0xbd9,local_110,0x14);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x738),&local_118);
  FUN_00416910(local_110,local_118,0xff);
  FUN_00415020(param_1 + 0xbc4,local_110,0x14);
  FUN_00414480(&local_118);
  FUN_00414480(&local_10);
  return;
}

