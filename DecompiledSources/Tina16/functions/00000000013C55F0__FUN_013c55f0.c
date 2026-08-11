/* Ghidra address: 013c55f0 */
/* Ghidra symbol: FUN_013c55f0 */


char FUN_013c55f0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char local_62;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined1 local_4c [4];
  longlong local_48 [4];
  
  local_48[3] = 0;
  local_48[2] = 0;
  if (*(char *)(param_1 + 0x308) == '\0') {
    iVar7 = 1;
    *(undefined1 *)(param_1 + 0x278) = 0;
  }
  else {
    iVar7 = 2;
    *(undefined1 *)(param_1 + 0x278) = 1;
  }
  local_60 = 1;
  if (iVar7 != 0) {
    plVar5 = local_48;
    iVar6 = iVar7;
    do {
      if (local_60 == 1) {
        *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x318);
      }
      else {
        *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 800);
      }
      iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 8) + 0x10);
      local_5c = 0;
      if (-1 < iVar8 + -1) {
        do {
          lVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x280) + 8),local_5c);
          if (*(char *)(lVar2 + 0x18) != '\0') {
            FUN_013c16b0(lVar2,param_1 + 0x2b0);
          }
          local_5c = local_5c + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      FUN_013c4af0(param_1);
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_01695540(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x2b0));
      }
      local_62 = FUN_013c5240(param_1,*(undefined1 *)(param_1 + 0x309),param_2);
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x508) != '\0') {
        local_62 = '\x01';
      }
      if (local_62 != '\0') {
        FUN_017e3010(*(longlong *)(param_1 + 8),param_1 + 0x288);
        FUN_00410f20(*(undefined8 *)(param_1 + 8));
        *(undefined8 *)(param_1 + 8) = 0;
        FUN_00410f20(*(undefined8 *)(param_1 + 0x2b0));
        goto LAB_013c5a6f;
      }
      if (iVar7 == 2) {
        lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
        *plVar5 = lVar2;
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x8d0) + 0x10);
        local_5c = 0;
        if (-1 < iVar8 + -1) {
          do {
            uVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x8d0),local_5c);
            uVar3 = FUN_017e1810(&DAT_017df5e8,1,uVar3);
            FUN_004ae7e0(*plVar5,uVar3);
            local_5c = local_5c + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      local_60 = local_60 + 1;
      plVar5 = plVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (iVar7 == 2) {
    FUN_013c1650(local_48 + 2,*(undefined1 *)(param_1 + 0x308),*(undefined8 *)(param_1 + 0x310));
    FUN_017e32e0(*(undefined8 *)(param_1 + 8),*(undefined8 *)PTR_DAT_02004fb8);
    uVar3 = FUN_017e3300(*(undefined8 *)(param_1 + 8));
    cVar1 = FUN_013c0c30(uVar3,local_48[2],local_4c,&local_58);
    if (cVar1 == '\0') {
      lVar2 = FUN_017e3300(*(undefined8 *)(param_1 + 8));
      if (lVar2 != 0) {
        uVar3 = FUN_017e3300(*(undefined8 *)(param_1 + 8));
        FUN_01cc6510(uVar3);
      }
      lVar2 = FUN_017e3300(*(undefined8 *)(param_1 + 8));
      lVar2 = *(longlong *)(lVar2 + 8);
      *(undefined1 *)(lVar2 + 0x4464) = 0;
      uVar3 = FUN_017e3300(*(undefined8 *)(param_1 + 8));
      FUN_01cc6510(uVar3);
      uVar3 = FUN_01cc2930(lVar2,local_48[2],3,1,0,0,7,0);
      *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x520) = uVar3;
    }
    else {
      uVar3 = FUN_017e3300(*(undefined8 *)(param_1 + 8));
      FUN_01cc6430(uVar3,local_58,param_1 + 0x298,param_1 + 0x2a8);
      if (*(int *)(param_1 + 0x290) == 0) {
        *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x298);
        *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x2a8);
      }
      *(undefined4 *)(param_1 + 0x290) = 1;
    }
    iVar7 = *(int *)(local_48[0] + 0x10);
    local_60 = 0;
    if (-1 < iVar7 + -1) {
      do {
        lVar2 = FUN_004aeac0(local_48[0],local_60);
        lVar4 = FUN_004aeac0(local_48[1],local_60);
        uVar3 = FUN_017e3300(*(undefined8 *)(param_1 + 8));
        FUN_01cc47e0(uVar3,*(undefined8 *)(lVar2 + 8));
        uVar3 = FUN_017e3300(*(undefined8 *)(param_1 + 8));
        FUN_01cc4e50(uVar3,0,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar4 + 0x10));
        local_60 = local_60 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_00410f20(local_48[0]);
    FUN_00410f20(local_48[1]);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x2b0));
LAB_013c5a6f:
  FUN_00414560(local_48 + 2,2);
  return local_62;
}

