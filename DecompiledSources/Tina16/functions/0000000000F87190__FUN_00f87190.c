/* Ghidra address: 00f87190 */
/* Ghidra symbol: FUN_00f87190 */


char FUN_00f87190(undefined8 param_1,longlong param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res10 [3];
  char local_11;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *param_3 = 0xffffffff;
  iVar1 = 0;
  if (local_res10[0] != 0) {
    iVar1 = *(int *)(local_res10[0] + -4);
  }
  if (param_4 != '\0') {
    if (iVar1 < 3) {
      local_11 = '\0';
      goto LAB_00f87277;
    }
    FUN_00416dc0(&local_10,local_res10[0],1,2);
    iVar1 = FUN_00416db0(local_10,&DAT_00f872d4);
    if (iVar1 != 0) {
      local_11 = '\0';
      goto LAB_00f87277;
    }
    FUN_00416dc0(local_res10,local_res10[0],3,0xff);
  }
  local_11 = FUN_00f870b0(local_res10[0],param_4);
  if (local_11 != '\0') {
    if (param_4 == '\0') {
      uVar2 = FUN_0043fc00(local_res10[0]);
      *param_3 = uVar2;
    }
    else {
      uVar2 = FUN_01aa1170(local_res10[0]);
      *param_3 = uVar2;
    }
  }
LAB_00f87277:
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return local_11;
}

