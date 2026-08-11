/* Ghidra address: 012d6af0 */
/* Ghidra symbol: FUN_012d6af0 */


undefined8 FUN_012d6af0(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if ((uint)**(byte **)(param_1 + 0x168) + (uint)*(byte *)(*(longlong *)(param_1 + 0x168) + 1) +
      (uint)*(byte *)(*(longlong *)(param_1 + 0x168) + 2) < 2) {
    FUN_0043f750(param_2,*(undefined4 *)(param_1 + 0x1a0));
  }
  else {
    FUN_0043f750(&local_10,*(undefined4 *)(param_1 + 0x1a0));
    FUN_00416780(&local_18,param_3);
    FUN_00416cd0(param_2,3,local_10,&DAT_012d6be8,local_18);
  }
  FUN_00414560(&local_18,2);
  return param_2;
}

