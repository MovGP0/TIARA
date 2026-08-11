/* Ghidra address: 019d1380 */
/* Ghidra symbol: FUN_019d1380 */


void FUN_019d1380(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 local_res20;
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = *param_5;
  local_28 = *param_6;
  local_30 = *param_7;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x80),param_2);
  FUN_004238d0(local_48,(int)local_20 - (int)local_30,local_20._4_4_ - local_30._4_4_,
               ((int)local_20 + (int)local_28) - (int)local_30,
               (local_20._4_4_ + local_28._4_4_) - local_30._4_4_);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0xa8))(*(longlong **)(param_1 + 0x30),local_48);
  FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x70),param_3);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x120))
            (*(longlong **)(param_1 + 0x30),(int)local_20 - (int)local_30,
             local_20._4_4_ - local_30._4_4_,local_res20);
  FUN_00414480(&local_res20);
  return;
}

