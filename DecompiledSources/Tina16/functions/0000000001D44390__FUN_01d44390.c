/* Ghidra address: 01d44390 */
/* Ghidra symbol: FUN_01d44390 */


void FUN_01d44390(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414b50(local_20,&DAT_01d44434);
  if (param_3 != '\0') {
    FUN_00414b50(local_20,&DAT_01d44444);
  }
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
            (*(longlong **)(param_1 + 0x38),&LAB_01d44454,param_2,local_20[0]);
  FUN_00414480(local_20);
  return;
}

