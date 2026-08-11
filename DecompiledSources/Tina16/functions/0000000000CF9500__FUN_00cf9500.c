/* Ghidra address: 00cf9500 */
/* Ghidra symbol: FUN_00cf9500 */


undefined8 FUN_00cf9500(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00cf9450();
  FUN_004167d0(param_2,*(undefined8 *)(lVar1 + 0x10));
  return param_2;
}

