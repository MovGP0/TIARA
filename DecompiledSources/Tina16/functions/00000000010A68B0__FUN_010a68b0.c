/* Ghidra address: 010a68b0 */
/* Ghidra symbol: FUN_010a68b0 */


void FUN_010a68b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa00) + 0xb0))
                    (*(longlong **)(param_1 + 0xa00),local_res10[0]);
  if (iVar2 == -1) {
    cVar1 = FUN_010a6970(param_1,local_res10[0]);
    if (cVar1 == '\0') {
      cVar1 = FUN_01615f20(local_res10[0]);
      if (cVar1 == '\0') goto code_r0x010a6939;
    }
    (**(code **)(**(longlong **)(param_1 + 0xa00) + 0x78))
              (*(longlong **)(param_1 + 0xa00),local_res10[0]);
    FUN_016496b0(*(undefined8 *)(*(longlong *)(param_1 + 0x1a70) + 0x78),local_res10[0]);
  }
code_r0x010a6939:
  FUN_00414480(local_res10);
  return;
}

