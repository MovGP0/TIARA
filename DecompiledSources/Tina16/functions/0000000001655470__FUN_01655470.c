/* Ghidra address: 01655470 */
/* Ghidra symbol: FUN_01655470 */


undefined4 * FUN_01655470(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004095c0(0xd0);
  FUN_0040d200(puVar1,0xd0,0);
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 10) = param_1;
  return puVar1;
}

