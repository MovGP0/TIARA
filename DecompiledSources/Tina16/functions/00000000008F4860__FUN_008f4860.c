/* Ghidra address: 008f4860 */
/* Ghidra symbol: FUN_008f4860 */


longlong *
FUN_008f4860(longlong *param_1,char param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
            ,longlong param_6,longlong param_7,longlong param_8,longlong param_9,longlong param_10)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  local_res8[1] = 0;
  local_res8[9] = 0;
  local_res8[10] = param_6;
  local_res8[0xb] = param_7;
  local_res8[0xc] = param_8;
  *(undefined4 *)(local_res8 + 0xd) = 0x98;
  local_res8[0xe] = param_10;
  *(undefined4 *)(local_res8 + 0xf) = 0;
  local_res8[0x10] = param_9;
  local_res8[0x1f] = 0;
  (**(code **)(*local_res8 + 8))(local_res8,&local_28);
  local_48 = param_5;
  local_40 = local_28;
  lVar2 = FUN_008f3ce0(&PTR_FUN_008f2d58,1,param_3,param_4);
  local_res8[9] = lVar2;
  (**(code **)(**(longlong **)(lVar2 + 0x40) + 8))(*(longlong **)(lVar2 + 0x40),1);
  local_30 = local_res8;
  local_38 = *(undefined8 *)(*local_res8 + 0x10);
  FUN_008e6ba0(*(undefined8 *)(local_res8[9] + 0x40),&local_38);
  (**(code **)(*local_res8 + 0x30))(local_res8);
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

