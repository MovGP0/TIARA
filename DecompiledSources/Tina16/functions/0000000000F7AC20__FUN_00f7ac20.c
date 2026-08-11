/* Ghidra address: 00f7ac20 */
/* Ghidra symbol: FUN_00f7ac20 */


void FUN_00f7ac20(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_006ea560(param_1);
  uVar2 = FUN_0065b870(param_1);
  uVar1 = thunk_FUN_041b2403(uVar2,0x43b,0,0);
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar2,0x445,0,uVar1 | 4);
  return;
}

