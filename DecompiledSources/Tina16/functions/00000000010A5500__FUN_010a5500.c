/* Ghidra address: 010a5500 */
/* Ghidra symbol: FUN_010a5500 */


void FUN_010a5500(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_0043f750(local_20,param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x9e0) + 0xb0))
                    (*(longlong **)(param_1 + 0x9e0),local_20[0]);
  if (iVar1 == -1) {
    FUN_0043f750(local_30,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x9e0) + 0x78))
              (*(longlong **)(param_1 + 0x9e0),local_30[0]);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x9e0) + 0x98))(*(longlong **)(param_1 + 0x9e0),iVar1);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

