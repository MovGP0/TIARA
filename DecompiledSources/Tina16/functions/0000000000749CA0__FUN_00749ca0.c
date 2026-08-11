/* Ghidra address: 00749ca0 */
/* Ghidra symbol: FUN_00749ca0 */


undefined8 FUN_00749ca0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),param_3);
  FUN_0064dd90(uVar1,param_2);
  return param_2;
}

