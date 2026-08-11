/* Ghidra address: 019b9050 */
/* Ghidra symbol: FUN_019b9050 */


void FUN_019b9050(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = FUN_019b5ce0(param_1,param_2);
  if (iVar1 < 0x100) {
    iVar1 = FUN_019b5ce0(param_1,param_2);
    FUN_019b8f70(&local_10,param_1,0,iVar1 + -1,param_2);
    (**(code **)(**(longlong **)(param_2 + 0xe38) + 0x78))(*(longlong **)(param_2 + 0xe38),local_10)
    ;
  }
  else {
    FUN_019b7b10(param_1,param_2);
  }
  FUN_00414480(&local_10);
  return;
}

