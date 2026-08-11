/* Ghidra address: 01b077a0 */
/* Ghidra symbol: FUN_01b077a0 */


void FUN_01b077a0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_017d7620(&DAT_017d55d8,1,*(undefined4 *)(param_1 + 0x308),param_2,param_1);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  return;
}

