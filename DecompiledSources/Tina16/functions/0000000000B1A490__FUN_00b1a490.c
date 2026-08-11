/* Ghidra address: 00b1a490 */
/* Ghidra symbol: FUN_00b1a490 */


longlong FUN_00b1a490(longlong param_1,char param_2,undefined4 param_3,longlong *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_3c;
  longlong local_38;
  longlong lStack_30;
  
  local_50 = auStack_78;
  local_38 = *param_4;
  lStack_30 = param_4[1];
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  *(undefined4 *)(local_res8 + 0x10) = param_3;
  *(undefined1 *)(local_res8 + 0x28) = 0;
  if (*(int *)(local_res8 + 0x10) == 0) {
    FUN_00b1a6f0(local_res8,1);
  }
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  FUN_004aef40(uVar2,*(undefined4 *)(local_res8 + 0x10));
  iVar3 = *(int *)(local_res8 + 0x10);
  local_3c = 0;
  do {
    FUN_004ae7e0(*(undefined8 *)(local_res8 + 8),0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (local_38 != 0) {
    *(longlong *)(local_res8 + 0x18) = local_38;
    *(longlong *)(local_res8 + 0x20) = lStack_30;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

