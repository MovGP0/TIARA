/* Ghidra address: 00ab11d0 */
/* Ghidra symbol: FUN_00ab11d0 */


void FUN_00ab11d0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  **(undefined4 **)(param_2 + 0xc0) = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 300);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x88);
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x18) + 0x2d8);
  *piVar1 = *piVar1 + -1;
  return;
}

