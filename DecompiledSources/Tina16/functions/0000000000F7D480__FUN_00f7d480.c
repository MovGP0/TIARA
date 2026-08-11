/* Ghidra address: 00f7d480 */
/* Ghidra symbol: FUN_00f7d480 */


undefined1 FUN_00f7d480(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar2 = FUN_00442620(param_1 + 0x54,local_res10[0]);
  uVar1 = _Dbg_PossibleBreakpoint(*(undefined8 *)(param_1 + 0x10),param_3,uVar2);
  FUN_00414480(local_res10);
  return uVar1;
}

