/* Ghidra address: 01d32dc0 */
/* Ghidra symbol: FUN_01d32dc0 */


void FUN_01d32dc0(longlong *param_1,undefined2 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_004095c0(0x1a);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = param_2;
    *(undefined8 *)(puVar1 + 1) = 0;
    *(undefined8 *)(puVar1 + 5) = 0;
    *(undefined8 *)(puVar1 + 9) = param_3;
    (**(code **)(*param_1 + 0x20))(param_1,puVar1);
  }
  return;
}

