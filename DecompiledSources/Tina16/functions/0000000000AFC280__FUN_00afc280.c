/* Ghidra address: 00afc280 */
/* Ghidra symbol: FUN_00afc280 */


void FUN_00afc280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x7c0) == 0) {
    FUN_00410f20(param_7);
  }
  else {
    FUN_00414ad0(param_1 + 0x968,param_3);
    FUN_00414ad0(param_1 + 0x980,param_6);
    FUN_00414ad0(param_1 + 0x970,param_4);
    FUN_00414ad0(param_1 + 0x978,param_5);
    *(undefined8 *)(param_1 + 0x988) = param_7;
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_0413e052(uVar1,0x464,0,0);
  }
  return;
}

