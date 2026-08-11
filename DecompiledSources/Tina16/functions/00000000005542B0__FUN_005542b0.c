/* Ghidra address: 005542b0 */
/* Ghidra symbol: FUN_005542b0 */


longlong FUN_005542b0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     longlong *param_5)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_38;
  undefined1 *local_30;
  uint local_1c;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_48 = param_5;
  FUN_00546280(local_res8,0,param_3,param_4);
  lVar3 = FUN_00547190(local_res8);
  *param_5 = lVar3 + 1;
  local_1c = FUN_0053c520(param_5);
  local_1c = local_1c & 0xff;
  if (local_1c != 0) {
    do {
      *param_5 = *param_5 + 1;
      lVar3 = FUN_0053c6c0(*param_5);
      *param_5 = lVar3;
      lVar3 = FUN_0053c6c0(*param_5);
      *param_5 = lVar3;
      local_1c = local_1c - 1;
    } while (0 < (int)local_1c);
  }
  cVar2 = FUN_00554980(local_res8);
  if (cVar2 == '\x01') {
    lVar3 = FUN_0053c6c0(*param_5);
    *param_5 = lVar3;
    *param_5 = *param_5 + 8;
  }
  lVar3 = FUN_00547190(local_res8);
  *param_5 = *param_5 + (ulonglong)((uint)*(byte *)(lVar3 + 1) * 8 + 1);
  if (*(longlong *)*param_5 != 0) {
    uVar4 = FUN_00546050(*(undefined8 *)(local_res8 + 0x18),&LAB_00551d28,local_res8,
                         *(longlong *)*param_5);
    *(undefined8 *)(local_res8 + 0x30) = uVar4;
  }
  *param_5 = *param_5 + 8;
  FUN_00545c40(&local_38,param_5);
  FUN_0041b840(local_res8 + 0x28,local_38);
  FUN_0041b800(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

