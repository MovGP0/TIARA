/* Ghidra address: 016c4eb0 */
/* Ghidra symbol: FUN_016c4eb0 */


void FUN_016c4eb0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  char local_139;
  undefined1 local_138 [268];
  uint local_2c [3];
  
  local_158 = param_1;
  local_150 = param_3;
  local_148 = param_4;
  FUN_00414610(param_5);
  if (local_150 == 0) {
    FUN_00416910(local_138,param_5,0xff);
    FUN_016a4020(*(undefined8 *)(local_158 + 0x10),0xb,local_138,0xffffffff);
  }
  else {
    uVar2 = FUN_00b95c80(*(undefined8 *)(local_150 + 0x18));
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    lVar3 = *(longlong *)(local_150 + 0x20);
    iVar5 = *(int *)(lVar3 + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar2 = FUN_01d347d0(lVar3,iVar4);
        FUN_016c4da0(auStack_188,uVar2);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (*(longlong *)(local_150 + 0x10) != 0) {
      lVar3 = 0;
      if ((local_148 != 0) &&
         (local_139 = FUN_01d350f0(local_148,*(longlong *)(local_150 + 0x10),local_2c),
         local_139 != '\0')) {
        lVar3 = FUN_01d347d0(local_148,local_2c[0]);
      }
      if ((local_148 == 0) || (local_139 == '\0')) {
        local_139 = FUN_01d350f0(*(undefined8 *)(local_158 + 0x9c8),
                                 *(undefined8 *)(local_150 + 0x10),local_2c);
        if (local_139 == '\0') {
          local_168 = 0;
          cVar1 = FUN_00ee3970(*(undefined8 *)(local_158 + 8),0,*(undefined8 *)(local_150 + 0x10),0)
          ;
          if (cVar1 != '\0') {
            local_139 = FUN_01d350f0(*(undefined8 *)(local_158 + 0x9c8),
                                     *(undefined8 *)(local_150 + 0x10),local_2c);
          }
        }
        if (local_139 != '\0') {
          lVar3 = FUN_01d347d0(*(undefined8 *)(local_158 + 0x9c8),local_2c[0]);
        }
      }
      if (lVar3 == 0) {
        FUN_016a4020(*(undefined8 *)(local_158 + 0x10),0xb,*(undefined8 *)(local_150 + 0x10),
                     0xffffffff);
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 0x20);
        iVar5 = *(int *)(lVar3 + 0x10) + -1;
        if (-1 < iVar5) {
          do {
            uVar2 = FUN_01d347d0(lVar3,iVar5);
            cVar1 = FUN_016c4e30(auStack_188,uVar2);
            if (cVar1 != '\0') {
              FUN_01d347d0(lVar3,iVar5);
              break;
            }
            iVar5 = iVar5 + -1;
          } while (iVar5 != -1);
        }
      }
    }
  }
  FUN_00414480(&param_5);
  return;
}

