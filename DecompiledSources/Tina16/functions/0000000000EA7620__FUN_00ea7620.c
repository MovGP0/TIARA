/* Ghidra address: 00ea7620 */
/* Ghidra symbol: FUN_00ea7620 */


undefined8 FUN_00ea7620(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00411460(*(undefined8 *)(param_1 + 0x28),&DAT_00ea69f0);
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  FUN_00ea4e20(uVar1,param_3);
  FUN_00ea3ca0(uVar1,param_2);
  return param_2;
}

