/* Ghidra address: 017ef4d0 */
/* Ghidra symbol: FUN_017ef4d0 */


void FUN_017ef4d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = FUN_004b6930(&PTR_FUN_00478280,1);
  uVar3 = FUN_0045ae90();
  (**(code **)(*local_20 + 0xe0))(local_20,local_res10[0],uVar3);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x868) + 0x4e8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  lVar2 = *(longlong *)(param_1 + 0xb48);
  local_48 = lVar2 + 0x650;
  FUN_010cd270(local_20,local_28,lVar2 + 0x628,lVar2 + 0x630);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x868) + 0x4e8);
  (**(code **)(*plVar1 + 0x88))(plVar1,local_28);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(local_res10);
  return;
}

