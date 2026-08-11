/* Ghidra address: 0160e170 */
/* Ghidra symbol: FUN_0160e170 */


void FUN_0160e170(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x28))(*(longlong **)(param_1 + 0xf0));
  if (iVar1 == 2) {
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))(*(longlong **)(param_1 + 0xf0),local_20,0)
    ;
    FUN_00414ad0(param_2 + 0x78,local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))
              (*(longlong **)(param_1 + 0xf0),&local_28,1);
    FUN_00414ad0(param_2 + 0x80,local_28);
  }
  FUN_00414560(&local_28,2);
  return;
}

