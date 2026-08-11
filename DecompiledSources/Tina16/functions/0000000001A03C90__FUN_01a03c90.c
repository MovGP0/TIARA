/* Ghidra address: 01a03c90 */
/* Ghidra symbol: FUN_01a03c90 */


void FUN_01a03c90(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_20[0] = 0;
  local_28 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *(undefined1 *)(param_1 + 0x8c) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_30);
  FUN_019ee820(param_1,&local_28,0x15,local_30,CONCAT44(uVar1,0xb));
  FUN_019f0400(param_1,&local_38,0,0);
  FUN_019f0400(param_1,&local_40,1,0);
  FUN_01a02190(param_1,&local_48,7);
  FUN_00416cd0(local_20,10,local_28,&DAT_01a03e6c,&DAT_01a03e6c,local_38,&DAT_01a03e6c,local_40,
               &DAT_01a03e7c,local_res10[0],L" ; Diac",local_48);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_20[0]);
  FUN_00414560(&local_48,6);
  FUN_00414480(local_res10);
  return;
}

