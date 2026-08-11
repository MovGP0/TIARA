/* Ghidra address: 00598db0 */
/* Ghidra symbol: FUN_00598db0 */


void FUN_00598db0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x4a0) + 0x20) != 0) {
    if (*(longlong *)(param_2 + 0x478) == 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x4a0) + 0x10);
      FUN_004185d0(*(undefined8 *)(param_2 + 0x468),
                   **(undefined8 **)(lVar1 + 6 + (ulonglong)*(byte *)(lVar1 + 1)),
                   (longlong)*(int *)(param_2 + 0x4b0));
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x4a0) + 0x10);
      FUN_004185d0(*(undefined8 *)(param_2 + 0x478),
                   **(undefined8 **)(lVar1 + 6 + (ulonglong)*(byte *)(lVar1 + 1)),
                   (longlong)*(int *)(param_2 + 0x4b0));
      FUN_004095f0(*(undefined8 *)(param_2 + 0x478));
    }
  }
  return;
}

