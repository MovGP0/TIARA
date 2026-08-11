/* Ghidra address: 016068d0 */
/* Ghidra symbol: FUN_016068d0 */


void FUN_016068d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00442620(param_1 + 0x60e,*(undefined8 *)(param_1 + 0x600));
  _NewElfReaderSession(param_2,param_3,uVar1,param_5,param_6,param_7,param_8);
  return;
}

