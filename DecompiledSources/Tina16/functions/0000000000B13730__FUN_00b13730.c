/* Ghidra address: 00b13730 */
/* Ghidra symbol: FUN_00b13730 */


void FUN_00b13730(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  
  cVar4 = FUN_004113d0(param_2,&PTR_FUN_00b10080);
  if (cVar4 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    uVar1 = FUN_004113f0(param_2,&PTR_FUN_00b10080);
    FUN_00b137e0(uVar1,*(undefined8 *)(param_1 + 0x10));
    FUN_00b13800(uVar1,*(undefined1 *)(param_1 + 0x18));
    plVar2 = (longlong *)FUN_00b13890(uVar1);
    uVar3 = FUN_00b13890(param_1);
    (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
    FUN_00b13840(uVar1,*(undefined4 *)(param_1 + 0x28));
    FUN_00b13900(uVar1,*(undefined1 *)(param_1 + 0x2c));
    FUN_00b13820(uVar1,*(undefined8 *)(param_1 + 0x30));
  }
  return;
}

