/* Ghidra address: 00b22230 */
/* Ghidra symbol: FUN_00b22230 */


void FUN_00b22230(longlong param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_004095c0(7);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(puVar1 + 2) = param_4;
  *(undefined1 *)((longlong)puVar1 + 5) = param_5;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),puVar1);
  return;
}

