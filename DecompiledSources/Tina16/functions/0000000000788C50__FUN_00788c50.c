/* Ghidra address: 00788c50 */
/* Ghidra symbol: FUN_00788c50 */


undefined8 * FUN_00788c50(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 local_218 [512];
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = thunk_FUN_041ca87a(*(longlong *)(param_1 + 8),local_218,0x100);
    FUN_00414740(param_2,local_218,uVar1);
  }
  FUN_00414ad0(param_1 + 0x50,*param_2);
  return param_2;
}

