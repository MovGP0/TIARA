/* Ghidra address: 01cc1910 */
/* Ghidra symbol: FUN_01cc1910 */


longlong FUN_01cc1910(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01cc04c0(local_res8,0,param_3);
  iVar3 = *(int *)(*(longlong *)(param_3 + 0x38) + 0x10);
  local_24 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_3 + 0x38),local_24);
      local_20 = FUN_01cc16d0(&PTR_FUN_01cb4260,1,uVar2);
      FUN_004ae7e0(*(undefined8 *)(local_res8 + 0x38),local_20);
      local_24 = local_24 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(local_res8 + 0x40) = *(undefined4 *)(param_3 + 0x40);
  FUN_00414ad0(local_res8 + 0x48,*(undefined8 *)(param_3 + 0x48));
  *(undefined1 *)(local_res8 + 0x50) = *(undefined1 *)(param_3 + 0x50);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

