/* Ghidra address: 0069fde0 */
/* Ghidra symbol: FUN_0069fde0 */


undefined8 FUN_0069fde0(undefined8 param_1,char param_2,longlong *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 local_res8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_40 [16];
  undefined1 *local_30;
  int local_20;
  int local_1c;
  
  local_30 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00649430(local_res8,0,param_3);
  cVar2 = (**(code **)(*param_3 + 0xf8))(param_3);
  if (cVar2 == '\0') {
    thunk_FUN_03cc0d62(&local_20);
    uVar3 = FUN_0064dcf0(param_3);
    local_58 = FUN_0064dcd0(param_3);
    FUN_00423b80(local_40,local_20 + -10,local_1c + -10,uVar3);
    FUN_0064f700(param_3,local_40);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

