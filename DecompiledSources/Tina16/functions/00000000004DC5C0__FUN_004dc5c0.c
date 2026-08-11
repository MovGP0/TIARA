/* Ghidra address: 004dc5c0 */
/* Ghidra symbol: FUN_004dc5c0 */


undefined8 FUN_004dc5c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_004dc660(param_1,4,4);
  lVar1 = FUN_004d11f0();
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar1 + 8);
  FUN_0041d5c0(param_1);
  if (param_1 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = param_1 + 7;
  }
  FUN_0041b840(param_2,plVar2);
  (**(code **)(*param_1 + 0x10))(param_1);
  return param_2;
}

