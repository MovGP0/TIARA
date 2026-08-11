/* Ghidra address: 0161f260 */
/* Ghidra symbol: FUN_0161f260 */


undefined4 *
FUN_0161f260(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004095c0(0xd0);
  FUN_0040d200(puVar1,0xd0,0);
  *puVar1 = 0x155;
  *(undefined8 *)(puVar1 + 2) = param_1;
  *(undefined8 *)(puVar1 + 4) = 0;
  puVar1[0x15] = param_2;
  puVar1[0x16] = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  return puVar1;
}

