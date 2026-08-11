/* Ghidra address: 00acdf90 */
/* Ghidra symbol: FUN_00acdf90 */


bool FUN_00acdf90(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  *param_3 = 0;
  if (param_2 == 0) {
    FUN_00ace050(param_1,&local_10);
    FUN_00416cd0(param_3,3,*(undefined8 *)(param_1 + 200),&LAB_00ace044,local_10);
  }
  FUN_00414480(&local_10);
  return param_2 == 0;
}

