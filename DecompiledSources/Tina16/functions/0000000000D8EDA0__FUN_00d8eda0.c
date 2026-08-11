/* Ghidra address: 00d8eda0 */
/* Ghidra symbol: FUN_00d8eda0 */


undefined1
FUN_00d8eda0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
            undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  undefined1 local_21;
  longlong local_20;
  
  local_40 = auStack_68;
  local_21 = 0;
  local_30 = (longlong *)FUN_00d8ed60(param_1,param_5,param_6);
  if (local_30 != (longlong *)0x0) {
    FUN_00d77b90(local_30,param_3);
    (**(code **)(*local_30 + 0x98))(local_30,param_7);
    local_20 = FUN_0060f770(&DAT_005faf70,1,param_2,6);
    if (param_4 == 0) {
      (**(code **)(*local_30 + 0xa8))(local_30,*(undefined8 *)(local_20 + 8),&DAT_01ecf394);
    }
    else {
      (**(code **)(*local_30 + 0xa8))(local_30,*(undefined8 *)(local_20 + 8),param_4);
    }
    FUN_00410f20(local_20);
    local_21 = 1;
  }
  return local_21;
}

