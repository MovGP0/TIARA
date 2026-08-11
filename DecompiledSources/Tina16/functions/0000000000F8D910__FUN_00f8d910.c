/* Ghidra address: 00f8d910 */
/* Ghidra symbol: FUN_00f8d910 */


void FUN_00f8d910(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _get_mcu_status(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x3468) = uVar1;
  FUN_00f8d6e0(param_1);
  FUN_00f8a700(param_1,1);
  FUN_00f8c0d0(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x34c0),
               *(undefined8 *)(param_1 + 0x34c8),*(undefined8 *)(param_1 + 0x34d0),
               *(undefined4 *)(param_1 + 0x34a0));
  FUN_010a6f60(1,*(undefined4 *)(param_1 + 0x3400),*(undefined8 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0x3498));
  return;
}

