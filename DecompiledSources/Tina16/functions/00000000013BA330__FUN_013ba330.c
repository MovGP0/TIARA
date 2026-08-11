/* Ghidra address: 013ba330 */
/* Ghidra symbol: FUN_013ba330 */


bool FUN_013ba330(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x28))(*(longlong **)(param_1 + 0xd0));
  if (param_2 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x18))
              (*(longlong **)(param_1 + 0xd0),local_20,param_2);
    FUN_00414ad0(param_3,local_20[0]);
  }
  FUN_00414480(local_20);
  return param_2 < iVar1;
}

