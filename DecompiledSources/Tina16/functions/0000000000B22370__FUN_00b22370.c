/* Ghidra address: 00b22370 */
/* Ghidra symbol: FUN_00b22370 */


void FUN_00b22370(longlong param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_004aeac0(*(undefined8 *)(param_1 + 8));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(puVar1 + 2) = param_5;
  *(undefined1 *)((longlong)puVar1 + 5) = param_6;
  return;
}

