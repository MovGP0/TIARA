/* Ghidra address: 015946c0 */
/* Ghidra symbol: FUN_015946c0 */


void FUN_015946c0(short *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 local_fc [212];
  
  if ((param_1 != (short *)0x0) && (*param_1 == 0x3d7a)) {
    (**(code **)(param_1 + 6))(local_fc);
    (**(code **)(param_1 + 0xe))(local_fc,param_3,param_4);
    (**(code **)(param_1 + 10))(local_fc,param_2);
  }
  return;
}

