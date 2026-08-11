/* Ghidra address: 0109ee20 */
/* Ghidra symbol: FUN_0109ee20 */


void FUN_0109ee20(longlong param_1)

{
  char cVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  if ((0 < *(int *)(param_1 + 0xa10)) && (0 < *(int *)(param_1 + 0xa14))) {
    FUN_00c0f960(*(undefined8 *)(param_1 + 0x980),&local_10);
    if (local_10 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = FUN_00f7d750(*(undefined8 *)(*(longlong *)(param_1 + 0x1660) + 0x3548),local_10,
                           &local_20);
    }
    if (cVar1 == '\0') {
      FUN_00414480(param_1 + 0x9b0);
    }
    else {
      FUN_00416cd0(param_1 + 0x9b0,3,local_10,&DAT_0109ef38,local_20);
    }
  }
  FUN_00414560(&local_38,6);
  return;
}

