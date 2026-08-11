/* Ghidra address: 015802e0 */
/* Ghidra symbol: FUN_015802e0 */


void FUN_015802e0(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(*(longlong *)(param_2 + 0x150) + 8) = 0;
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(*(longlong *)(param_2 + 0x150) + 0x30);
  FUN_00598040(*(longlong *)(param_2 + 0xd0) + 8);
  *(undefined8 *)(*(longlong *)(param_2 + 0x150) + 0x10) = 0;
  if (*(longlong *)(*(longlong *)(param_2 + 0x150) + 0x18) != 0) {
    *(longlong *)(param_2 + 200) = *(longlong *)(param_2 + 0x150) + 0x18;
    *(undefined8 *)(param_2 + 0xc0) = **(undefined8 **)(param_2 + 200);
    **(undefined8 **)(param_2 + 200) = 0;
    FUN_00410f20(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}

