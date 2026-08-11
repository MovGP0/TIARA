/* Ghidra address: 0186ce60 */
/* Ghidra symbol: FUN_0186ce60 */


void FUN_0186ce60(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_30 = 0;
  if ((param_4 == 0) || (*(longlong *)(param_3 + 0x27) != 0)) {
    uVar1 = FUN_006a6030();
    FUN_006a5810(uVar1,&local_28);
    FUN_004168e0(&local_30,local_28);
    (**(code **)(*param_2 + 0x358))(param_2,local_30);
  }
  else {
    local_20 = auStack_58;
    FUN_004b6dc0(param_4,0);
    (**(code **)(*(longlong *)param_2[0x61] + 0xe8))((longlong *)param_2[0x61],param_4);
  }
  *(undefined1 *)(param_3 + 8) = 1;
  *(undefined1 *)(param_3 + 9) = 1;
  FUN_00414520(&local_30);
  FUN_00414480(&local_28);
  return;
}

