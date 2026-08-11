/* Ghidra address: 005fc6d0 */
/* Ghidra symbol: FUN_005fc6d0 */


void FUN_005fc6d0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined1 *local_10;
  
  local_10 = auStack_38;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f2d40);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_005fbfe0(param_1);
    local_18 = param_2;
    FUN_005fbfe0();
    FUN_005fbbe0(DAT_02012020,param_1,*(undefined8 *)(local_18 + 0x18));
    FUN_005fc860(param_1,*(undefined4 *)(local_18 + 0x28));
    if (*(int *)(param_1 + 0x2c) != *(int *)(local_18 + 0x2c)) {
      uVar2 = FUN_005fce00(local_18);
      FUN_005fce30(param_1,uVar2);
    }
    FUN_005fc000(param_2);
    FUN_005fc000(param_1);
  }
  return;
}

