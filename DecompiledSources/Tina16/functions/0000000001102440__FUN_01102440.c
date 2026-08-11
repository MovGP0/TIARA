/* Ghidra address: 01102440 */
/* Ghidra symbol: FUN_01102440 */


void FUN_01102440(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x128) == 0) {
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0xb8);
    lVar1 = *(longlong *)(param_1 + 0x100);
    *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(lVar1 + 0xc0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0xc0) = *(undefined8 *)(param_1 + 0x140);
  }
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  return;
}

