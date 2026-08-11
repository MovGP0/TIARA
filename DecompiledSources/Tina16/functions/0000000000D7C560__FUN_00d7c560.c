/* Ghidra address: 00d7c560 */
/* Ghidra symbol: FUN_00d7c560 */


void FUN_00d7c560(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_00d618a0);
  if (cVar2 == '\0') {
    FUN_00d75b60(param_1,param_2);
  }
  else {
    FUN_00d75b60(param_1,param_2);
    lVar1 = FUN_004113f0(param_2,&PTR_FUN_00d618a0);
    FUN_00d7c8e0(param_1,*(undefined8 *)(lVar1 + 0x128));
    FUN_00d7c8d0(param_1,*(undefined4 *)(lVar1 + 0x120));
    FUN_00d7c910(param_1,*(undefined8 *)(lVar1 + 0x140));
    FUN_00d7c900(param_1,*(undefined4 *)(lVar1 + 0x130));
    FUN_00d7c8b0(param_1,*(undefined8 *)(lVar1 + 0x150));
    FUN_00d7c8a0(param_1,*(undefined4 *)(lVar1 + 0x134));
    FUN_00d7c880(param_1,*(undefined8 *)(lVar1 + 0x148));
    FUN_00d7c870(param_1,*(undefined4 *)(lVar1 + 0x138));
  }
  return;
}

