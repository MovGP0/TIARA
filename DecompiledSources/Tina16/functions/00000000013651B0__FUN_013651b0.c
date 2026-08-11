/* Ghidra address: 013651b0 */
/* Ghidra symbol: FUN_013651b0 */


longlong *
FUN_013651b0(longlong *param_1,char param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5
            ,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
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
  FUN_01364e80(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 3) = param_4;
  *(undefined4 *)((longlong)local_res8 + 0x1c) = param_5;
  *(undefined1 *)(local_res8 + 4) = param_6;
  *(undefined1 *)((longlong)local_res8 + 0x21) = param_7;
  *(undefined1 *)((longlong)local_res8 + 0x22) = param_8;
  *(undefined1 *)((longlong)local_res8 + 0x24) = 0;
  lVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_res8[5] = lVar3;
  *(undefined1 *)((longlong)local_res8 + 0x23) = 1;
  cVar2 = (**(code **)(*local_res8 + 0x60))(local_res8,0x3f4e,200);
  if (cVar2 == '\0') {
    FUN_013662d0(local_res8);
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

