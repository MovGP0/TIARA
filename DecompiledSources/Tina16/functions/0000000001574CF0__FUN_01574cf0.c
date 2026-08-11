/* Ghidra address: 01574cf0 */
/* Ghidra symbol: FUN_01574cf0 */


void FUN_01574cf0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                    (*(longlong **)(param_1 + 0x10),local_res10[0]);
  if (iVar1 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
              (*(longlong **)(param_1 + 0x10),local_res10[0]);
  }
  FUN_00414480(local_res10);
  return;
}

