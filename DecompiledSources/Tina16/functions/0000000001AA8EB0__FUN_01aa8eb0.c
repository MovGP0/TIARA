/* Ghidra address: 01aa8eb0 */
/* Ghidra symbol: FUN_01aa8eb0 */


undefined2 * FUN_01aa8eb0(undefined2 *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  puVar1 = (undefined2 *)FUN_00410920(param_1,local_res10);
  if (puVar1 != (undefined2 *)0xffffffffffffffff) {
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 0x9c4c) = 0;
    uVar2 = FUN_004095c0(40000);
    *(undefined8 *)(puVar1 + 4) = uVar2;
    *(undefined1 *)((longlong)puVar1 + 0x13a2b) = 0;
    param_1 = puVar1;
  }
  return param_1;
}

