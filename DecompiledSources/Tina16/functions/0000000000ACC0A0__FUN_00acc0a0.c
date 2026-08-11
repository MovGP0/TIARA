/* Ghidra address: 00acc0a0 */
/* Ghidra symbol: FUN_00acc0a0 */


longlong FUN_00acc0a0(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,longlong param_6)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong local_res8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_40;
  longlong local_38;
  undefined1 local_25;
  int local_24;
  undefined8 local_20;
  
  local_50 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_res8 = param_1;
  puVar2 = auStack_98;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_50;
  }
  local_50 = puVar2;
  local_78 = param_5;
  local_70 = param_6;
  FUN_00aca230(local_res8,0,param_3,param_4);
  *(undefined4 *)(local_res8 + 0xec) = *(undefined4 *)(param_6 + 0x70);
  *(undefined4 *)(local_res8 + 0x16c) = 5;
  *(undefined4 *)(local_res8 + 0x170) = 0x1e;
  *(undefined1 *)(local_res8 + 0x168) = 1;
  local_25 = 2;
  iVar8 = *(int *)(param_5 + 0x10);
  local_24 = 0;
  if (-1 < iVar8 + -1) {
    do {
      local_38 = FUN_004aeac0(param_5,local_24);
      cVar3 = *(char *)(local_38 + 8);
      if (cVar3 == '\x14') {
        *(undefined4 *)(local_res8 + 0x170) = *(undefined4 *)(local_38 + 0x18);
      }
      else if (cVar3 == 'E') {
        *(undefined4 *)(local_res8 + 0x16c) = *(undefined4 *)(local_38 + 0x18);
      }
      else if (cVar3 == '_') {
        FUN_0043e1a0(&local_58,*(undefined8 *)(local_38 + 0x28));
        iVar4 = FUN_00416db0(local_58,&DAT_00acc5fc);
        if (iVar4 == 0) {
          local_25 = 3;
          *(undefined1 *)(local_res8 + 0x168) = 0;
        }
        else {
          FUN_0043e1a0(&local_60,*(undefined8 *)(local_38 + 0x28));
          iVar4 = FUN_00416db0(local_60,L"hard");
          if (iVar4 == 0) {
            *(undefined1 *)(local_res8 + 0x168) = 2;
          }
        }
      }
      local_24 = local_24 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  local_20 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0);
  uVar7 = FUN_009eba10(&PTR_FUN_009eb0e0,1,local_20);
  *(undefined8 *)(local_res8 + 0x158) = uVar7;
  local_40 = *(longlong **)(local_res8 + 0x158);
  FUN_0064cb30(local_40,0xfffff060);
  cVar3 = FUN_00a554f0(param_6);
  if (cVar3 != '\0') {
    FUN_006804c0(local_40,0);
  }
  uVar7 = FUN_00a5b160(param_6);
  (**(code **)(*(longlong *)local_40[0x17] + 0x10))((longlong *)local_40[0x17],uVar7);
  FUN_00682ee0(local_40,local_25);
  if (*(byte *)(local_res8 + 0x168) < 8) {
    uVar5 = (int)CONCAT71((int7)((ulonglong)local_res8 >> 8),1) <<
            (*(byte *)(local_res8 + 0x168) & 0x1f);
    uVar6 = CONCAT31((int3)(uVar5 >> 8),(uVar5 & 6) != 0);
  }
  else {
    uVar6 = 0;
  }
  FUN_00682f00(local_40,uVar6);
  local_40[0x80] = *(longlong *)(local_res8 + 0xf8);
  local_40[0x7f] = (longlong)FUN_00a98b10;
  local_40[0x78] = local_res8;
  local_40[0x77] = (longlong)FUN_00a99b90;
  local_40[0x7a] = local_res8;
  local_40[0x79] = (longlong)FUN_00a99c40;
  local_40[0x40] = local_res8;
  local_40[0x3f] = (longlong)FUN_00a99e30;
  local_40[0x2e] = local_res8;
  local_40[0x2d] = (longlong)FUN_00a99800;
  (**(code **)(*local_40 + 0x128))(local_40,*(char *)(local_res8 + 0x110) == '\0');
  FUN_006807e0(local_40,*(undefined1 *)(local_res8 + 0x111));
  (**(code **)(**(longlong **)(local_res8 + 0x158) + 0x148))
            (*(longlong **)(local_res8 + 0x158),
             *(undefined1 *)(*(longlong *)(local_res8 + 0x18) + 0x90));
  (**(code **)(**(longlong **)(local_res8 + 0x158) + 0x130))
            (*(longlong **)(local_res8 + 0x158),local_20);
  plVar1 = *(longlong **)(*(longlong *)(local_res8 + 0x158) + 0x4e8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  if (*(longlong *)(local_res8 + 0x148) != 0) {
    FUN_009ec440(&local_68,*(undefined8 *)(local_res8 + 0x148));
    plVar1 = *(longlong **)(*(longlong *)(local_res8 + 0x158) + 0x4e8);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_68);
  }
  if (*(int *)(local_res8 + 0x154) != 0) {
    FUN_009ebd50(*(undefined8 *)(local_res8 + 0x158),*(int *)(local_res8 + 0x154));
  }
  FUN_00414560(&local_68,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

