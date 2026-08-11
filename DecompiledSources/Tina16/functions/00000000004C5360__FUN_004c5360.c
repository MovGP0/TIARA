/* Ghidra address: 004c5360 */
/* Ghidra symbol: FUN_004c5360 */


void FUN_004c5360(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_10 [8];
  
  local_20 = auStack_48;
  local_28 = 0;
  FUN_00417580(local_10,&DAT_0052f3d0);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  FUN_004c80b0(param_1);
  FUN_00545cd0(&local_28);
  FUN_00417c40(local_10,&local_28,&DAT_0052f3d0);
  FUN_004c4a40(param_1,param_2);
  FUN_00545cf0(local_10);
  FUN_00417740(&local_28,&DAT_0052f3d0);
  FUN_00417740(local_10,&DAT_0052f3d0);
  return;
}

