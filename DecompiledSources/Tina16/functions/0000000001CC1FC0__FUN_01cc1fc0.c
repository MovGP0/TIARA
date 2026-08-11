/* Ghidra address: 01cc1fc0 */
/* Ghidra symbol: FUN_01cc1fc0 */


longlong FUN_01cc1fc0(longlong param_1,char param_2,longlong param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_30 = auStack_68;
  local_38 = 0;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar2 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  FUN_00416830(&local_38,param_3 + 0x20,0x105);
  local_48 = local_38;
  FUN_01cc1d20(local_res8,0,*(undefined1 *)(param_3 + 0x434),0);
  iVar4 = *(int *)(param_3 + 0x10);
  local_24 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar3 = FUN_01d347d0(param_3,local_24);
      FUN_01cc1f80(auStack_68,uVar3);
      local_24 = local_24 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  cVar1 = *(char *)(param_3 + 0x434);
  *(char *)(local_res8 + 0x434) = cVar1;
  if (cVar1 == '\n') {
    uVar3 = FUN_01cb1e80(&PTR_FUN_01cb1170,1,*(undefined8 *)(param_3 + 0x440));
    *(undefined8 *)(local_res8 + 0x440) = uVar3;
  }
  else {
    FUN_01cc28c0(param_3);
    FUN_004b8ba0(*(undefined8 *)(local_res8 + 0x438),*(undefined8 *)(param_3 + 0x438),0);
  }
  FUN_01cc37d0(param_3,local_20);
  FUN_01cc3760(local_res8,local_20[0]);
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

