/* Ghidra address: 017170e0 */
/* Ghidra symbol: FUN_017170e0 */


undefined8 FUN_017170e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xb8))
                    (*(longlong **)(param_1 + 0x98),local_res18[0]);
  if (iVar1 < 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_004b5390(*(undefined8 *)(param_1 + 0x98),param_2,iVar1);
  }
  FUN_00414480(local_res18);
  return param_2;
}

