/* Ghidra address: 017cc9f0 */
/* Ghidra symbol: FUN_017cc9f0 */


char FUN_017cc9f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  char local_21;
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_21 = *(char *)(param_1 + 0x560) != '\0';
  if ((!(bool)local_21) && (param_3 != (longlong *)0x0)) {
    iVar2 = 0;
    while (local_21 == '\0') {
      iVar1 = (**(code **)(*param_3 + 0x28))(param_3);
      if (iVar1 <= iVar2) break;
      (**(code **)(*param_3 + 0x18))(param_3,&local_20,iVar2);
      local_21 = FUN_005b8460(local_20,local_res10[0]);
      iVar2 = iVar2 + 1;
    }
  }
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return local_21;
}

