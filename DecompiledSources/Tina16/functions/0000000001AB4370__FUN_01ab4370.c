/* Ghidra address: 01ab4370 */
/* Ghidra symbol: FUN_01ab4370 */


void FUN_01ab4370(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 local_30 [4];
  int local_2c [3];
  
  (**(code **)(*param_1 + 0xf0))(param_1,param_3,0,local_2c,local_30);
  if ((*(int *)(param_1[0x1f] + 0xe8) <= local_2c[0]) &&
     (local_2c[0] <= *(int *)(param_1[0x1f] + 0xec))) {
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],param_1[0xc]);
    FUN_005fdcb0(param_2[0x10],1);
    FUN_005fd640(param_2[0xf],0xf);
    (**(code **)(*param_2 + 200))(param_2,local_2c[0],*(undefined4 *)(param_1[0x20] + 0xec));
    (**(code **)(*param_2 + 0xc0))(param_2,local_2c[0],*(undefined4 *)(param_1[0x20] + 0xe8));
  }
  return;
}

