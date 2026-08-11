/* Ghidra address: 019fe6d0 */
/* Ghidra symbol: FUN_019fe6d0 */


void FUN_019fe6d0(longlong param_1,undefined2 param_2)

{
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_20[0] = 0;
  local_28 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_30);
  FUN_019ee820(param_1,&local_28,param_2,local_30,CONCAT44(uVar1,0xb));
  FUN_019f0400(param_1,&local_38,2,0);
  FUN_019f0400(param_1,&local_40,3,0);
  FUN_019f0400(param_1,&local_48,0,0);
  FUN_019f0400(param_1,&local_50,1,0);
  FUN_019ed1f0(param_1,&local_58,1,1);
  FUN_00416cd0(local_20,0xb,local_28,&DAT_019fe8ec,local_38,&DAT_019fe8ec,local_40,&DAT_019fe8ec,
               local_48,&DAT_019fe8ec,local_50,&LAB_019fe8fc,local_58);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_20[0]);
  FUN_00414560(&local_58,8);
  return;
}

