/* Ghidra address: 0083ead0 */
/* Ghidra symbol: FUN_0083ead0 */


longlong * FUN_0083ead0(longlong *param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  longlong *local_res8;
  undefined1 auStack_68 [32];
  int local_48;
  undefined1 *local_30;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar2 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  FUN_00660290(local_res8,0,param_3);
  if (*PTR_DAT_02003210 == '\0') {
    *(undefined4 *)(local_res8 + 0x14) = 0x2a00d2;
  }
  else {
    *(undefined4 *)(local_res8 + 0x14) = 0x2a00c2;
  }
  *(undefined1 *)((longlong)local_res8 + 0x4a1) = 1;
  *(undefined4 *)((longlong)local_res8 + 0x4a4) = 5;
  *(undefined4 *)(local_res8 + 0x9c) = 5;
  *(undefined4 *)((longlong)local_res8 + 0x4bc) = 1;
  *(undefined4 *)(local_res8 + 0x98) = 1;
  *(undefined4 *)(local_res8 + 0x9a) = 1;
  *(undefined4 *)((longlong)local_res8 + 0x4d4) = 0x1f;
  *(undefined4 *)((longlong)local_res8 + 0x552) = 0xc0;
  *(undefined4 *)((longlong)local_res8 + 0x4c4) = 0xff00000f;
  *(undefined1 *)((longlong)local_res8 + 0x4e4) = 3;
  *(undefined1 *)(local_res8 + 0x94) = 1;
  *(undefined4 *)(local_res8 + 0x96) = 0x40;
  *(undefined4 *)((longlong)local_res8 + 0x4b4) = 0x18;
  *(undefined1 *)((longlong)local_res8 + 0x524) = 1;
  *(undefined1 *)(local_res8 + 0x97) = 1;
  uVar3 = FUN_00635930(&PTR_PTR_00f0f0f0,0xffffffe7);
  *(undefined4 *)(local_res8 + 0x99) = uVar3;
  *(undefined4 *)((longlong)local_res8 + 0x4cc) = 0xffffff;
  *(undefined1 *)((longlong)local_res8 + 0x551) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x525) = 0;
  FUN_0064e030(local_res8,0xff000005);
  FUN_0064e0c0(local_res8,0);
  FUN_0065bce0(local_res8,1);
  local_48 = (int)local_res8[0x9c] * *(int *)((longlong)local_res8 + 0x4b4);
  (**(code **)(*local_res8 + 400))
            (local_res8,(int)local_res8[0x12],*(undefined4 *)((longlong)local_res8 + 0x94),
             *(int *)((longlong)local_res8 + 0x4a4) * (int)local_res8[0x96]);
  *(undefined8 *)((longlong)local_res8 + 0x564) = DAT_01e19060;
  *(undefined8 *)((longlong)local_res8 + 0x56c) = DAT_01e19068;
  *(undefined1 *)(local_res8 + 0xac) = 0;
  lVar1 = local_res8[0x26];
  *(undefined1 *)(lVar1 + 0x20) = 0x12;
  *(undefined1 *)(lVar1 + 0x21) = 0x1f;
  FUN_00844190(local_res8);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

