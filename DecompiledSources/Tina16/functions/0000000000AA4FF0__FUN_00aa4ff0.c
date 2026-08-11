/* Ghidra address: 00aa4ff0 */
/* Ghidra symbol: FUN_00aa4ff0 */


longlong FUN_00aa4ff0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  longlong local_res8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_50;
  uint local_3c;
  longlong local_38;
  undefined1 local_30 [32];
  
  local_50 = auStack_88;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  local_68 = param_5;
  FUN_00a9c430(local_res8,0,param_3,param_4);
  *(undefined1 *)(local_res8 + 0x4c) = 0;
  FUN_00a53850(param_5,0,0,local_30);
  cVar2 = FUN_00a53050(param_5,&local_38);
  if ((cVar2 != '\0') && (local_38 != 0)) {
    FUN_00aa73f0(*(undefined8 *)(local_res8 + 0x18),local_38,local_30);
  }
  local_3c = FUN_00a55160(param_5);
  if (local_3c != 0x1fffffff) {
    FUN_00aa73c0(*(undefined8 *)(local_res8 + 0x18),local_3c | *(uint *)PTR_DAT_02005078);
  }
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

