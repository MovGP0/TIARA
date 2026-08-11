/* Ghidra address: 018b4730 */
/* Ghidra symbol: FUN_018b4730 */


void FUN_018b4730(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  lVar1 = *(longlong *)(param_1 + 0x7b0);
  (**(code **)(**(longlong **)(lVar1 + 0x490) + 0xa8))(*(longlong **)(lVar1 + 0x490),&local_38);
  FUN_007d6c70(*(undefined8 *)(param_1 + 0x7b8),*(undefined8 *)(lVar1 + 0x490),(int)local_38 + 2,
               local_38._4_4_ + 1,param_3,1);
  (**(code **)(**(longlong **)(lVar1 + 0x4f0) + 0x18))
            (*(longlong **)(lVar1 + 0x4f0),&local_40,param_3);
  (**(code **)(**(longlong **)(lVar1 + 0x490) + 0x120))
            (*(longlong **)(lVar1 + 0x490),(int)local_38 + 0x4a,local_38._4_4_ + 10,local_40);
  FUN_00414480(&local_40);
  return;
}

