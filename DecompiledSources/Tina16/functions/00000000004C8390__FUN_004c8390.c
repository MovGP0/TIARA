/* Ghidra address: 004c8390 */
/* Ghidra symbol: FUN_004c8390 */


void FUN_004c8390(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_14;
  longlong local_10;
  
  local_10 = 0;
  uVar1 = FUN_0045ae90();
  FUN_00459ca0(uVar1,&local_10,param_2);
  local_14 = 0;
  if (local_10 != 0) {
    local_14 = (int)*(undefined8 *)(local_10 + -8);
  }
  if (0xff < local_14) {
    local_14 = 0xff;
  }
  FUN_004c3930(param_1,&local_14,1);
  FUN_004c3c80(param_1,local_10,(longlong)local_14);
  FUN_00419430(&local_10,&DAT_00406578);
  return;
}

