/* Ghidra address: 00706690 */
/* Ghidra symbol: FUN_00706690 */


undefined8 FUN_00706690(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_006a35d0(*(undefined8 *)(param_1 + 0x40),param_3);
  FUN_00414ad0(param_2,*(undefined8 *)(lVar1 + 0x20));
  return param_2;
}

