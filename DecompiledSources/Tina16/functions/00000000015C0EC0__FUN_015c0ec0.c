/* Ghidra address: 015c0ec0 */
/* Ghidra symbol: FUN_015c0ec0 */


byte FUN_015c0ec0(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_015c0e60(param_2);
  FUN_015c0dd0(*param_1,param_2);
  return bVar1 ^ *param_1;
}

