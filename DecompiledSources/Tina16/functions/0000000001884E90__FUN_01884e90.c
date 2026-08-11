/* Ghidra address: 01884e90 */
/* Ghidra symbol: FUN_01884e90 */


void FUN_01884e90(void)

{
  undefined8 uVar1;
  undefined **local_10 [2];
  
  DAT_02110634 = DAT_02110634 + 1;
  if (DAT_02110634 == 0) {
    local_10[0] = &PTR_FUN_018837f0;
    FUN_004a0b90(local_10,0);
    uVar1 = FUN_01881a00();
    FUN_01881490(uVar1,&PTR_FUN_018820e0);
    uVar1 = FUN_01881a00();
    FUN_01881490(uVar1,&PTR_FUN_01882d28);
    uVar1 = FUN_01881a00();
    FUN_01881490(uVar1,&PTR_FUN_01883290);
  }
  return;
}

