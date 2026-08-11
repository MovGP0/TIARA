/* Ghidra address: 00d81d80 */
/* Ghidra symbol: FUN_00d81d80 */


void FUN_00d81d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  
  local_2c = *param_4;
  uStack_24 = param_4[1];
  uStack_1c = *(undefined4 *)(param_4 + 2);
  local_50 = *param_5;
  uStack_48 = param_5[1];
  local_40 = param_5[2];
  uStack_38 = param_5[3];
  if (local_40 != 0) {
    FUN_00d58940(local_40,param_3,&local_50);
  }
  return;
}

