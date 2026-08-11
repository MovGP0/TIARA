/* Ghidra address: 00663450 */
/* Ghidra symbol: FUN_00663450 */


void FUN_00663450(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong local_18;
  int local_c;
  
  local_18 = 0;
  uVar1 = FUN_0045ae90();
  FUN_00459ca0(uVar1,&local_18,param_2);
  local_c = 0;
  if (local_18 != 0) {
    local_c = (int)*(undefined8 *)(local_18 + -8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))(*(longlong **)(param_1 + 0x88),&local_c,4);
  if (0 < local_c) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))
              (*(longlong **)(param_1 + 0x88),local_18,local_c);
  }
  FUN_00419430(&local_18,&DAT_00406578);
  return;
}

