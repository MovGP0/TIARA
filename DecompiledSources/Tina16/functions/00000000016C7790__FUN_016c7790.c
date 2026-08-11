/* Ghidra address: 016c7790 */
/* Ghidra symbol: FUN_016c7790 */


void FUN_016c7790(longlong param_1,byte *param_2,byte *param_3,longlong param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined1 param_8,undefined1 param_9)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_260;
  undefined1 local_258;
  longlong local_250;
  undefined4 local_244;
  byte local_240 [256];
  longlong local_140;
  char local_131;
  byte local_130 [256];
  longlong local_30;
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar6 = local_130;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar6 = *param_2;
    param_2 = param_2 + 1;
    pbVar6 = pbVar6 + 1;
  }
  lVar3 = (ulonglong)*param_3 + 1;
  pbVar6 = local_240;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar6 = *param_3;
    param_3 = param_3 + 1;
    pbVar6 = pbVar6 + 1;
  }
  local_131 = FUN_01d350f0(*(undefined8 *)(param_1 + 0xa20),local_240,&local_244);
  if (local_131 == '\0') {
    FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0xd,local_240,0xffffffff);
  }
  else {
    local_30 = FUN_01d347d0(*(undefined8 *)(param_1 + 0xa20),local_244);
    FUN_016c52d0(param_1,*(undefined8 *)(local_30 + 0x20),*(undefined8 *)(local_30 + 0x30),param_5);
    if (*(longlong *)(local_30 + 0x18) != 0) {
      iVar5 = *(int *)(*(longlong *)(local_30 + 0x10) + 0x10);
      if ((iVar5 < *(int *)(param_4 + 0x10)) ||
         (*(int *)(param_4 + 0x10) < iVar5 - *(int *)(local_30 + 0x40))) {
        FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x10,*(undefined8 *)(local_30 + 8),0xffffffff);
      }
      local_140 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      lVar3 = *(longlong *)(local_30 + 0x18);
      iVar5 = *(int *)(lVar3 + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar2 = FUN_01d347d0(lVar3,iVar4);
          FUN_016c66a0(auStack_298,uVar2);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      while (0 < *(int *)(local_140 + 0x10)) {
        lVar3 = FUN_004aeac0(local_140,0);
        local_131 = FUN_01d350f0(*(undefined8 *)(param_1 + 0xa20),*(undefined8 *)(lVar3 + 0x10),
                                 &local_244);
        if (local_131 == '\0') {
          local_278 = param_6;
          cVar1 = FUN_00ee3970(*(undefined8 *)(param_1 + 8),3,*(undefined8 *)(lVar3 + 0x10),param_7)
          ;
          if (cVar1 != '\0') {
            local_131 = FUN_01d350f0(*(undefined8 *)(param_1 + 0xa20),*(undefined8 *)(lVar3 + 0x10),
                                     &local_244);
          }
        }
        if (local_131 == '\0') {
          FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0xd,*(undefined8 *)(lVar3 + 0x10),0xffffffff)
          ;
        }
        local_278 = *(undefined8 *)(lVar3 + 0x40);
        local_270 = param_6;
        local_268 = param_7;
        local_260 = param_8;
        local_258 = param_9;
        local_250 = lVar3;
        FUN_016c7790(param_1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        FUN_00410f20(lVar3);
        FUN_004ae870(local_140);
      }
      FUN_00410f20(local_140);
    }
    if (*(longlong *)(local_30 + 0x38) != 0) {
      lVar3 = *(longlong *)(local_30 + 0x38);
      iVar5 = *(int *)(lVar3 + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar2 = FUN_01d347d0(lVar3,iVar4);
          FUN_016c73c0(auStack_298,uVar2);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return;
}

