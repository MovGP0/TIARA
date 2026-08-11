/* Ghidra address: 00ae64c0 */
/* Ghidra symbol: FUN_00ae64c0 */


void FUN_00ae64c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x70) + 0x48;
  *(undefined8 *)(param_2 + 0x40) = **(undefined8 **)(param_2 + 0x48);
  **(undefined8 **)(param_2 + 0x48) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x40));
  if (*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x60) != 0) {
    FUN_00a9b900(*(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x68),
                 *(longlong *)(param_2 + 0x70) + 0x60,
                 *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x7c));
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x70) + 0xe8);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x70));
  return;
}

