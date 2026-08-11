/* Ghidra address: 00b21ff0 */
/* Ghidra symbol: FUN_00b21ff0 */


void FUN_00b21ff0(longlong param_1,undefined2 param_2,undefined1 param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_004095c0(4);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = param_3;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),puVar1);
  return;
}

