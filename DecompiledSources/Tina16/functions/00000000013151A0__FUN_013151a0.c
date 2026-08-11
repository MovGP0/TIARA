/* Ghidra address: 013151a0 */
/* Ghidra symbol: FUN_013151a0 */


undefined8 FUN_013151a0(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if ((uint)**(byte **)(param_1 + 0x138) + (uint)*(byte *)(*(longlong *)(param_1 + 0x138) + 2) < 2)
  {
    FUN_0043f750(param_2,*(undefined4 *)(param_1 + 0x170));
  }
  else {
    FUN_0043f750(&local_10,*(undefined4 *)(param_1 + 0x170));
    FUN_00416780(&local_18,param_3);
    FUN_00416cd0(param_2,3,local_10,&DAT_01315288,local_18);
  }
  FUN_00414560(&local_18,2);
  return param_2;
}

