/* Ghidra address: 01a01530 */
/* Ghidra symbol: FUN_01a01530 */


void FUN_01a01530(longlong param_1,undefined2 param_2)

{
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  local_20[0] = 0;
  local_28 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_30);
  FUN_019ee820(param_1,&local_28,param_2,local_30,CONCAT44(uVar1,0xb));
  FUN_019f0400(param_1,&local_38,0,0);
  FUN_019f0400(param_1,&local_40,1,0);
  FUN_019f0400(param_1,&local_48,2,0);
  FUN_019f0400(param_1,&local_50,3,0);
  FUN_019ed1f0(param_1,&local_58,2,1);
  FUN_019ed1f0(param_1,&local_60,1,1);
  FUN_00416cd0(local_20,0xd,local_28,&DAT_01a017ac,local_38,&DAT_01a017ac,local_40,&DAT_01a017ac,
               local_48,&DAT_01a017ac,local_50,L"  Z0=",local_58,L" TD=",local_60);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_20[0]);
  FUN_00414560(&local_60,9);
  return;
}

