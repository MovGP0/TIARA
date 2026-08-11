/* Ghidra address: 0179bb80 */
/* Ghidra symbol: FUN_0179bb80 */


undefined1 FUN_0179bb80(longlong param_1,undefined8 param_2,int *param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0xb0))
                    (*(longlong **)(param_1 + 0xd18),local_res10[0]);
  *param_3 = iVar2;
  if ((*param_3 < 0) || (*param_3 == param_4)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00414480(local_res10);
  return uVar1;
}

