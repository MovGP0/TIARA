/* Ghidra address: 005dd7f0 */
/* Ghidra symbol: FUN_005dd7f0 */


undefined8
FUN_005dd7f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  int local_14;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_10 = 0;
  local_20 = FUN_005dc860(*(undefined8 *)(param_1 + 0x18),param_3);
  if (local_20 != 0) {
    local_14 = FUN_005dc4f0(local_20,param_4);
    if (-1 < local_14) {
      lVar1 = (**(code **)(**(longlong **)(local_20 + 8) + 0x30))
                        (*(longlong **)(local_20 + 8),local_14);
      if (lVar1 == 0) {
        FUN_00414480(&local_10);
        FUN_004b5390(*(undefined8 *)(local_20 + 8),&local_10,local_14);
        FUN_00414ad0(param_2,local_10);
        FUN_00414480(&local_10);
        goto LAB_005dd8b7;
      }
    }
  }
  FUN_00414ad0(param_2,param_5);
LAB_005dd8b7:
  FUN_00414480(&local_10);
  return param_2;
}

