/* Ghidra address: 015cf4f0 */
/* Ghidra symbol: FUN_015cf4f0 */


void FUN_015cf4f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_015c2a60(*(undefined8 *)
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x1610) + 0xee0) + 0x238) + 0x28),
                       *(undefined4 *)(param_1 + 0x15dc));
  if (*(longlong *)(lVar1 + 0x75) == 0) {
    if (*(longlong *)(param_1 + 0x15d0) != 0) {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x15d0));
      *(undefined8 *)(param_1 + 0x15d0) = 0;
    }
  }
  else {
    lVar1 = FUN_015c2a60(*(undefined8 *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x1610) + 0xee0) + 0x238) + 0x28)
                         ,*(undefined4 *)(param_1 + 0x15dc));
    if (*(char *)(lVar1 + 0x7d) == '\0') {
      FUN_004b6dc0(*(undefined8 *)(param_1 + 0x15d0),*(undefined8 *)(param_1 + 0x15c8));
    }
    else {
      lVar1 = FUN_015c2a60(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x1610) + 0xee0) + 0x238) +
                            0x28),*(undefined4 *)(param_1 + 0x15dc));
      FUN_00410f20(*(undefined8 *)(lVar1 + 0x75));
      lVar1 = FUN_015c2a60(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x1610) + 0xee0) + 0x238) +
                            0x28),*(undefined4 *)(param_1 + 0x15dc));
      *(undefined8 *)(lVar1 + 0x75) = 0;
    }
  }
  return;
}

