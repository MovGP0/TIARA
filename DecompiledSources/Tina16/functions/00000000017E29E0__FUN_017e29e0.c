/* Ghidra address: 017e29e0 */
/* Ghidra symbol: FUN_017e29e0 */


void FUN_017e29e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined1 local_2f8 [260];
  undefined2 local_1f4;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_017e28e0(param_1);
  if (cVar1 == '\0') {
    FUN_00414ad0(param_1 + 0x620,local_res10[0]);
    *(undefined2 *)(param_1 + 0x2d8) = 0;
    if (*(int *)(*(longlong *)(param_1 + 0x4f8) + 0x10) < 1) {
      *(undefined2 *)(param_1 + 0x2da) = 0;
    }
    else {
      FUN_010d3290(*(longlong *)(param_1 + 0x4f8),*(undefined4 *)(param_1 + 0x55c),local_2f8);
      *(undefined2 *)(param_1 + 0x2da) = local_1f4;
    }
  }
  FUN_00414480(local_res10);
  return;
}

