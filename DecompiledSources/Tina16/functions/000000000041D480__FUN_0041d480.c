/* Ghidra address: 0041d480 */
/* Ghidra symbol: FUN_0041d480 */


longlong * FUN_0041d480(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_00411420(*param_1,&DAT_00401a88);
    *param_1 = 0;
    FUN_0041d420(param_1,uVar1);
  }
  return param_1;
}

