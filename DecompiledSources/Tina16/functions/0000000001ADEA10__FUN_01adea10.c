/* Ghidra address: 01adea10 */
/* Ghidra symbol: FUN_01adea10 */


bool FUN_01adea10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x70),param_2);
  cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
  if (cVar1 == '\0') {
    uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x70),param_2);
    FUN_01ab6de0(uVar4,local_20);
  }
  else {
    uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x70),param_2);
    FUN_01ab2940(uVar4,local_20);
  }
  uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x70),param_3);
  cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
  if (cVar1 == '\0') {
    uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x70),param_3);
    FUN_01ab6de0(uVar4,&local_28);
  }
  else {
    uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x70),param_3);
    FUN_01ab2940(uVar4,&local_28);
  }
  iVar2 = FUN_004170c0(local_20[0],*(undefined8 *)(param_1 + 0x68),1);
  iVar3 = FUN_004170c0(local_28,*(undefined8 *)(param_1 + 0x68),1);
  FUN_00414560(&local_28,2);
  return iVar3 + -1 < iVar2 + -1;
}

