/* Ghidra address: 00b60220 */
/* Ghidra symbol: FUN_00b60220 */


void FUN_00b60220(longlong param_1)

{
  longlong lVar1;
  undefined2 local_1a [5];
  
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  if (*(char *)(param_1 + 0x3c) == '\0') {
    *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x50) = local_1a[0];
  }
  else {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined2 *)(lVar1 + 0x68) = local_1a[0];
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

