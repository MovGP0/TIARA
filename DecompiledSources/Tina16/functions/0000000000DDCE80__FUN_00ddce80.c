/* Ghidra address: 00ddce80 */
/* Ghidra symbol: FUN_00ddce80 */


longlong * FUN_00ddce80(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00652880(local_res8,0,param_3);
  *(byte *)(local_res8 + 0xb) = *(byte *)(local_res8 + 0xb) | 2;
  (**(code **)(*local_res8 + 0x270))(local_res8);
  *(int *)(local_res8[0x92] + 100) = *(int *)(local_res8[0x92] + 100) + 1;
  if (0 < *(int *)(local_res8[0x92] + 0x40)) {
    lVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_res8[0x9f] = lVar3;
    FUN_004aef90(lVar3,*(undefined4 *)(local_res8[0x92] + 0x40));
    iVar6 = *(int *)(local_res8[0x9f] + 0x10);
    local_1c = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar4 = FUN_005fc570(&PTR_FUN_005f2d40,1);
        FUN_004aedb0(local_res8[0x9f],local_1c,uVar4);
        local_1c = local_1c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if (0 < *(int *)(local_res8[0x92] + 0x50)) {
    lVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_res8[0xa0] = lVar3;
    FUN_004aef90(lVar3,*(undefined4 *)(local_res8[0x92] + 0x50));
    iVar6 = *(int *)(local_res8[0xa0] + 0x10);
    local_1c = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar4 = FUN_00603960(&DAT_005f7500,1);
        FUN_004aedb0(local_res8[0xa0],local_1c,uVar4);
        lVar3 = FUN_004aeac0(local_res8[0xa0],local_1c);
        *(longlong **)(lVar3 + 0x28) = local_res8;
        *(code **)(lVar3 + 0x20) = FUN_00ddfb10;
        local_1c = local_1c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  lVar3 = FUN_00ddc630(&PTR_FUN_00dda7d0,1,local_res8);
  local_res8[0x94] = lVar3;
  FUN_00dddf30(local_res8);
  (**(code **)(*local_res8 + 0x278))(local_res8,local_res8[0x96]);
  uVar2 = (**(code **)(*(longlong *)local_res8[0x96] + 0xb0))
                    ((longlong *)local_res8[0x96],1,local_res8 + 0x9e);
  FUN_006245b0(uVar2);
  if (((*(uint *)(local_res8[0x92] + 0x60) & 2) == 0) &&
     (((*(uint *)(local_res8 + 0x9e) & 0x20000) != 0 ||
      ((*(uint *)(local_res8[0x92] + 0x60) & 1) != 0)))) {
    if (local_res8 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = local_res8 + 0xae;
    }
    uVar2 = (**(code **)(*(longlong *)local_res8[0x96] + 0x18))((longlong *)local_res8[0x96],plVar5)
    ;
    FUN_006245b0(uVar2);
  }
  uVar4 = FUN_0041b800(local_res8 + 0x97);
  uVar2 = (*(code *)**(undefined8 **)local_res8[0x96])
                    ((undefined8 *)local_res8[0x96],&DAT_00ddd240,uVar4);
  FUN_006245b0(uVar2);
  if ((*(uint *)(local_res8 + 0x9e) & 0x400) != 0) {
    FUN_0064dbe0(local_res8,0);
  }
  if ((*(uint *)(local_res8 + 0x9e) & 0x10000) == 0) {
    *(undefined4 *)(local_res8 + 0x14) = 0x1080;
  }
  else {
    *(undefined4 *)(local_res8 + 0x14) = 0x1081;
  }
  FUN_0065bce0(local_res8,(*(uint *)(local_res8 + 0x9e) & 0x6000) == 0);
  uVar2 = FUN_00de1370(local_res8);
  FUN_006245b0(uVar2);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

