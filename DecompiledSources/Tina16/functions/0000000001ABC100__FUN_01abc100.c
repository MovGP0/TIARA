/* Ghidra address: 01abc100 */
/* Ghidra symbol: FUN_01abc100 */


undefined1 FUN_01abc100(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbddf0);
  if ((cVar1 != '\0') || (cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbe0c0), cVar1 != '\0')) {
    return 0x11;
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbd850);
  if ((cVar1 != '\0') || (cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbdb20), cVar1 != '\0')) {
    return 0x14;
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbc030);
  if ((cVar1 != '\0') || (cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbc328), cVar1 != '\0')) {
    return 0x16;
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cb8ae0);
  if ((cVar1 != '\0') || (cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cb8fa8), cVar1 != '\0')) {
    return 2;
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbe890);
  if ((cVar1 != '\0') || (cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbeab8), cVar1 != '\0')) {
    return 0x20;
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbd2b8);
  if ((cVar1 != '\0') || (cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbd580), cVar1 != '\0')) {
    return 0x1b;
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbe398);
  if ((cVar1 != '\0') || (cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbe5c0), cVar1 != '\0')) {
    return 0x1d;
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbcb38);
  if ((cVar1 == '\0') && (cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cbcfe8), cVar1 == '\0')) {
    uVar2 = FUN_01abd060(param_1);
    return uVar2;
  }
  return 0x19;
}

