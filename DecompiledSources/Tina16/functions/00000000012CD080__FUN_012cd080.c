/* Ghidra address: 012cd080 */
/* Ghidra symbol: FUN_012cd080 */


void FUN_012cd080(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0xb0))
                    (*(longlong **)(param_1 + 0x738),local_res10[0]);
  if (-1 < iVar1) {
    FUN_004aedb0(*(undefined8 *)(param_1 + 0x740),iVar1,param_3);
  }
  FUN_00414480(local_res10);
  return;
}

