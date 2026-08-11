/* Ghidra address: 00bfa390 */
/* Ghidra symbol: FUN_00bfa390 */


void FUN_00bfa390(longlong param_1)

{
  int iVar1;
  undefined8 local_38;
  longlong local_30 [2];
  int local_20;
  int local_1c;
  
  local_30[0] = 0;
  local_20 = 1;
  local_1c = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8))
  ;
  if (local_1c < 1) {
    local_1c = 1;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
              (*(longlong **)(param_1 + 0x4e8),local_30,local_1c + -1);
    iVar1 = 0;
    if (local_30[0] != 0) {
      iVar1 = *(int *)(local_30[0] + -4);
    }
    local_20 = local_20 + iVar1;
  }
  local_38 = FUN_00bb7750(1,1);
  FUN_00c0a5f0(param_1,&local_20,&local_38,&local_20);
  FUN_00c0a950(param_1,0x80);
  FUN_00414480(local_30);
  return;
}

