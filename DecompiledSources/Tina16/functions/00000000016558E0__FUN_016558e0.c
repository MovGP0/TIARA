/* Ghidra address: 016558e0 */
/* Ghidra symbol: FUN_016558e0 */


undefined4 *
FUN_016558e0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004095c0(0xd0);
  FUN_0040d200(puVar1,0xd0,0);
  *puVar1 = param_1;
  *(undefined8 *)(puVar1 + 2) = param_3;
  *(undefined8 *)(puVar1 + 4) = param_4;
  puVar1[0x13] = param_2;
  return puVar1;
}

