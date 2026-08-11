/* Ghidra address: 00ae6e50 */
/* Ghidra symbol: FUN_00ae6e50 */


void FUN_00ae6e50(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x90) + 0x48;
  *(undefined8 *)(param_2 + 0x68) = **(undefined8 **)(param_2 + 0x70);
  **(undefined8 **)(param_2 + 0x70) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x68));
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x30);
  *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 0x28) + 8) =
       *(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + (longlong)*(int *)(param_2 + 0x5c);
  return;
}

