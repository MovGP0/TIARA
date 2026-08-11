/* Ghidra address: 017e1940 */
/* Ghidra symbol: FUN_017e1940 */


void FUN_017e1940(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [3];
  undefined1 local_148 [256];
  undefined8 local_48 [6];
  
  puVar2 = local_48;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416910(local_148,local_res10[0],0xff);
  FUN_013b3040(param_1,local_148,local_48);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  FUN_00414480(local_res10);
  return;
}

