/* Ghidra address: 00ad9960 */
/* Ghidra symbol: FUN_00ad9960 */


void FUN_00ad9960(undefined8 param_1,longlong param_2)

{
  FUN_00410f20(*(undefined8 *)(param_2 + 0x4c0));
  *(undefined8 *)(*(longlong *)(param_2 + 0x510) + 0x68) = *(undefined8 *)(param_2 + 0x488);
  if (*(longlong *)(param_2 + 0x480) == 0) {
    FUN_00aa1cc0(*(undefined8 *)(param_2 + 0x478));
    FUN_00410f20(*(undefined8 *)(param_2 + 0x478));
    FUN_00a9b890(*(undefined8 *)(*(longlong *)(param_2 + 0x510) + 0x68),
                 *(undefined8 *)(param_2 + 0x460),
                 *(undefined4 *)(*(longlong *)(param_2 + 0x510) + 0x7c));
  }
  else {
    *(undefined1 *)(*(longlong *)(param_2 + 0x478) + 0x560) = *(undefined1 *)(param_2 + 0x477);
    FUN_00aa1ea0(*(undefined8 *)(param_2 + 0x478),*(undefined8 *)(param_2 + 0x480));
    *(undefined8 *)(param_2 + 0x468) = *(undefined8 *)(*(longlong *)(param_2 + 0x478) + 0xa8);
    if (*(char *)(param_2 + 0x477) == '\0') {
      FUN_00a9b890(*(undefined8 *)(param_2 + 0x468),*(undefined8 *)(param_2 + 0x460),
                   *(undefined4 *)(*(longlong *)(param_2 + 0x510) + 0x7c));
      FUN_00a9b890(*(undefined8 *)(param_2 + 0x468),*(undefined8 *)(param_2 + 0x480),
                   *(undefined4 *)(*(longlong *)(param_2 + 0x510) + 0x7c));
    }
    else {
      FUN_00a9b890(*(undefined8 *)(param_2 + 0x468),*(undefined8 *)(param_2 + 0x480),
                   *(undefined4 *)(*(longlong *)(param_2 + 0x510) + 0x7c));
      FUN_00a9b890(*(undefined8 *)(param_2 + 0x468),*(undefined8 *)(param_2 + 0x460),
                   *(undefined4 *)(*(longlong *)(param_2 + 0x510) + 0x7c));
    }
    FUN_00a9b890(*(undefined8 *)(*(longlong *)(param_2 + 0x510) + 0x68),
                 *(undefined8 *)(param_2 + 0x478),
                 *(undefined4 *)(*(longlong *)(param_2 + 0x510) + 0x7c));
    *(undefined8 *)(*(longlong *)(param_2 + 0x460) + 0x28) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x478) + 0xa8);
  }
  FUN_00ac0ab0(*(undefined8 *)(*(longlong *)(param_2 + 0x510) + 0xe8),0xa0);
  *(undefined8 *)(param_2 + 0x458) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x510) + 0xe8) + 0x20);
  if (*(longlong *)(param_2 + 0x458) != 0) {
    *(undefined1 *)(*(longlong *)(param_2 + 0x458) + 0x30a) = *(undefined1 *)(param_2 + 0x457);
  }
  FUN_00ad47e0(*(undefined8 *)(param_2 + 0x510),*(undefined1 *)(param_2 + 0x456));
  *(undefined4 *)(*(longlong *)(param_2 + 0x510) + 0x84) = *(undefined4 *)(param_2 + 0x450);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x4d8));
  return;
}

