/* Ghidra address: 00c5f290 */
/* Ghidra symbol: FUN_00c5f290 */


longlong *
FUN_00c5f290(longlong *param_1,char param_2,undefined8 param_3,longlong param_4,undefined4 param_5,
            int param_6,int param_7,undefined1 param_8,undefined1 param_9,undefined1 param_10)

{
  undefined1 *puVar1;
  char cVar2;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00c5ef40(local_res8,0,param_3);
  if ((param_6 != -1) && (*(char *)(*(longlong *)(local_res8[2] + 0x990) + 0x328) != '\0')) {
    param_6 = ((param_6 + 2) / 4) * 4;
    param_7 = ((param_7 + 2) / 4) * 4;
  }
  *(int *)(local_res8 + 4) = param_6;
  *(int *)((longlong)local_res8 + 0x24) = param_7;
  *(undefined1 *)(local_res8 + 5) = param_8;
  *(undefined1 *)((longlong)local_res8 + 0x29) = param_9;
  *(undefined1 *)((longlong)local_res8 + 0x2a) = param_10;
  *(undefined1 *)((longlong)local_res8 + 0x2c) = 0;
  local_res8[6] = param_4;
  *(undefined4 *)(local_res8 + 7) = param_5;
  if (1 < *(int *)(local_res8[6] + 0x10)) {
    *(undefined4 *)(local_res8 + 7) = 0xffffffff;
  }
  *(undefined1 *)((longlong)local_res8 + 0x2b) = 1;
  cVar2 = (**(code **)(*local_res8 + 0x60))(local_res8,200);
  if (cVar2 == '\0') {
    FUN_00c5f500(local_res8);
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

