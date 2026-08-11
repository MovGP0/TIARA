/* Ghidra address: 01bfa9d0 */
/* Ghidra symbol: FUN_01bfa9d0 */


undefined8 FUN_01bfa9d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar1 = FUN_01bfab50(param_1);
    uVar1 = FUN_01bf9620(uVar1);
    uVar1 = FUN_01bfb780(&PTR_FUN_01bef088,1,uVar1,&PTR_FUN_01bf1690);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x38);
}

