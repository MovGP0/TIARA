/* Ghidra address: 004cdbc0 */
/* Ghidra symbol: FUN_004cdbc0 */


void FUN_004cdbc0(longlong param_1)

{
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_004c8ed0(*(undefined8 *)(param_1 + 0x1e0),1);
  FUN_004c9990(*(undefined8 *)(param_1 + 0x1e0),&local_10);
  FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
  while (*(short *)(*(longlong *)(param_1 + 0x1e0) + 0x56) == 0x2e) {
    FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
    FUN_004c8ed0(*(undefined8 *)(param_1 + 0x1e0),1);
    FUN_004c9990(*(undefined8 *)(param_1 + 0x1e0),local_20);
    FUN_00416cd0(&local_10,3,local_10,&LAB_004cdd24,local_20[0]);
    FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
  }
  FUN_004c8440(*(undefined8 *)(param_1 + 0x1d8),local_10);
  FUN_004c8ed0(*(undefined8 *)(param_1 + 0x1e0),0x3d);
  FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
  FUN_004cd600(param_1);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

