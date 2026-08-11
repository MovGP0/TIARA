/* Ghidra address: 00bc0330 */
/* Ghidra symbol: FUN_00bc0330 */


undefined1 FUN_00bc0330(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043e130(&local_10,local_res10[0]);
  iVar2 = FUN_00416db0(local_10,L"FALSE");
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_res10[0],&DAT_00bc03fc);
    if (iVar2 != 0) {
      uVar1 = 1;
      goto LAB_00bc0389;
    }
  }
  uVar1 = 0;
LAB_00bc0389:
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return uVar1;
}

