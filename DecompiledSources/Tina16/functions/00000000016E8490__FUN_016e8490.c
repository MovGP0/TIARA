/* Ghidra address: 016e8490 */
/* Ghidra symbol: FUN_016e8490 */


char FUN_016e8490(undefined8 param_1,int *param_2)

{
  int iVar1;
  char local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_29 = '\0';
  if (param_2 == (int *)0x0) goto code_r0x016e8562;
  if (*param_2 == 3) {
    FUN_004167a0(local_20,*(undefined8 *)(param_2 + 0x10));
    iVar1 = FUN_004170c0(&DAT_016e85a8,local_20[0],1);
    if (iVar1 < 1) {
      FUN_004167a0(&local_28,*(undefined8 *)(param_2 + 0x10));
      iVar1 = FUN_004170c0(&LAB_016e85bc,local_28,1);
      if (iVar1 < 1) goto LAB_016e851b;
    }
LAB_016e852a:
    local_29 = '\x01';
  }
  else {
LAB_016e851b:
    if ((*param_2 == 9) && (param_2[0x13] == 0x32)) goto LAB_016e852a;
    local_29 = '\0';
  }
  if (local_29 == '\0') {
    local_29 = FUN_016e8490(param_1,*(undefined8 *)(param_2 + 2));
  }
  if (local_29 == '\0') {
    local_29 = FUN_016e8490(param_1,*(undefined8 *)(param_2 + 4));
  }
code_r0x016e8562:
  FUN_00414560(&local_28,2);
  return local_29;
}

