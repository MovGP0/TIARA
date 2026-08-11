/* Ghidra address: 00b1f820 */
/* Ghidra symbol: FUN_00b1f820 */


undefined8 FUN_00b1f820(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),param_3);
  FUN_00417c40(param_2,uVar1,&DAT_00b1be28);
  return param_2;
}

