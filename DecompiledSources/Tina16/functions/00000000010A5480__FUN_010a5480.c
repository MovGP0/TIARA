/* Ghidra address: 010a5480 */
/* Ghidra symbol: FUN_010a5480 */


bool FUN_010a5480(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0043f750(&local_10,param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x9e0) + 0xb0))
                    (*(longlong **)(param_1 + 0x9e0),local_10);
  FUN_00414480(&local_10);
  return iVar1 != -1;
}

