/* Ghidra address: 017025f0 */
/* Ghidra symbol: FUN_017025f0 */


void FUN_017025f0(longlong param_1)

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
  plVar1 = *(longlong **)(param_1 + 0x728);
  if (*(char *)((longlong)plVar1 + 0xa9) != '\0') {
    iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    FUN_0043f750(&local_18,iVar2 + 1);
    uVar3 = FUN_006efc30(*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x4e0));
    FUN_0043f750(&local_20,uVar3);
    FUN_00416cd0(&local_10,3,local_18,&DAT_017026d8,local_20);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_10);
  }
  FUN_00414560(&local_20,3);
  return;
}

