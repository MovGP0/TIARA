/* Ghidra address: 01717180 */
/* Ghidra symbol: FUN_01717180 */


undefined8 FUN_01717180(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((-1 < param_3) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x28))(*(longlong **)(param_1 + 0x98)),
     param_3 < iVar1)) {
    FUN_004b3cf0(*(undefined8 *)(param_1 + 0x98),param_2,param_3);
    return param_2;
  }
  FUN_00414480(param_2);
  return param_2;
}

