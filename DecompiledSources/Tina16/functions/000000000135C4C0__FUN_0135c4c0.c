/* Ghidra address: 0135c4c0 */
/* Ghidra symbol: FUN_0135c4c0 */


undefined8 FUN_0135c4c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res18 [2];
  undefined4 local_c;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(param_2);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
                    (*(longlong **)(param_1 + 8),local_res18[0],&local_c);
  if (cVar1 != '\0') {
    FUN_004b5390(*(undefined8 *)(param_1 + 8),param_2,local_c);
  }
  FUN_00414480(local_res18);
  return param_2;
}

