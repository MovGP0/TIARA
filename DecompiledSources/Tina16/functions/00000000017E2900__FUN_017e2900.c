/* Ghidra address: 017e2900 */
/* Ghidra symbol: FUN_017e2900 */


void FUN_017e2900(longlong param_1,undefined2 param_2)

{
  char cVar1;
  undefined1 local_308 [260];
  undefined2 local_204;
  
  cVar1 = FUN_017e28e0(param_1);
  if (cVar1 == '\0') {
    *(undefined2 *)(param_1 + 0x2d8) = param_2;
    FUN_00414480(param_1 + 0x620);
    if (*(int *)(*(longlong *)(param_1 + 0x4f8) + 0x10) < 1) {
      *(undefined2 *)(param_1 + 0x2da) = 0;
    }
    else {
      FUN_010d3290(*(longlong *)(param_1 + 0x4f8),*(undefined4 *)(param_1 + 0x55c),local_308);
      *(undefined2 *)(param_1 + 0x2da) = local_204;
    }
  }
  return;
}

