/* Ghidra address: 004c80d0 */
/* Ghidra symbol: FUN_004c80d0 */


void FUN_004c80d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  longlong local_28;
  int local_1c [3];
  
  local_30 = 0;
  local_28 = 0;
  uVar1 = FUN_0045ae90();
  FUN_00416880(&local_30,param_2);
  FUN_00459ca0(uVar1,&local_28,local_30);
  local_1c[0] = 0;
  if (local_28 != 0) {
    local_1c[0] = (int)*(undefined8 *)(local_28 + -8);
  }
  if (0xff < local_1c[0]) {
    local_1c[0] = 0xff;
  }
  FUN_004c3930(param_1,local_1c,1);
  FUN_004c3c80(param_1,local_28,(longlong)local_1c[0]);
  FUN_00414480(&local_30);
  FUN_00419430(&local_28,&DAT_00406578);
  return;
}

