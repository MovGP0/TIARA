/* Ghidra address: 010af640 */
/* Ghidra symbol: FUN_010af640 */


undefined8 FUN_010af640(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (param_3 != '\0') {
    FUN_00441a10(&local_18,*(undefined8 *)(param_1 + 0x30));
    FUN_0043e1a0(&local_10,local_18);
    iVar1 = FUN_00416db0(local_10,L".ino");
    if (iVar1 == 0) {
      FUN_004414c0(param_2,*(undefined8 *)(param_1 + 0x30),L".cpp");
      goto code_r0x010af6e9;
    }
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x30));
  }
  else {
    FUN_00441920(param_2,*(undefined8 *)(param_1 + 0x30));
  }
code_r0x010af6e9:
  FUN_00414560(&local_18,2);
  return param_2;
}

