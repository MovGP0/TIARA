/* Ghidra address: 00c2dc90 */
/* Ghidra symbol: FUN_00c2dc90 */


void FUN_00c2dc90(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004095c0(0x10);
  *(undefined1 *)(puVar1 + 1) = param_2;
  *puVar1 = param_3;
  FUN_004ae7e0(param_1,puVar1);
  return;
}

