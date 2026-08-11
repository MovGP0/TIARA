/* Ghidra address: 013b3540 */
/* Ghidra symbol: FUN_013b3540 */


void FUN_013b3540(longlong *param_1,byte *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 local_3e8 [6];
  undefined1 local_3b8;
  undefined1 local_3b7 [551];
  undefined8 local_190 [13];
  byte local_128 [264];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar4 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  FUN_010c7a40(local_3e8,0);
  FUN_00414ff0(local_3b7,local_128);
  puVar3 = local_3e8;
  puVar5 = local_190;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_3b8 = 2;
  uVar1 = FUN_013b26e0(0,&PTR_FUN_013b25b8,&local_3b8);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

