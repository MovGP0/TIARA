/* Ghidra address: 00af0a20 */
/* Ghidra symbol: FUN_00af0a20 */


void FUN_00af0a20(longlong *param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  char local_50;
  undefined1 *local_40;
  char local_35;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_78;
  local_28 = 0;
  local_30 = 0;
  cVar1 = FUN_00af2f30(param_1);
  if ((cVar1 == '\0') && (param_2 != 0)) {
    FUN_00414b50(&local_28,param_1[0x117]);
    FUN_00414b50(&local_30,param_1[0x11c]);
    local_34 = FUN_00af5fb0(param_1);
    local_35 = (char)param_1[0x118];
    local_20 = FUN_00afebf0(param_1);
    (**(code **)(*param_1 + 0x4a0))(param_1,param_2,param_3);
    iVar2 = FUN_00416db0(local_28,param_1[0x117]);
    if ((iVar2 == 0) && (local_35 == (char)param_1[0x118])) {
      FUN_00410f20(local_20);
    }
    else {
      local_58 = local_20;
      local_50 = local_35;
      FUN_00af6730(param_1,local_28,local_30,local_34);
    }
  }
  FUN_00414560(&local_30,2);
  return;
}

