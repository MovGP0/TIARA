/* Ghidra address: 004d1bb0 */
/* Ghidra symbol: FUN_004d1bb0 */


void FUN_004d1bb0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00418560(0x28,&DAT_00483468);
  *puVar1 = param_1;
  puVar1[4] = 0;
  puVar1[1] = *param_2;
  puVar1[2] = param_2[1];
  FUN_0041b800(puVar1 + 3);
  FUN_004d17e0(&PTR_FUN_00483698,puVar1,1,1);
  return;
}

