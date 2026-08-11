/* Ghidra address: 00a395e0 */
/* Ghidra symbol: FUN_00a395e0 */


longlong *
FUN_00a395e0(longlong *param_1,char param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *local_res8;
  uint local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  uVar3 = 0;
  (**(code **)(*local_res8 + 0xa0))(local_res8,0);
  if (param_3 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)param_3 & 0x1f) & 0x5dU) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if (param_4 < 0x20) {
      bVar4 = (1 << ((byte)param_4 & 0x1f) & 0x10116U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (((bVar4) && ((param_3 != 3 || (param_4 != 0x10)))) && ((param_3 != 2 || (7 < param_4)))) {
      local_res20 = param_4;
      if (param_4 == 2) {
        local_res20 = 4;
      }
      FUN_00a3c2b0(local_res8);
      *(undefined1 *)(local_res8 + 0x2d) = 1;
      FUN_00a33ac0(local_res8[0x2c],&PTR_FUN_00a30850);
      local_20 = FUN_00a33ac0(local_res8[0x2c],&PTR_FUN_00a30a98);
      *(byte *)(local_20 + 0x491) = (byte)param_3;
      *(byte *)(local_20 + 0x490) = (byte)local_res20;
      *(undefined4 *)(local_20 + 0x488) = param_5;
      *(undefined4 *)(local_20 + 0x48c) = param_6;
      FUN_00a35400(local_20);
      if (*(char *)(local_20 + 0x40) != '\0') {
        lVar2 = FUN_00a33ac0(local_res8[0x2c],&PTR_FUN_00a31730);
        *(int *)(lVar2 + 0x28) = 1 << ((byte)local_res20 & 0x1f);
      }
      FUN_00a33ac0(local_res8[0x2c],&PTR_FUN_00a31db8);
      *(undefined1 *)(local_res8 + 0x2d) = 0;
      goto LAB_00a397bf;
    }
  }
  FUN_0041ddd0(&local_38,PTR_PTR_02001770);
  FUN_00a39bd0(local_res8,&PTR_FUN_00a2e700,local_38);
LAB_00a397bf:
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

