/* Ghidra address: 0084bf10 */
/* Ghidra symbol: FUN_0084bf10 */


void FUN_0084bf10(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  *(char *)(param_1 + 0x14) = (char)param_2;
  uVar1 = FUN_0084b3b0(&DAT_0084a3f8,1,param_2);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

