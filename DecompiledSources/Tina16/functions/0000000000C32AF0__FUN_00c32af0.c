/* Ghidra address: 00c32af0 */
/* Ghidra symbol: FUN_00c32af0 */


longlong * FUN_00c32af0(longlong *param_1,char param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  FUN_00601d70(local_res8,0);
  lVar2 = FUN_00c2fc20(&LAB_00c16fd8,1,local_res8);
  local_res8[10] = lVar2;
  lVar2 = FUN_00c240b0(&LAB_00c13300,1,local_res8);
  local_res8[0xb] = lVar2;
  local_res8[0xc] = 0;
  *(undefined1 *)(local_res8 + 9) = DAT_01e9f532;
  *(undefined1 *)((longlong)local_res8 + 0x4a) = DAT_01e9f534;
  *(undefined1 *)((longlong)local_res8 + 0x49) = DAT_01e9f533;
  *(undefined1 *)(local_res8 + 0xd) = DAT_01e9f535;
  *(undefined4 *)((longlong)local_res8 + 0x6c) = DAT_01e9f538;
  *(undefined1 *)(local_res8 + 0x1d) = DAT_01e9f53c;
  *(undefined4 *)(local_res8 + 0x11) = DAT_01e9f540;
  *(undefined4 *)((longlong)local_res8 + 0x8c) = 0x1fffffff;
  *(undefined1 *)((longlong)local_res8 + 0x4b) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x4c) = 0;
  FUN_00c32d60(local_res8);
  (**(code **)(*local_res8 + 0x80))(local_res8,1);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

