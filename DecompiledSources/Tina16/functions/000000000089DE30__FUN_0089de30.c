/* Ghidra address: 0089de30 */
/* Ghidra symbol: FUN_0089de30 */


undefined8 * FUN_0089de30(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    FUN_0043fba0(param_2,*(undefined2 *)(param_1 + 0xe),4);
    iVar1 = 1;
    do {
      FUN_0043fba0(local_20,*(undefined2 *)(param_1 + 0xe + (longlong)iVar1 * 2),4);
      FUN_00416cd0(param_2,3,*param_2,&LAB_0089df04,local_20[0]);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 8);
  }
  else {
    FUN_00414480(param_2);
  }
  FUN_00414480(local_20);
  return param_2;
}

