/* Ghidra address: 01576450 */
/* Ghidra symbol: FUN_01576450 */


undefined8 FUN_01576450(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_3);
  FUN_00417c40(param_2,lVar1 + 0x10,&DAT_00e021a8);
  return param_2;
}

