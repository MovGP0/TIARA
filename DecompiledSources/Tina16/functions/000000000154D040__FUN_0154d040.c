/* Ghidra address: 0154d040 */
/* Ghidra symbol: FUN_0154d040 */


undefined1 FUN_0154d040(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_59;
  longlong *local_58;
  undefined1 local_40 [12];
  undefined1 local_34 [4];
  undefined8 local_30;
  
  local_30 = 0;
  if (*(char *)(param_1 + 0x94f) != '\0') {
    local_59 = FUN_015f22e0(param_2);
    goto LAB_0154d2d8;
  }
  local_59 = 0;
  cVar2 = FUN_0198a580(param_2);
  if (cVar2 == '\x04') {
    local_58 = param_2;
  }
  uVar3 = (**(code **)(*local_58 + 0xf8))(local_58);
  cVar2 = FUN_0154b530(uVar3,*(undefined1 *)(param_1 + 0x958));
  if (cVar2 == '\0') goto LAB_0154d2d8;
  cVar2 = FUN_01d3d600(uVar3);
  if (cVar2 != '\0') {
    local_59 = 0;
    iVar4 = (**(code **)(*local_58 + 0x1c8))();
    bVar1 = false;
    iVar7 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar5 = (**(code **)(*local_58 + 0x210))(local_58,iVar7);
        if (*(char *)(param_1 + 0x958) != '\0') {
          if (((bVar1) ||
              (cVar2 = FUN_00e147f0(*(undefined8 *)(param_1 + 0x9c8),uVar5), cVar2 != '\0')) ||
             (cVar2 = FUN_00e14cc0(*(undefined8 *)(param_1 + 0x9c8),uVar5,1,local_40,local_34,0),
             cVar2 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) break;
        }
        local_59 = 1;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    goto LAB_0154d2d8;
  }
  uVar6 = (uint)uVar3;
  if (uVar6 < 0x3ff) {
    if (uVar6 != 0x3fe) {
      if (uVar6 == 0xe) goto LAB_0154d20e;
      if ((uVar6 != 0x91) && (uVar6 != 0x3ec)) goto LAB_0154d2d8;
    }
    if (*(char *)(param_1 + 0x958) != '\0') {
      local_59 = 0;
      uVar5 = (**(code **)(*param_2 + 0x210))(param_2,1);
      cVar2 = FUN_00e14cc0(*(undefined8 *)(param_1 + 0x9c8),uVar5,1,local_40,local_34,0);
      if (cVar2 == '\0') goto LAB_0154d2d8;
    }
    local_59 = 1;
  }
  else {
    if (((uVar6 != 0x45f) && (1 < uVar6 - 0x4b0)) && (1 < uVar6 - 0x2901)) goto LAB_0154d2d8;
LAB_0154d20e:
    if (*(char *)(param_1 + 0x958) != '\0') {
      local_59 = 0;
      uVar5 = (**(code **)(*param_2 + 0x210))(param_2,0);
      cVar2 = FUN_00e14cc0(*(undefined8 *)(param_1 + 0x9c8),uVar5,1,local_40,local_34,0);
      if (cVar2 == '\0') goto LAB_0154d2d8;
    }
    local_59 = 1;
  }
LAB_0154d2d8:
  FUN_00414480(&local_30);
  return local_59;
}

