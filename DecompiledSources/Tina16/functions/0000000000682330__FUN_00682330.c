/* Ghidra address: 00682330 */
/* Ghidra symbol: FUN_00682330 */


undefined8 FUN_00682330(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 local_2018 [2032];
  undefined1 local_1038;
  undefined1 local_38;
  
  local_38 = 0;
  local_1038 = 0;
  local_2018[0] = 0x1000;
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  uVar1 = thunk_FUN_041b2403(uVar2,0xc4,(longlong)param_3,local_2018);
  FUN_00414740(param_2,local_2018,uVar1);
  return param_2;
}

