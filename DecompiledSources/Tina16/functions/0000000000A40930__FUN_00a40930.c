/* Ghidra address: 00a40930 */
/* Ghidra symbol: FUN_00a40930 */


void FUN_00a40930(longlong param_1)

{
  **(undefined4 **)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x68);
  **(undefined4 **)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x6c);
  **(undefined4 **)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x54);
  FUN_00a40470(param_1);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    *(longlong *)(param_1 + 0x38) =
         *(longlong *)(param_1 + 0x20) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
    *(longlong *)(param_1 + 0x40) =
         *(longlong *)(param_1 + 0x28) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
    *(longlong *)(param_1 + 0x48) =
         *(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x18) + 1) * 4;
  }
  return;
}

