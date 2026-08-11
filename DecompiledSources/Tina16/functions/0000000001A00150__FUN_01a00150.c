/* Ghidra address: 01a00150 */
/* Ghidra symbol: FUN_01a00150 */


void FUN_01a00150(longlong param_1,undefined2 param_2)

{
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar2;
  undefined8 uVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_50 = 0;
  local_58 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),local_30);
  FUN_00416ad0(local_30,&DAT_01a0042c);
  FUN_019ee820(param_1,local_20,0x14,local_30[0],CONCAT44(uVar2,0xb));
  FUN_019f0400(param_1,&local_40,0,0);
  FUN_019f0400(param_1,&local_48,1,0);
  uVar1 = local_40;
  FUN_00416cd0(&local_38,5,local_20[0],&LAB_01a00440,local_40,&LAB_01a00440,local_48);
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_38);
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_60);
  FUN_019ee820(param_1,&local_58,param_2,local_60,CONCAT44(uVar2,0xb));
  FUN_019f0400(param_1,&local_68,2,0);
  FUN_019f0400(param_1,&local_70,3,0);
  FUN_019ed1f0(param_1,&local_78,1,1);
  FUN_00416cd0(&local_50,9,local_58,&LAB_01a00440,local_68,&LAB_01a00440,local_70,&LAB_01a00440,
               local_20[0],&LAB_01a00440,local_78);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_50);
  FUN_00414560(&local_78,10);
  FUN_00414480(local_20);
  return;
}

