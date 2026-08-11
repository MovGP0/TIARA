/* Ghidra address: 01884f00 */
/* Ghidra symbol: FUN_01884f00 */


void FUN_01884f00(void)

{
  undefined8 uVar1;
  undefined **local_10 [2];
  
  DAT_02110634 = DAT_02110634 + -1;
  if (DAT_02110634 == -1) {
    local_10[0] = &PTR_FUN_018837f0;
    FUN_004a0ae0(local_10,0);
    uVar1 = FUN_01881a00();
    FUN_018812e0(uVar1,&PTR_FUN_018820e0,0,0,0,0,2,8);
    uVar1 = FUN_01881a00();
    FUN_018812e0(uVar1,&PTR_FUN_01882d28,0,0,0,0,5,8);
    uVar1 = FUN_01881a00();
    FUN_018812e0(uVar1,&PTR_FUN_01883290,0,0,0,0,0x15,8);
  }
  return;
}

