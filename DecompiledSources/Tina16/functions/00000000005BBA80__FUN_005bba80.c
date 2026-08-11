/* Ghidra address: 005bba80 */
/* Ghidra symbol: FUN_005bba80 */


undefined8 FUN_005bba80(void)

{
  int extraout_var;
  ulonglong uVar1;
  
  FUN_00448820();
  uVar1 = (longlong)(extraout_var + -1) % 7 & 0xffffffff;
  return CONCAT62((int6)(uVar1 >> 0x10),(short)uVar1 + 1);
}

