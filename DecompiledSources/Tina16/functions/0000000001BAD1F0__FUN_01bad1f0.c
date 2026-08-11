/* Ghidra address: 01bad1f0 */
/* Ghidra symbol: FUN_01bad1f0 */


void FUN_01bad1f0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700));
  FUN_0043f750(&local_18,iVar1 + 1);
  uVar2 = FUN_006efc30(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x4e0));
  FUN_0043f750(&local_20,uVar2);
  FUN_00416cd0(&local_10,3,local_18,&DAT_01bad2d8,local_20);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_10);
  FUN_00414560(&local_20,3);
  return;
}

