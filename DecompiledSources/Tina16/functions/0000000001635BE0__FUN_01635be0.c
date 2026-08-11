/* Ghidra address: 01635be0 */
/* Ghidra symbol: FUN_01635be0 */


void FUN_01635be0(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  int local_50;
  int local_4c;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  
  local_38 = 0;
  local_40 = 0;
  *(bool *)(param_1 + 0x688) = 0 < *(int *)(*(longlong *)(param_1 + 0x628) + 0x10);
  FUN_0161bb00(*(undefined8 *)(param_1 + 0xb0),param_2,param_1);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  local_4c = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),local_4c);
      cVar2 = *(char *)(lVar5 + 8);
      if ((((cVar2 == '2') || (cVar2 == '4')) || (cVar2 == '3')) || (cVar2 == '1')) {
        FUN_016354b0(param_1,lVar5,param_2);
      }
      local_4c = local_4c + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (*(int *)(param_1 + 0x5c8) != 2) {
    local_30 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x60);
    local_2c = local_30 + 1;
    *(int *)(param_1 + 0x5f0) = local_30;
    *(int *)(*(longlong *)(param_2 + 0x13988) + 0x5f0) = local_30;
    if (*(int *)(param_1 + 0x5c8) != 2) {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x13980) + 0x5ec);
      *piVar1 = *piVar1 + *(int *)(*(longlong *)(param_2 + 0x13980) + 0xc);
      iVar7 = *(int *)(*(longlong *)(param_2 + 0x13980) + 0xc);
      local_4c = 0;
      if (-1 < iVar7 + -1) {
        do {
          FUN_016357e0(auStack_88,local_2c + local_4c,L"realvar_");
          local_4c = local_4c + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    iVar7 = *(int *)(*(longlong *)(param_2 + 0x13980) + 0xc);
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
    local_4c = 0;
    if (-1 < iVar8 + -1) {
      do {
        lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),local_4c);
        cVar2 = *(char *)(lVar5 + 8);
        if (((cVar2 == 'K') || (cVar2 == 'L')) ||
           ((cVar2 == 'J' || ((cVar2 == '\x10' || (cVar2 == '\x11')))))) {
          *(undefined1 *)(lVar5 + 0x48) = 1;
        }
        if ((*(char *)(lVar5 + 8) == '5') &&
           (((iVar3 = FUN_01614590(lVar5), iVar3 == 0x3ef ||
             (iVar3 = FUN_01614590(lVar5), iVar3 == 0x3ee)) ||
            (iVar3 = FUN_01614590(lVar5), iVar3 == 0x3f0)))) {
          local_50 = iVar7 + *(int *)(*(longlong *)(param_1 + 0x610) + 0x10) + 1;
          if ((*(int *)(lVar5 + 0x38) != 0) && (*(int *)(lVar5 + 0x38) != local_50)) {
            FUN_01613110(L"StateVar");
          }
          *(int *)(lVar5 + 0x38) = local_50;
          uVar4 = FUN_01614590(lVar5);
          uVar6 = FUN_01612c30(&DAT_016122e8,1,uVar4,lVar5);
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x610),uVar6);
          uVar4 = FUN_01614590(lVar5);
          local_68 = 0;
          FUN_01635620(auStack_88,uVar4,*(undefined4 *)(lVar5 + 0x60),
                       local_30 + *(int *)(lVar5 + 0x38));
          iVar3 = FUN_01614590(lVar5);
          if (iVar3 == 0x3f0) {
            FUN_01635b60(auStack_88,local_30 + *(int *)(lVar5 + 0x38));
            uVar4 = FUN_01614590(lVar5);
            uVar6 = FUN_01612c30(&DAT_016122e8,1,uVar4,lVar5);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x610),uVar6);
            uVar4 = FUN_01614590(lVar5);
            local_68 = 1;
            FUN_01635620(auStack_88,uVar4,*(undefined4 *)(lVar5 + 0x60),
                         local_30 + *(int *)(lVar5 + 0x38) + 1);
            uVar4 = FUN_01614590(lVar5);
            uVar6 = FUN_01612c30(&DAT_016122e8,1,uVar4,lVar5);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x610),uVar6);
            uVar4 = FUN_01614590(lVar5);
            local_68 = 2;
            FUN_01635620(auStack_88,uVar4,*(undefined4 *)(lVar5 + 0x60),
                         local_30 + *(int *)(lVar5 + 0x38) + 2);
            uVar4 = FUN_01614590(lVar5);
            uVar6 = FUN_01612c30(&DAT_016122e8,1,uVar4,lVar5);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x610),uVar6);
            uVar4 = FUN_01614590(lVar5);
            local_68 = 3;
            FUN_01635620(auStack_88,uVar4,*(undefined4 *)(lVar5 + 0x60),
                         local_30 + *(int *)(lVar5 + 0x38) + 3);
          }
          if (*(int *)(param_1 + 0x5c8) != 2) {
            FUN_01635940(auStack_88,local_4c,*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x48));
          }
        }
        local_4c = local_4c + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    piVar1 = (int *)(*(longlong *)(param_2 + 0x13980) + 0x5ec);
    *piVar1 = *piVar1 + *(int *)(*(longlong *)(param_1 + 0x610) + 0x10);
    piVar1 = (int *)(*(longlong *)(param_2 + 0x20) + 0x60);
    *piVar1 = *piVar1 + *(int *)(*(longlong *)(param_2 + 0x13980) + 0x5ec);
  }
  FUN_00414560(&local_40,2);
  return;
}

