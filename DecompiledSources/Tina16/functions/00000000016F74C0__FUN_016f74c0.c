/* Ghidra address: 016f74c0 */
/* Ghidra symbol: FUN_016f74c0 */


void FUN_016f74c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x148) == '\b') {
    uVar1 = FUN_00c44590(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
    uVar1 = FUN_00c445d0(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x1a8) +
     (longlong)(*(int *)(param_1 + 0x9c) * 2) * 8) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x1a8) +
     (longlong)(*(int *)(param_1 + 0x9c) * 2 + 1) * 8) = *(undefined8 *)(param_1 + 0xa0);
  }
  else {
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x1a8) + (longlong)*(int *)(param_1 + 0x9c) * 8
     ) = *(undefined8 *)(param_1 + 0x90);
  }
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  return;
}

