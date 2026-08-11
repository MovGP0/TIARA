/* Ghidra address: 01102520 */
/* Ghidra symbol: FUN_01102520 */


void FUN_01102520(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *(longlong *)(param_1 + 0x198) = param_2;
  (**(code **)(**(longlong **)(param_2 + 0x78) + 0x10))
            (*(longlong **)(param_2 + 0x78),*(undefined8 *)(param_1 + 0x60));
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0xff);
  }
  FUN_005fd640(*(undefined8 *)(param_2 + 0x78),DAT_02030108);
  FUN_011024f0(param_1);
  if (*(longlong *)(param_1 + 0x188) == 0) {
    bVar3 = *(char *)(param_1 + 0x138) - 1;
    if (bVar3 == 0xff) {
      FUN_01102830(param_1,*(int *)(param_1 + 0x178) + -1,*(int *)(param_1 + 0x17c) + 1);
    }
    else if (bVar3 < 2) {
      FUN_01102bd0(param_1,1,*(undefined4 *)(param_1 + 0x48));
    }
  }
  else {
    FUN_011024f0(*(longlong *)(param_1 + 0x188));
    if (*(char *)(param_1 + 0x181) == '\0') {
      bVar3 = *(char *)(param_1 + 0x138) - 1;
      if (bVar3 == 0xff) {
        lVar2 = *(longlong *)(param_1 + 0x188);
        FUN_01102830(lVar2,*(int *)(lVar2 + 0x178) + -1,*(int *)(lVar2 + 0x17c) + 1);
      }
      else if (bVar3 < 2) {
        FUN_01102bd0(*(longlong *)(param_1 + 0x188),1,
                     *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x48));
      }
    }
    else {
      bVar3 = *(char *)(param_1 + 0x138) - 1;
      if (bVar3 == 0xff) {
        FUN_01102830(param_1,*(int *)(param_1 + 0x178) + -1,*(undefined4 *)(param_1 + 0x160));
        FUN_01102830(*(longlong *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x160),
                     *(int *)(*(longlong *)(param_1 + 0x188) + 0x17c) + 1);
      }
      else if (bVar3 < 2) {
        FUN_01102bd0(param_1,1,*(undefined4 *)(param_1 + 0x160));
        FUN_01102bd0(*(longlong *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x160),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x48));
      }
    }
  }
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  return;
}

