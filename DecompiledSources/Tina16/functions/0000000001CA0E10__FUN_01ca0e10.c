/* Ghidra address: 01ca0e10 */
/* Ghidra symbol: FUN_01ca0e10 */


void FUN_01ca0e10(longlong param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x2500) + 0x10);
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x14f8),
                 *(int *)(*(longlong *)(param_1 + 0x1500) + 0x98) +
                 *(int *)(*(longlong *)(param_1 + 0x1508) + 0x90) * 2 +
                 *(int *)(*(longlong *)(param_1 + 0x1508) + 0x98) * iVar1 + iVar1 * 2 +
                 *(int *)(*(longlong *)(param_1 + 0x1510) + 0x98) + -1);
  }
  return;
}

