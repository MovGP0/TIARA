/* Ghidra address: 00ace400 */
/* Ghidra symbol: FUN_00ace400 */


longlong FUN_00ace400(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_48 = param_5;
  local_40 = param_6;
  FUN_00ac9f40(local_res8,0,param_3,param_4);
  iVar2 = FUN_00416db0(*(undefined8 *)(local_res8 + 0x140),L"submit");
  if (iVar2 == 0) {
    *(undefined1 *)(local_res8 + 0x150) = 0;
    if (*(longlong *)(local_res8 + 0xe0) == 0) {
      FUN_00ac1910(local_res8,L"Submit");
    }
  }
  else {
    iVar2 = FUN_00416db0(*(undefined8 *)(local_res8 + 0x140),L"reset");
    if (iVar2 == 0) {
      *(undefined1 *)(local_res8 + 0x150) = 1;
      if (*(longlong *)(local_res8 + 0xe0) == 0) {
        FUN_00ac1910(local_res8,L"Reset");
      }
    }
    else {
      iVar2 = FUN_00416db0(*(undefined8 *)(local_res8 + 0x140),L"file");
      if (iVar2 == 0) {
        *(undefined1 *)(local_res8 + 0x150) = 3;
        FUN_00ac1910(local_res8,0);
        FUN_00414480(local_res8 + 200);
        FUN_00414480(local_res8 + 0xd0);
      }
      else {
        *(undefined1 *)(local_res8 + 0x150) = 2;
        if (*(longlong *)(local_res8 + 0xe0) == 0) {
          FUN_00ac1910(local_res8,L"Button");
        }
      }
    }
  }
  local_20 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0);
  uVar3 = FUN_0082ae80(&PTR_FUN_008239c0,1,local_20);
  *(undefined8 *)(local_res8 + 0x148) = uVar3;
  local_28 = *(longlong **)(local_res8 + 0x148);
  FUN_0064cb30(local_28,0xfffff060);
  uVar3 = FUN_00a5b160(param_6);
  (**(code **)(*(longlong *)local_28[0x17] + 0x10))((longlong *)local_28[0x17],uVar3);
  local_28[0x40] = local_res8;
  local_28[0x3f] = (longlong)FUN_00acedf0;
  if (*(char *)(local_res8 + 0x150) == '\x03') {
    FUN_0064de00(local_28,L"Browse...");
  }
  else {
    FUN_0064de00(local_28,*(undefined8 *)(local_res8 + 0xe0));
  }
  local_28[0x78] = local_res8;
  local_28[0x77] = (longlong)FUN_00a99b90;
  local_28[0x7a] = local_res8;
  local_28[0x79] = (longlong)FUN_00a99c40;
  local_28[0x2e] = local_res8;
  local_28[0x2d] = (longlong)FUN_00a99800;
  (**(code **)(*local_28 + 0x128))(local_28,*(char *)(local_res8 + 0x110) == '\0');
  (**(code **)(*local_28 + 0x148))
            (local_28,*(undefined1 *)(*(longlong *)(local_res8 + 0x18) + 0x90));
  (**(code **)(**(longlong **)(local_res8 + 0x148) + 0x130))
            (*(longlong **)(local_res8 + 0x148),local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

