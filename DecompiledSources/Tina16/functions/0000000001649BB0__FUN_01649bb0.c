/* Ghidra address: 01649bb0 */
/* Ghidra symbol: FUN_01649bb0 */


void FUN_01649bb0(longlong param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x10d4) = 1;
  *(int *)(param_1 + 0x10d0) = *(int *)(param_1 + 0x10d0) + 1;
  FUN_00419260(param_1 + 0x10d8,&DAT_01624c58,1,(longlong)*(int *)(param_1 + 0x10d0));
  *(undefined8 *)(*(longlong *)(param_1 + 0x10d8) + (longlong)(*(int *)(param_1 + 0x10d0) + -1) * 8)
       = param_2;
  return;
}

