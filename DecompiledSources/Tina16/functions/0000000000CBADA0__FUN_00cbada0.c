/* Ghidra address: 00cbada0 */
/* Ghidra symbol: FUN_00cbada0 */


undefined8 FUN_00cbada0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(*(longlong **)(param_1 + 0x30));
  if (iVar1 < 1) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x18));
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30),local_20,0)
    ;
    FUN_00416cd0(param_2,3,*(undefined8 *)(param_1 + 0x18),&LAB_00cbae64,local_20[0]);
  }
  FUN_00414480(local_20);
  return param_2;
}

