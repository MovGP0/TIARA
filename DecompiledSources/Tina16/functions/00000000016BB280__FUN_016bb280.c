/* Ghidra address: 016bb280 */
/* Ghidra symbol: FUN_016bb280 */


void FUN_016bb280(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  FUN_004b9ec0(*(undefined8 *)(param_1 + 0x18));
  FUN_004b8ba0(*(undefined8 *)(param_1 + 0x18),param_2,0);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))(*(longlong **)(param_1 + 0x18),0,0);
  FUN_00410f20(param_2);
  *(ulonglong *)(param_1 + 0x9b0) =
       *(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + (param_3 & 0xffffffff);
  return;
}

