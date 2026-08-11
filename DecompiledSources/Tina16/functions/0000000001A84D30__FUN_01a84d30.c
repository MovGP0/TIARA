/* Ghidra address: 01a84d30 */
/* Ghidra symbol: FUN_01a84d30 */


void FUN_01a84d30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc10) + 0x530);
  if (lVar1 == *(longlong *)(param_1 + 0xc18)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x798) + 0x110) = 1;
  }
  else if (lVar1 == *(longlong *)(param_1 + 0xc20)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x798) + 0x110) = 2;
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0x798) + 0x110) = 3;
  }
  return;
}

