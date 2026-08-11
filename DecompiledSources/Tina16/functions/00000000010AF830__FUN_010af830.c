/* Ghidra address: 010af830 */
/* Ghidra symbol: FUN_010af830 */


undefined8 FUN_010af830(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_00441a10(&local_18,*(undefined8 *)(param_1 + 0x30));
  FUN_0043e1a0(&local_10,local_18);
  iVar1 = FUN_00416db0(local_10,L".ino");
  if (iVar1 == 0) {
    FUN_004414c0(param_2,*(undefined8 *)(param_1 + 0x30),L".cpp");
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x30));
  }
  FUN_00414560(&local_18,2);
  return param_2;
}

