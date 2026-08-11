/* Ghidra address: 00b22280 */
/* Ghidra symbol: FUN_00b22280 */


void FUN_00b22280(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004095c0(7);
  *puVar1 = *param_2;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined1 *)((longlong)puVar1 + 6) = *(undefined1 *)((longlong)param_2 + 6);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),puVar1);
  return;
}

