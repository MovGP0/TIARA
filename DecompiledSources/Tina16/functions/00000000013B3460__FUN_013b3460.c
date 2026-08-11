/* Ghidra address: 013b3460 */
/* Ghidra symbol: FUN_013b3460 */


void FUN_013b3460(longlong *param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_3f8;
  undefined1 uStack_3f4;
  undefined8 local_2f8 [6];
  undefined1 local_2c8;
  undefined1 local_2c7 [551];
  undefined8 local_a0 [10];
  longlong local_50;
  int local_40;
  
  if (param_3 == 1) {
    FUN_010c7a40(local_2f8,*(undefined8 *)(param_2 + 200));
    local_3f8 = 0x4d455404;
    uStack_3f4 = 0x50;
  }
  else {
    FUN_010c7a40(local_2f8,0);
  }
  FUN_00414ff0(local_2c7,&local_3f8);
  puVar3 = local_2f8;
  puVar4 = local_a0;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_2c8 = 10;
  local_50 = param_2;
  local_40 = param_3;
  uVar1 = FUN_013b26e0(0,&PTR_FUN_013b25b8,&local_2c8);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

