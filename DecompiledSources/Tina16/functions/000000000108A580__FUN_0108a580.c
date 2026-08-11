/* Ghidra address: 0108a580 */
/* Ghidra symbol: FUN_0108a580 */


void FUN_0108a580(longlong param_1)

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
  if (((0 < *(int *)(param_1 + 0x4c58)) && (0 < *(int *)(param_1 + 0x4c5c))) &&
     (*(char *)(param_1 + 0xb52) == '\0')) {
    FUN_00c0f960(*(undefined8 *)(param_1 + 0xa78),&local_10);
    if (local_10 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = FUN_0108a310(param_1,local_10,&local_20);
    }
    if (cVar1 == '\0') {
      FUN_00414480(param_1 + 0x4c50);
    }
    else {
      FUN_00416cd0(param_1 + 0x4c50,3,local_10,&DAT_0108a698,local_20);
    }
  }
  FUN_00414560(&local_38,6);
  return;
}

