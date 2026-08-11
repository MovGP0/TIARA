/* Ghidra address: 013b8260 */
/* Ghidra symbol: FUN_013b8260 */


void FUN_013b8260(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_980;
  undefined8 local_978;
  longlong *local_970;
  longlong *local_968;
  undefined8 local_960 [289];
  longlong local_55;
  
  local_968 = (longlong *)0x0;
  local_970 = (longlong *)0x0;
  local_978 = 0;
  local_980 = 0;
  puVar4 = local_960;
  for (lVar3 = 0x127; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_004179d0(local_960,&DAT_01d0d0b8);
  *param_2 = 0;
  FUN_00414480(param_2 + 2);
  FUN_00414480(param_2 + 4);
  if (local_55 == 0) goto code_r0x013b8400;
  FUN_00bac3d0(&local_968);
  (**(code **)(*local_968 + 400))(local_968,local_55);
  (**(code **)(*local_968 + 0x100))(local_968,&local_970);
  (**(code **)(*local_970 + 0x100))(local_970,&local_980,L"settings");
  uVar1 = FUN_0043fc50(local_980,0);
  *param_2 = uVar1;
  (**(code **)(*local_970 + 0x100))(local_970,&local_980,L"instructions");
  iVar2 = FUN_00416db0(local_980,&DAT_013b84f0);
  if (iVar2 == 0) {
LAB_013b8387:
    FUN_00414480(&local_980);
  }
  else {
    iVar2 = FUN_00416db0(local_980,&DAT_013b8500);
    if (iVar2 == 0) goto LAB_013b8387;
  }
  FUN_00414ad0(param_2 + 2,local_980);
  (**(code **)(*local_970 + 0x100))(local_970,&local_980,L"model");
  iVar2 = FUN_00416db0(local_980,&DAT_013b84f0);
  if (iVar2 == 0) {
LAB_013b83e5:
    FUN_00414480(&local_980);
  }
  else {
    iVar2 = FUN_00416db0(local_980,&DAT_013b8500);
    if (iVar2 == 0) goto LAB_013b83e5;
  }
  FUN_00414ad0(param_2 + 4,local_980);
code_r0x013b8400:
  FUN_00414480(&local_980);
  FUN_00417840(&local_978,&LAB_00b9fca0,2);
  FUN_0041b800(&local_968);
  FUN_00417740(local_960,&DAT_01d0d0b8);
  return;
}

