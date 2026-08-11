/* Ghidra address: 00aefde0 */
/* Ghidra symbol: FUN_00aefde0 */


longlong * FUN_00aefde0(longlong *param_1,char param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar2 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  FUN_00a76f80(local_res8,0,param_3,param_4);
  FUN_00652570(local_res8[0xe8],local_res8[0x26]);
  if (local_res8[0x51] == 0) {
    lVar1 = local_res8[0xe8];
    *(longlong **)(lVar1 + 0x290) = local_res8;
    *(code **)(lVar1 + 0x288) = FUN_00af2880;
  }
  else {
    lVar1 = local_res8[0xe8];
    *(longlong *)(lVar1 + 0x288) = local_res8[0x51];
    *(longlong *)(lVar1 + 0x290) = local_res8[0x52];
  }
  cVar3 = FUN_004113d0(param_3,&PTR_FUN_00ae9c00);
  if (cVar3 != '\0') {
    local_res8[0xed] = param_3;
  }
  cVar3 = FUN_004113d0(param_4,&DAT_00aea600);
  if (cVar3 != '\0') {
    (**(code **)(*local_res8 + 0x268))(local_res8,*(undefined1 *)(param_4 + 0x728));
    FUN_00414ad0(local_res8 + 0xf0,*(undefined8 *)(param_4 + 0x780));
    FUN_00414ad0(local_res8 + 0xf1,*(undefined8 *)(param_4 + 0x788));
    FUN_00414ad0(local_res8 + 0xf2,*(undefined8 *)(param_4 + 0x790));
    *(undefined1 *)(local_res8 + 0xf3) = *(undefined1 *)(param_4 + 0x798);
    *(undefined1 *)((longlong)local_res8 + 0x799) = *(undefined1 *)(param_4 + 0x799);
    FUN_00afea00(local_res8,*(undefined2 *)(param_4 + 0x79a));
    local_res8[0xf4] = *(longlong *)(param_4 + 0x7a0);
    local_res8[0xf5] = *(longlong *)(param_4 + 0x7a8);
    local_res8[0xf6] = *(longlong *)(param_4 + 0x7b0);
    local_res8[0xf7] = *(longlong *)(param_4 + 0x7b8);
    FUN_00afc210(local_res8,param_4 + 0x7c0);
    (**(code **)(*local_res8 + 0x300))(local_res8,param_4 + 0x558);
    local_res8[0xfa] = *(longlong *)(param_4 + 2000);
    local_res8[0xfb] = *(longlong *)(param_4 + 0x7d8);
    local_res8[0xfc] = *(longlong *)(param_4 + 0x7e0);
    local_res8[0xfd] = *(longlong *)(param_4 + 0x7e8);
    local_res8[0xfe] = *(longlong *)(param_4 + 0x7f0);
    local_res8[0xff] = *(longlong *)(param_4 + 0x7f8);
    local_res8[0x100] = *(longlong *)(param_4 + 0x800);
    local_res8[0x101] = *(longlong *)(param_4 + 0x808);
    local_res8[0x102] = *(longlong *)(param_4 + 0x810);
    local_res8[0x103] = *(longlong *)(param_4 + 0x818);
    local_res8[0x104] = *(longlong *)(param_4 + 0x820);
    local_res8[0x105] = *(longlong *)(param_4 + 0x828);
    local_res8[0x106] = *(longlong *)(param_4 + 0x830);
    local_res8[0x107] = *(longlong *)(param_4 + 0x838);
    local_res8[0x10a] = *(longlong *)(param_4 + 0x850);
    local_res8[0x10b] = *(longlong *)(param_4 + 0x858);
    local_res8[0x108] = *(longlong *)(param_4 + 0x840);
    local_res8[0x109] = *(longlong *)(param_4 + 0x848);
    local_res8[0x10c] = *(longlong *)(param_4 + 0x860);
    local_res8[0x10d] = *(longlong *)(param_4 + 0x868);
    local_res8[0x10e] = *(longlong *)(param_4 + 0x870);
    local_res8[0x10f] = *(longlong *)(param_4 + 0x878);
    local_res8[0x110] = *(longlong *)(param_4 + 0x880);
    local_res8[0x111] = *(longlong *)(param_4 + 0x888);
    local_res8[0x112] = *(longlong *)(param_4 + 0x890);
    local_res8[0x113] = *(longlong *)(param_4 + 0x898);
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

