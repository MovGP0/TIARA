/* Ghidra address: 017067b0 */
/* Ghidra symbol: FUN_017067b0 */


void FUN_017067b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  FUN_0043f750(&local_18,iVar2 + 1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  uVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_0043f750(&local_20,uVar3);
  FUN_00416cd0(&local_10,3,local_18,&DAT_01706898,local_20);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_10);
  FUN_00414560(&local_20,3);
  return;
}

