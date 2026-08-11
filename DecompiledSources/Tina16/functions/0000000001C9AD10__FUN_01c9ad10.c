/* Ghidra address: 01c9ad10 */
/* Ghidra symbol: FUN_01c9ad10 */


void FUN_01c9ad10(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_020019c8 != 0) {
    FUN_0156c550(*(undefined8 *)(param_1 + 0x2750),*(undefined8 *)(param_1 + 0x2738));
    uVar1 = FUN_00442620(param_1 + 0x2528,*(undefined8 *)(param_1 + 0x2740));
    FUN_015fcd60(*(undefined8 *)(param_1 + 0x2738),uVar1,0);
    FUN_00410f20(*(undefined8 *)(param_1 + 0x2750));
    FUN_015fcbd0(PTR_DAT_02004770,0);
    *(undefined8 *)(param_1 + 0x2750) = 0;
    if (*(longlong *)PTR_DAT_020019c8 != 0) {
      FUN_00f85560(*(undefined8 *)PTR_DAT_020019c8,0);
    }
    FUN_00410f20(*(undefined8 *)PTR_DAT_020019c8);
    *(undefined8 *)PTR_DAT_020019c8 = 0;
    uVar1 = FUN_019a45d0();
    FUN_0199ded0(uVar1,1,1);
    FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1550),0);
  *(undefined1 *)(param_1 + 0x27c1) = 0;
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_0413e052(uVar1,0x1242,0,0);
  return;
}

