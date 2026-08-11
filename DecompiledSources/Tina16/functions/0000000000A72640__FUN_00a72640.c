/* Ghidra address: 00a72640 */
/* Ghidra symbol: FUN_00a72640 */


undefined8 FUN_00a72640(undefined8 param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00610ca0(local_res8,0);
  if (param_3 != 0) {
    iVar3 = *(int *)(param_3 + 0x10);
    local_1c = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar2 = FUN_00a72910(param_3,local_1c);
        local_28 = FUN_00a72500(&DAT_00a68e68,1,uVar2);
        FUN_004ae7e0(local_res8,local_28);
        local_1c = local_1c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

