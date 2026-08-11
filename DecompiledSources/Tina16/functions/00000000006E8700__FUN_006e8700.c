/* Ghidra address: 006e8700 */
/* Ghidra symbol: FUN_006e8700 */


undefined8 FUN_006e8700(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  short local_2018 [2032];
  undefined1 local_1038;
  undefined1 local_38;
  
  local_38 = 0;
  local_1038 = 0;
  local_2018[0] = 0x1000;
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  iVar1 = thunk_FUN_041b2403(uVar2,0xc4,(longlong)param_3,local_2018);
  if ((0 < iVar1) && (local_2018[iVar1 + -1] == 0xd)) {
    iVar1 = iVar1 + -1;
  }
  FUN_00414740(param_2,local_2018,iVar1);
  return param_2;
}

