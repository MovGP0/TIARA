/* Ghidra address: 00a9a480 */
/* Ghidra symbol: FUN_00a9a480 */


char FUN_00a9a480(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  *param_3 = 0;
  if ((param_2 < 2) && (-1 < *(int *)(param_1 + 0x150))) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  if (cVar1 != '\0') {
    FUN_00414480(param_3);
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_00416ba0(param_3,*(undefined8 *)(param_1 + 200),&DAT_00a9a608);
    }
    if (param_2 == 0) {
      FUN_0043f750(&local_18,*(undefined4 *)(param_1 + 0x150));
      FUN_009ec420(&local_10,local_18);
      FUN_00416cd0(param_3,3,*param_3,&DAT_00a9a618,local_10);
    }
    else {
      FUN_0043f750(&local_28,*(undefined4 *)(param_1 + 0x154));
      FUN_009ec420(&local_20,local_28);
      FUN_00416cd0(param_3,3,*param_3,&DAT_00a9a62c,local_20);
      *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
    }
  }
  FUN_00414560(&local_28,4);
  return cVar1;
}

