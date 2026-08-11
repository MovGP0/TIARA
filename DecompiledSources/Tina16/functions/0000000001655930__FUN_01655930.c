/* Ghidra address: 01655930 */
/* Ghidra symbol: FUN_01655930 */


undefined4 *
FUN_01655930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004095c0(0xd0);
  FUN_0040d200(puVar1,0xd0,0);
  *puVar1 = param_1;
  puVar1[0x12] = param_2;
  puVar1[0x23] = param_3;
  *(undefined1 *)((longlong)puVar1 + 0x91) = param_4;
  return puVar1;
}

