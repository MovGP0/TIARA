/* Ghidra address: 01647a70 */
/* Ghidra symbol: FUN_01647a70 */


int FUN_01647a70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb0))
                    (*(longlong **)(param_1 + 0x38),local_res10[0]);
  if (iVar1 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
              (*(longlong **)(param_1 + 0x38),local_res10[0]);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))(*(longlong **)(param_1 + 0x38));
    iVar1 = iVar1 + -1;
  }
  FUN_00414480(local_res10);
  return iVar1;
}

