/* Ghidra address: 006ed980 */
/* Ghidra symbol: FUN_006ed980 */


void FUN_006ed980(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006c2d78);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_006ed880(param_1,*(undefined1 *)(param_2 + 0x18));
    FUN_006ed8d0(param_1,*(undefined1 *)(param_2 + 0x19));
    FUN_006ed740(param_1,*(undefined8 *)(param_2 + 0x20));
    FUN_006ed920(param_1,*(undefined4 *)(param_2 + 0x30));
    FUN_006ed940(param_1,*(undefined4 *)(param_2 + 0x28));
    FUN_006ed960(param_1,*(undefined4 *)(param_2 + 0x2c));
    uVar2 = FUN_006ed780(param_2);
    FUN_006ed840(param_1,uVar2);
  }
  return;
}

