/* Ghidra address: 017bbfa0 */
/* Ghidra symbol: FUN_017bbfa0 */


longlong FUN_017bbfa0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  uint local_1c;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_48 = param_5;
  FUN_017bb190(local_res8,0,param_3,param_4);
  if (*(longlong *)(local_res8 + 0x18) != 0) {
    iVar6 = *(int *)(*(longlong *)(local_res8 + 0x18) + 0x10);
    local_1c = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar5 = (ulonglong)local_1c;
        uVar3 = FUN_004aeac0(*(undefined8 *)(local_res8 + 0x18),uVar5);
        bVar2 = FUN_0198a580(uVar3);
        if (bVar2 < 0x10) {
          bVar7 = ((int)CONCAT62((int6)(uVar5 >> 0x10),1) << (bVar2 & 0x1f) & 0x220U) != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          FUN_004aedb0(*(undefined8 *)(local_res8 + 0x18),local_1c,0);
        }
        local_1c = local_1c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_004aee80(*(undefined8 *)(local_res8 + 0x18));
    FUN_004aef40(*(longlong *)(local_res8 + 0x18),
                 *(undefined4 *)(*(longlong *)(local_res8 + 0x18) + 0x10));
  }
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar3;
  FUN_004aef40(uVar3,*(undefined4 *)(*(longlong *)(local_res8 + 0x18) + 0x10));
  iVar6 = *(int *)(*(longlong *)(local_res8 + 0x18) + 0x10);
  local_1c = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(local_res8 + 0x18),local_1c);
      uVar3 = (**(code **)(*plVar4 + 0x170))(plVar4,5);
      FUN_004ae7e0(*(undefined8 *)(local_res8 + 0x20),uVar3);
      local_1c = local_1c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar3;
  FUN_004aef40(uVar3,*(undefined4 *)(*(longlong *)(local_res8 + 0x18) + 0x10));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

