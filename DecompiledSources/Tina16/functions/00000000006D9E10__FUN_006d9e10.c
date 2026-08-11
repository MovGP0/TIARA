/* Ghidra address: 006d9e10 */
/* Ghidra symbol: FUN_006d9e10 */


void FUN_006d9e10(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006b26e8);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_006da160(param_1,*(undefined8 *)(param_2 + 0x18));
    FUN_006da1a0(param_1,*(undefined4 *)(param_2 + 0x20));
    FUN_006da110(param_1,*(undefined4 *)(param_2 + 0x24));
    FUN_006da0d0(param_1,*(undefined4 *)(param_2 + 0x28));
    FUN_006da070(param_1,*(undefined1 *)(param_2 + 0x2c));
    FUN_006da140(param_1,*(undefined1 *)(param_2 + 0x2d));
    *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
    FUN_006da200(param_1,*(undefined4 *)(param_2 + 0x30));
    FUN_006da220(param_1,*(undefined1 *)(param_2 + 0x36));
    FUN_006da240(param_1,*(undefined1 *)(param_2 + 0x37));
  }
  return;
}

