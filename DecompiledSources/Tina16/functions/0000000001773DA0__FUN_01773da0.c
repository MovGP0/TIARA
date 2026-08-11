/* Ghidra address: 01773da0 */
/* Ghidra symbol: FUN_01773da0 */


undefined8 FUN_01773da0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_010b2ee0(*(undefined8 *)(param_1 + 0x110),0);
  FUN_00414ad0(param_2,*(undefined8 *)(lVar1 + 0x30));
  return param_2;
}

