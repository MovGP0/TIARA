/* Ghidra address: 00d04af0 */
/* Ghidra symbol: FUN_00d04af0 */


void FUN_00d04af0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  int local_74;
  longlong local_70;
  int local_64;
  longlong local_60;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  char local_39;
  longlong *local_38;
  char local_29;
  longlong local_28;
  longlong local_20;
  
  local_80 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_48 = 0;
  local_a8 = *(undefined8 *)(param_1[0x41] + 0x20);
  FUN_00416cd0(&local_48,3,*(undefined8 *)(param_1[0x41] + 0x30),&DAT_00d0531c);
  local_39 = *(char *)(param_2 + 0x160);
  cVar2 = FUN_00d021c0(param_1);
  *(char *)(param_2 + 0x160) = cVar2;
  if (cVar2 == local_39) {
    if (((*(char *)(param_2 + 0x160) == '\x03') &&
        (cVar2 = FUN_00879070(*(undefined8 *)(param_2 + 0x168),local_48), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*param_1 + 0xf0))(param_1), cVar2 != '\0')) {
      FUN_00cbdf10(param_1);
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar2 != '\0') {
      FUN_00cbdf10(param_1);
    }
  }
  FUN_00414ad0(param_2 + 0x168,local_48);
  local_29 = '\0';
  cVar2 = *(char *)(param_2 + 0x160);
  if (cVar2 == '\0') {
    if ((char)param_1[0x3f] == '\0') {
      local_50 = *(longlong *)(param_2 + 0x28);
      local_54 = 0;
      if (local_50 != 0) {
        local_54 = *(int *)(local_50 + -4);
      }
      if (local_54 == 0) {
        FUN_00414ad0(param_2 + 0x28,L"keep-alive");
      }
    }
    goto LAB_00d04dd1;
  }
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      FUN_00cc5380(param_1[0x41],&local_88);
      FUN_00414ad0(param_2 + 0x148,local_88);
      if ((char)param_1[0x3f] == '\0') {
        local_60 = *(longlong *)(param_2 + 0x28);
        local_64 = 0;
        if (local_60 != 0) {
          local_64 = *(int *)(local_60 + -4);
        }
        if (local_64 == 0) {
          FUN_00414ad0(param_2 + 0x118,L"keep-alive");
        }
      }
      if ((*(ushort *)((longlong)param_1 + 0x205) & 8) != 0) {
        cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
        local_29 = cVar2 == '\0';
      }
      goto LAB_00d04dd1;
    }
    if (cVar2 != '\x03') goto LAB_00d04dd1;
  }
  FUN_00414480(param_2 + 0x28);
  if (*(char *)(param_2 + 0x160) == '\x03') {
    cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    local_29 = cVar2 == '\0';
  }
LAB_00d04dd1:
  local_38 = (longlong *)param_1[0x3b];
  if ((local_38 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*local_38 + 0x90))(local_38), cVar2 != '\0')) {
    iVar3 = (**(code **)PTR_PTR_020018b0)(L"deflate",*(undefined8 *)(param_2 + 0xd0));
    if (iVar3 == 0) {
      if (*(longlong *)(param_2 + 0xd0) == 0) {
        FUN_00414ad0(param_2 + 0xd0,L"deflate");
      }
      else {
        FUN_00416ad0(param_2 + 0xd0,L", deflate");
      }
    }
    iVar3 = (**(code **)PTR_PTR_020018b0)(L"gzip",*(undefined8 *)(param_2 + 0xd0));
    if (iVar3 == 0) {
      if (*(longlong *)(param_2 + 0xd0) == 0) {
        FUN_00414ad0(param_2 + 0xd0,L"gzip");
      }
      else {
        FUN_00416ad0(param_2 + 0xd0,L", gzip");
      }
    }
  }
  if ((*(longlong *)(param_2 + 0xd0) != 0) &&
     (iVar3 = (**(code **)PTR_PTR_020018b0)(L"identity",*(undefined8 *)(param_2 + 0xd0)), iVar3 == 0
     )) {
    FUN_00416ad0(param_2 + 0xd0,L", identity");
  }
  if (local_29 == '\0') {
    FUN_00d04780(param_1,param_2,param_3);
  }
  else {
    local_28 = (**(code **)(*param_1 + 0x178))(param_1);
    FUN_00414ad0(*(longlong *)(local_28 + 0x10) + 0x100,*(undefined8 *)(param_2 + 0x100));
    FUN_00414ad0(*(longlong *)(local_28 + 0x10) + 0x110,*(undefined8 *)(param_2 + 0x110));
    FUN_00414ad0(*(longlong *)(local_28 + 0x10) + 0xa8,L"no-cache");
    FUN_00414ad0(*(longlong *)(local_28 + 0x10) + 0x148,*(undefined8 *)(param_2 + 0x168));
    FUN_00414ad0(*(longlong *)(local_28 + 0x10) + 0x150,L"CONNECT");
    FUN_00414ad0(*(longlong *)(local_28 + 0x10) + 0x118,L"keep-alive");
    *(undefined1 *)(*(longlong *)(local_28 + 0x10) + 0x160) = *(undefined1 *)(param_2 + 0x160);
    while( true ) {
      FUN_00d04780(param_1,*(undefined8 *)(local_28 + 0x10),*(undefined8 *)(local_28 + 0x18));
      FUN_00d06a20(local_28,0);
      FUN_00d07930(param_1,&local_90);
      FUN_00d06720(*(undefined8 *)(local_28 + 0x18),local_90);
      local_70 = *(longlong *)(*(longlong *)(local_28 + 0x18) + 0x108);
      local_74 = 0;
      if (local_70 != 0) {
        local_74 = *(int *)(local_70 + -4);
      }
      if (local_74 == 0) {
        FUN_00d06720(*(longlong *)(local_28 + 0x18),L"HTTP/1.0 200 OK");
        FUN_00414ad0(*(longlong *)(local_28 + 0x18) + 0x28,L"close");
      }
      else {
        FUN_00d06d70(local_28,(int)param_1[0x3d]);
        FUN_00d05490(param_1,*(undefined8 *)(local_28 + 0x10),*(undefined8 *)(local_28 + 0x18));
      }
      iVar3 = FUN_00d065e0(*(undefined8 *)(local_28 + 0x18));
      if (iVar3 / 100 == 2) break;
      FUN_00d07320(local_28,&local_90,0xffffffff);
    }
    if ((*(char *)(param_2 + 0x160) == '\x03') &&
       (cVar2 = FUN_004113d0(param_1[0x20],&PTR_FUN_00cc2da8), cVar2 != '\0')) {
      (**(code **)(*(longlong *)param_1[0x20] + 0x210))((longlong *)param_1[0x20],0);
    }
    lVar1 = local_28;
    local_20 = local_28;
    local_28 = 0;
    FUN_00410f20(lVar1);
  }
  FUN_00d06a20(param_1[0x42],param_1[0x41]);
  if (*(longlong *)(param_2 + 0x158) != 0) {
    (**(code **)(*(longlong *)param_1[0x20] + 0x168))
              ((longlong *)param_1[0x20],*(longlong *)(param_2 + 0x158),0,0);
  }
  FUN_00414560(&local_90,2);
  FUN_00414480(&local_48);
  return;
}

