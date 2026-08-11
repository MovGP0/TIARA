/* Ghidra address: 00b2e440 */
/* Ghidra symbol: FUN_00b2e440 */


longlong FUN_00b2e440(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  *(undefined2 *)(local_res8 + 8) = 0;
  *(undefined1 *)(local_res8 + 10) = 0;
  *(undefined1 *)(local_res8 + 0xb) = 0;
  uVar3 = FUN_00b191b0(&DAT_00b18820,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar3;
  iVar5 = 0xe;
  local_28 = (undefined8 *)PTR_PTR_020046d0;
  do {
    FUN_00b193b0(*(undefined8 *)(local_res8 + 0x20),*local_28);
    local_28 = local_28 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_004153d0(&local_48,*PTR_DAT_020012a0,0);
  FUN_00b193b0(*(undefined8 *)(local_res8 + 0x20),local_48);
  uVar3 = FUN_00b191b0(&DAT_00b18820,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar3;
  iVar5 = 0xe;
  local_30 = (undefined8 *)PTR_PTR_020046d0;
  do {
    iVar2 = FUN_00415a60(*local_30,&LAB_00b2e72c);
    if (iVar2 != 0) {
      FUN_00b193b0(*(undefined8 *)(local_res8 + 0x28),*local_30);
    }
    local_30 = local_30 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_004153d0(&local_50,*PTR_DAT_020012a0,0);
  FUN_00b193b0(*(undefined8 *)(local_res8 + 0x28),local_50);
  uVar3 = FUN_00b1ae90(&DAT_00b1a180,1,7);
  *(undefined8 *)(local_res8 + 0x30) = uVar3;
  iVar5 = 0x4e;
  local_38 = (undefined8 *)PTR_PTR_02005938;
  do {
    FUN_00b1b070(*(undefined8 *)(local_res8 + 0x30),*local_38);
    local_38 = local_38 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  lVar4 = FUN_00b2d250(&DAT_00b2ca60,1);
  *(longlong *)(local_res8 + 0x18) = lVar4;
  *(longlong *)(lVar4 + 0x48) = local_res8;
  *(code **)(lVar4 + 0x40) = FUN_00b2e900;
  *(longlong *)(lVar4 + 0x58) = local_res8;
  *(code **)(lVar4 + 0x50) = FUN_00b2e7b0;
  *(undefined8 *)(local_res8 + 0x38) = param_3;
  FUN_00414590(&local_50,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

