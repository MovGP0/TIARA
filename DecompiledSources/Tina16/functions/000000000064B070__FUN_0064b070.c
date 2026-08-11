/* Ghidra address: 0064b070 */
/* Ghidra symbol: FUN_0064b070 */


void FUN_0064b070(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  if (*(longlong *)(param_1 + 0x98) == 0) {
    local_20 = auStack_48;
    FUN_005ffb00(param_1);
  }
  else {
    puVar1 = auStack_48;
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x98),&PTR_FUN_00640c18);
      puVar1 = local_20;
      if (cVar2 != '\0') {
        FUN_0065b830(*(undefined8 *)(param_1 + 0x98));
        puVar1 = local_20;
      }
    }
    local_20 = puVar1;
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      local_10 = FUN_004afa30(DAT_02012350);
      if (3 < *(int *)(local_10 + 0x10)) {
        FUN_0064ae50();
      }
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xe8))
                        (*(longlong **)(param_1 + 0x98),param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0xa0) = uVar3;
      FUN_004ae7e0(local_10,param_1);
      FUN_00412130(*(undefined8 *)(DAT_02012350 + 0x10));
    }
    FUN_005ffb10(param_1,*(undefined8 *)(param_1 + 0xa0));
    FUN_0064b230(param_1);
  }
  return;
}

