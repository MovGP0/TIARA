/* Ghidra address: 011026e0 */
/* Ghidra symbol: FUN_011026e0 */


void FUN_011026e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = FUN_004113d0(*(undefined8 *)(param_1 + 200),&PTR_FUN_01cb9c30);
  if (cVar3 == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x198) + 0x78);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x60));
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x78),0xff);
    }
    FUN_005fd640(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x78),DAT_02030108);
    FUN_011024f0(param_1);
    if (*(longlong *)(param_1 + 0x188) == 0) {
      FUN_01102830(param_1,*(undefined4 *)(param_1 + 0x160),*(int *)(param_1 + 0x17c) + 1);
    }
    else {
      FUN_011024f0(*(longlong *)(param_1 + 0x188));
      if (*(char *)(param_1 + 0x181) == '\0') {
        lVar2 = *(longlong *)(param_1 + 0x188);
        FUN_01102830(lVar2,*(int *)(lVar2 + 0x178) + -1,*(int *)(lVar2 + 0x17c) + 1);
      }
      else {
        FUN_01102830(*(longlong *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x160),
                     *(int *)(*(longlong *)(param_1 + 0x188) + 0x17c) + 1);
        FUN_01102830(param_1,*(undefined4 *)(param_1 + 0x160),*(int *)(param_1 + 0x17c) + 1);
      }
      FUN_01102800(param_1);
    }
  }
  return;
}

