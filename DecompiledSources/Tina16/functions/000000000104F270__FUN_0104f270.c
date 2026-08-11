/* Ghidra address: 0104f270 */
/* Ghidra symbol: FUN_0104f270 */


void FUN_0104f270(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x8d8) == 0) {
    FUN_0104f2e0(param_1);
  }
  else {
    uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,*(undefined8 *)(param_1 + 0x8d8),0xff00);
    FUN_01050620(param_1,uVar1);
    FUN_00410f20(uVar1);
    FUN_01053e80(param_1,0);
    FUN_00f629b0(*(undefined8 *)(param_1 + 0x980),0);
  }
  return;
}

