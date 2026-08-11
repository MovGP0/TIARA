/* Ghidra address: 0104e5b0 */
/* Ghidra symbol: FUN_0104e5b0 */


void FUN_0104e5b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x928) + 0x4d8);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x928) + 0x4c0);
  FUN_00f62b10(*(undefined8 *)(param_1 + 0x980),*(undefined4 *)(lVar1 + 0x98),
               *(undefined4 *)(lVar1 + 0x9c),*(undefined4 *)(lVar2 + 0x98),
               *(undefined4 *)(lVar2 + 0x9c),*(undefined4 *)(param_1 + 0x908),
               *(undefined4 *)(param_1 + 0x90c));
  FUN_010508e0(param_1);
  return;
}

