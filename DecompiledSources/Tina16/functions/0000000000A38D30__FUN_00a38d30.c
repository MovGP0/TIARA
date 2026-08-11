/* Ghidra address: 00a38d30 */
/* Ghidra symbol: FUN_00a38d30 */


undefined4 FUN_00a38d30(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined8 local_20 [2];
  undefined4 local_c;
  
  local_20[0] = 0;
  if (*(int *)(param_1 + 0x28) + -1 < (int)(uint)param_2) {
    FUN_0041ddd0(local_20,PTR_PTR_02003a70);
    FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2cf00,local_20[0]);
  }
  else {
    lVar1 = FUN_00a33f40(param_1);
    local_c = *(undefined4 *)(lVar1 + 0x6c + (ulonglong)param_2 * 4);
  }
  FUN_00414480(local_20);
  return local_c;
}

