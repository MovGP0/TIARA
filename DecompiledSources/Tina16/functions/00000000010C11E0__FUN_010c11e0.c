/* Ghidra address: 010c11e0 */
/* Ghidra symbol: FUN_010c11e0 */


void FUN_010c11e0(undefined8 param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_1c8 [47];
  undefined1 local_199;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 local_6f [81];
  undefined1 local_1e;
  undefined4 local_1c;
  
  local_80 = auStack_1c8;
  local_88 = 0;
  local_199 = *param_3;
  local_1c = *param_2;
  local_1e = local_199;
  FUN_010c0090(param_1,local_6f,local_199);
  FUN_004169a0(&local_88,param_1);
  uVar1 = FUN_00b91560(local_88);
  *param_2 = uVar1;
  FUN_00414480(&local_88);
  return;
}

