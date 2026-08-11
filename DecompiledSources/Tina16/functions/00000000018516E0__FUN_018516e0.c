/* Ghidra address: 018516e0 */
/* Ghidra symbol: FUN_018516e0 */


void FUN_018516e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 *local_40 [2];
  undefined8 local_30 [2];
  
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_40[0] = (undefined2 *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_30[0] = 0;
  FUN_00467e90(local_30,param_1 + 0x90);
  FUN_00467e90(local_40,param_2);
  lVar2 = FUN_00414de0(local_30);
  plVar3 = (longlong *)FUN_01847630(param_1,0);
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_58);
  iVar1 = FUN_00462650(&local_58);
  *(undefined2 *)(lVar2 + -2 + (longlong)iVar1 * 2) = *local_40[0];
  FUN_00468a10(&local_70,local_30[0]);
  (**(code **)(**(longlong **)(param_1 + 0x88) + 8))(*(longlong **)(param_1 + 0x88),&local_70);
  FUN_00417840(&local_70,&DAT_004013d8,2);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

