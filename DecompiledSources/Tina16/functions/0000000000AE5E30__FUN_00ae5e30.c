/* Ghidra address: 00ae5e30 */
/* Ghidra symbol: FUN_00ae5e30 */


void FUN_00ae5e30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(longlong *)(param_2 + 0xd0) = *(longlong *)(param_2 + 0x110) + 0x48;
  *(undefined8 *)(param_2 + 200) = **(undefined8 **)(param_2 + 0xd0);
  **(undefined8 **)(param_2 + 0xd0) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 200));
  if (*(longlong *)(*(longlong *)(param_2 + 0x110) + 0x60) != 0) {
    FUN_00a9b900(*(undefined8 *)(*(longlong *)(param_2 + 0x110) + 0x68),
                 *(longlong *)(param_2 + 0x110) + 0x60,
                 *(undefined4 *)(*(longlong *)(param_2 + 0x110) + 0x7c));
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x110) + 0xe8);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x110) + 0x70));
  return;
}

