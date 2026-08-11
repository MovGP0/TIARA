/* Ghidra address: 004b3700 */
/* Ghidra symbol: FUN_004b3700 */


undefined8 * FUN_004b3700(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414ad0(param_2,param_3);
  FUN_00416780(&local_10,*(undefined2 *)(param_1 + 0x30));
  iVar1 = FUN_0044f900(local_10,*param_2);
  if (iVar1 == 0) {
    if (param_4 == '\0') {
      FUN_00414480(param_2);
    }
  }
  else {
    FUN_004169f0(param_2,iVar1 + -1);
  }
  FUN_00414480(&local_10);
  return param_2;
}

