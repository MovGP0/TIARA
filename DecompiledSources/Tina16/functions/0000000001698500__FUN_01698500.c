/* Ghidra address: 01698500 */
/* Ghidra symbol: FUN_01698500 */


undefined4 * FUN_01698500(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004095c0(0xd0);
  FUN_0040d200(puVar1,0xd0,0);
  *puVar1 = param_3;
  *(undefined8 *)(puVar1 + 2) = param_1;
  *(undefined8 *)(puVar1 + 4) = param_2;
  return puVar1;
}

