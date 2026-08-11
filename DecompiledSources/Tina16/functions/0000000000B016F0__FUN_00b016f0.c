/* Ghidra address: 00b016f0 */
/* Ghidra symbol: FUN_00b016f0 */


void FUN_00b016f0(longlong param_1)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x28))(*(longlong **)(param_1 + 0x738));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x18))
              (*(longlong **)(param_1 + 0x738),local_30,iVar1 + -1);
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x78))
              (*(longlong **)(param_1 + 0x740),local_30[0]);
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x98))
              (*(longlong **)(param_1 + 0x738),iVar1 + -1);
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x18))
              (*(longlong **)(param_1 + 0x738),&local_38,iVar1 + -2);
    FUN_00b01560(param_1,local_38,0);
  }
  FUN_00414560(&local_38,2);
  return;
}

