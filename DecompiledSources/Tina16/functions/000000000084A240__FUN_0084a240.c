/* Ghidra address: 0084a240 */
/* Ghidra symbol: FUN_0084a240 */


undefined8 * FUN_0084a240(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00418560(0x10,&DAT_0084a1d0);
  *puVar1 = param_2;
  FUN_00414ad0(puVar1 + 1,param_1);
  return puVar1;
}

