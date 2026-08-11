/* Ghidra address: 01cec0c0 */
/* Ghidra symbol: FUN_01cec0c0 */


void FUN_01cec0c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0043f750(local_20,param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                    (*(longlong **)(param_1 + 0x10),local_20[0]);
  if (iVar1 != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))(*(longlong **)(param_1 + 0x10),iVar1);
  }
  FUN_00414480(local_20);
  return;
}

