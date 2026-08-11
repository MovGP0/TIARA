/* Ghidra address: 0064bb10 */
/* Ghidra symbol: FUN_0064bb10 */


longlong * FUN_0064bb10(longlong *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  bool local_22;
  bool local_21;
  wchar_t *local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_004d22d0(local_res8,0,param_3);
  local_res8[0x11] = (longlong)local_res8;
  local_res8[0x10] = *(longlong *)(*local_res8 + 0x150);
  *(undefined4 *)(local_res8 + 0x14) = 0x2000aa;
  lVar4 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  local_res8[0x17] = lVar4;
  *(longlong **)(lVar4 + 0x10) = local_res8;
  *(code **)(lVar4 + 8) = FUN_0064deb0;
  *(undefined1 *)((longlong)local_res8 + 0xb3) = 3;
  lVar4 = FUN_0064b270(&PTR_FUN_00639a60,1,local_res8);
  local_res8[0x1a] = lVar4;
  *(longlong **)(lVar4 + 0x28) = local_res8;
  *(code **)(lVar4 + 0x20) = FUN_0064f950;
  lVar4 = FUN_00665950(&PTR_FUN_00639e00,1,local_res8);
  local_res8[0x1b] = lVar4;
  *(longlong **)(lVar4 + 0x28) = local_res8;
  *(code **)(lVar4 + 0x20) = FUN_00652530;
  *(undefined4 *)(local_res8 + 0x19) = 0xff000005;
  *(undefined1 *)((longlong)local_res8 + 0xa9) = 1;
  *(undefined1 *)((longlong)local_res8 + 0xaa) = 1;
  *(undefined1 *)((longlong)local_res8 + 0xab) = 1;
  *(undefined1 *)((longlong)local_res8 + 0xac) = 1;
  *(undefined1 *)((longlong)local_res8 + 0xfe) = 1;
  *(undefined1 *)((longlong)local_res8 + 0xb2) = 1;
  *(undefined1 *)(local_res8 + 0x16) = 0;
  *(undefined2 *)((longlong)local_res8 + 0xe2) = 0xfff4;
  local_res8[0x25] = (longlong)&PTR_FUN_007f23a8;
  *(undefined1 *)(local_res8 + 0x53) = 1;
  local_res8[0x58] = 0;
  local_res8[0x56] = 0;
  *(undefined1 *)(local_res8 + 0x57) = 1;
  (**(code **)(*local_res8 + 0xb8))(local_res8);
  lVar4 = local_res8[0x26];
  *(undefined1 *)(lVar4 + 0x20) = 0x10;
  *(undefined1 *)(lVar4 + 0x21) = 0x10;
  *(undefined1 *)(lVar4 + 0x30) = 1;
  *(undefined2 *)(lVar4 + 0x39) = 1;
  *(undefined1 *)(local_res8 + 0x59) = 7;
  *(undefined1 *)((longlong)local_res8 + 0x2c9) = 0;
  if ((param_3 == 0) || (cVar2 = FUN_004113d0(param_3,&PTR_FUN_007f0370), cVar2 == '\0')) {
    local_22 = false;
  }
  else {
    local_20 = *(wchar_t **)(param_3 + 0x10);
    if (local_20 == L"frxpreviewForm") {
      local_21 = true;
    }
    else if (local_20 == (wchar_t *)0x0) {
      local_21 = false;
    }
    else {
      iVar3 = FUN_0043e420(local_20,L"frxpreviewForm");
      local_21 = iVar3 == 0;
    }
    local_22 = local_21 == false;
  }
  if (local_22 == false) {
    *(undefined4 *)((longlong)local_res8 + 0x2cc) = 0x60;
  }
  else {
    *(undefined4 *)((longlong)local_res8 + 0x2cc) = 0;
  }
  *(undefined4 *)(local_res8 + 0x61) = 0x3f800000;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

