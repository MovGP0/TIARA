/* Ghidra address: 014cd270 */
/* Ghidra symbol: FUN_014cd270 */


void FUN_014cd270(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x12a0) != 0) {
    FUN_0156c550(*(longlong *)(param_1 + 0x12a0),*(undefined8 *)(param_1 + 0x1280));
    if (*(longlong *)PTR_DAT_020044c0 != 0) {
      FUN_014ba190(*(undefined8 *)PTR_DAT_020044c0);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x12a0));
    uVar1 = FUN_00442620(param_1 + 0x70,*(undefined8 *)(param_1 + 0x1298));
    FUN_015fcd60(*(undefined8 *)(param_1 + 0x1280),uVar1,0);
    *(undefined8 *)(param_1 + 0x12a0) = 0;
  }
  return;
}

