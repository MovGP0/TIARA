/* Ghidra address: 013f5660 */
/* Ghidra symbol: FUN_013f5660 */


void FUN_013f5660(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_40 [2];
  undefined1 local_38;
  int local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x738));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x278))(*(longlong **)(param_1 + 0x738));
  iVar1 = thunk_FUN_041b2403(uVar4,0xc9,(longlong)iVar1,0);
  uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x738));
  iVar2 = thunk_FUN_041b2403(uVar4,0xbb,(longlong)iVar1,0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x278))(*(longlong **)(param_1 + 0x738));
  local_30 = (iVar3 - iVar2) + 1;
  local_38 = 0;
  local_28 = 0;
  local_40[0] = iVar1 + 1;
  FUN_00442f70(&local_20,*(undefined8 *)(param_1 + 0x7d8),local_40,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x748),local_20);
  FUN_00414480(&local_20);
  return;
}

