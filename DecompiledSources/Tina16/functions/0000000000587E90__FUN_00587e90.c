/* Ghidra address: 00587e90 */
/* Ghidra symbol: FUN_00587e90 */


undefined8 * FUN_00587e90(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)*param_1;
  FUN_00419260(param_2,&DAT_00406578,1,cVar1);
  if (cVar1 != '\0') {
    FUN_00409a70(*param_1 + 1,*param_2,cVar1);
  }
  return param_2;
}

