/* Ghidra address: 00707c40 */
/* Ghidra symbol: FUN_00707c40 */


void FUN_00707c40(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006c2460);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_007072c0(param_1,*(undefined8 *)(param_2 + 0x18));
    FUN_00707360(param_1,*(undefined8 *)(param_2 + 0x20));
    uVar2 = FUN_00707670(param_2);
    FUN_00707740(param_1,uVar2);
    FUN_00707790(param_1,*(undefined1 *)(param_2 + 0x2e));
    FUN_007077d0(param_1,*(undefined1 *)(param_2 + 0x2f));
    FUN_00707810(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  return;
}

