/* Ghidra address: 0161a0c0 */
/* Ghidra symbol: FUN_0161a0c0 */


void FUN_0161a0c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x14)) {
    FUN_0161a090(param_1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)(*(int *)(param_1 + 0x14) + -1) * 0x10)
       = param_2;
  *(undefined8 *)
   (*(longlong *)(param_1 + 0x20) + 8 + (longlong)(*(int *)(param_1 + 0x14) + -1) * 0x10) = param_3;
  return;
}

