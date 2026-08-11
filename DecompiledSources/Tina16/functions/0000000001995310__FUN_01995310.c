/* Ghidra address: 01995310 */
/* Ghidra symbol: FUN_01995310 */


bool FUN_01995310(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0xb0))
                    (*(longlong **)(param_1 + 0x428),local_res10[0]);
  if (-1 < iVar1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0x30))
                      (*(longlong **)(param_1 + 0x428),iVar1);
    *param_3 = uVar2;
  }
  FUN_00414480(local_res10);
  return -1 < iVar1;
}

