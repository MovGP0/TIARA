/* Ghidra address: 01521460 */
/* Ghidra symbol: FUN_01521460 */


void FUN_01521460(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd70) + 0x260))(*(longlong **)(param_1 + 0xd70));
  if (iVar1 == -1) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0xe38),0);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0xd70),&local_10);
    FUN_0064de00(*(undefined8 *)(param_1 + 0xe38),local_10);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd70) + 0x260))(*(longlong **)(param_1 + 0xd70))
    ;
    *(undefined4 *)(param_1 + 0xebc) = uVar2;
  }
  FUN_00414480(&local_10);
  return;
}

