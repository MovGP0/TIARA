/* Ghidra address: 00723740 */
/* Ghidra symbol: FUN_00723740 */


void FUN_00723740(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(lVar1 + 0xe8) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb8);
  (**(code **)(lVar1 + 0x140))(*(undefined8 *)(lVar1 + 0x148),*(undefined8 *)(param_1 + 0x10));
  return;
}

