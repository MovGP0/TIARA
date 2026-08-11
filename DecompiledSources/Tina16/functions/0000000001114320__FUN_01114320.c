/* Ghidra address: 01114320 */
/* Ghidra symbol: FUN_01114320 */


undefined8 FUN_01114320(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_2018 [4064];
  undefined1 local_1038;
  undefined1 local_38;
  
  local_38 = 0;
  local_1038 = 0;
  iVar1 = thunk_FUN_041b13ea(*(undefined4 *)(param_1 + 0x634),local_2018,0x2000);
  if (iVar1 == 0) {
    FUN_0041ddd0(param_2,PTR_PTR_02004120);
  }
  else {
    uVar2 = FUN_00414d00(local_2018);
    FUN_00414740(param_2,local_2018,uVar2);
  }
  return param_2;
}

