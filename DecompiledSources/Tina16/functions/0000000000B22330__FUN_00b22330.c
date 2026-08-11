/* Ghidra address: 00b22330 */
/* Ghidra symbol: FUN_00b22330 */


undefined4 * FUN_00b22330(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_3);
  *param_2 = *puVar1;
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(puVar1 + 1);
  *(undefined1 *)((longlong)param_2 + 6) = *(undefined1 *)((longlong)puVar1 + 6);
  return param_2;
}

