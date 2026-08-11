/* Ghidra address: 006fa9c0 */
/* Ghidra symbol: FUN_006fa9c0 */


void FUN_006fa9c0(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  
  FUN_00651a90(param_1,param_2,param_3);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  cVar2 = (char)param_3;
  if (cVar1 != '\0') {
    if ((cVar2 == '\0') || (*(char *)(param_1 + 0x31a) == '\0')) {
      FUN_006fa3b0(param_1,*(undefined1 *)(param_2 + 0xd8));
    }
    if ((cVar2 == '\0') || (*(int *)(param_1 + 0x31c) == -1)) {
      FUN_006fa490(param_1,*(undefined4 *)(param_2 + 0x110));
    }
  }
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00638cf8);
  if (cVar1 != '\0') {
    if ((cVar2 == '\0') || (*(longlong *)(param_1 + 0xe8) == 0)) {
      FUN_0064dd50(param_1,*(undefined8 *)(param_2 + 0x140));
    }
    if ((cVar2 == '\0') || (*(longlong *)(param_1 + 0x330) == 0)) {
      FUN_006fa430(param_1,*(undefined8 *)(param_2 + 0x138));
    }
    if ((cVar2 == '\0') || (*(char *)(param_1 + 0x338) == '\0')) {
      FUN_006fabb0(param_1,*(undefined1 *)(param_2 + 0x148));
    }
  }
  return;
}

