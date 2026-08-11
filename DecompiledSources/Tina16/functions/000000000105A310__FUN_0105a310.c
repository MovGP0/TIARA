/* Ghidra address: 0105a310 */
/* Ghidra symbol: FUN_0105a310 */


undefined1 FUN_0105a310(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = FUN_00416db0(local_res10[0],L"wifi101");
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_res10[0],L"mqtt");
    if (iVar2 != 0) {
      uVar1 = 0;
      goto LAB_0105a354;
    }
  }
  uVar1 = 1;
LAB_0105a354:
  FUN_00414480(local_res10);
  return uVar1;
}

