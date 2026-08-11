/* Ghidra address: 00bbcf50 */
/* Ghidra symbol: FUN_00bbcf50 */


void FUN_00bbcf50(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_00411580(*param_2,&PTR_FUN_00bbca78);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_2 + 1);
    FUN_00414b90(param_2 + 2,param_2[2]);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_00414b90(param_2 + 3,param_2[3]);
    FUN_00414b90(param_2 + 5,param_2[5]);
    FUN_00414b90(param_2 + 4,param_2[4]);
    FUN_00414b90(param_2 + 6,param_2[6]);
    *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_2 + 7);
  }
  return;
}

