/* Ghidra address: 010a5040 */
/* Ghidra symbol: FUN_010a5040 */


void FUN_010a5040(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x9f8) + 0xb0))
                    (*(longlong **)(param_1 + 0x9f8),local_res10[0]);
  if (iVar1 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x9f8) + 0x78))
              (*(longlong **)(param_1 + 0x9f8),local_res10[0]);
  }
  FUN_00414480(local_res10);
  return;
}

