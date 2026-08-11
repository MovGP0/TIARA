/* Ghidra address: 016c9e10 */
/* Ghidra symbol: FUN_016c9e10 */


void FUN_016c9e10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  int local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined1 local_230 [256];
  undefined8 local_130;
  undefined1 local_128;
  char local_127;
  
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_130 = 0;
  local_268 = param_1;
  if ((*(char *)(param_2 + 0x28) == 'K') && (*(longlong *)(param_2 + 0x10) != 0)) {
    iVar4 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x28))();
    local_254 = 0;
    if (-1 < iVar4 + -1) {
      do {
        (**(code **)(**(longlong **)(param_2 + 0x58) + 0x18))
                  (*(longlong **)(param_2 + 0x58),&local_130,local_254);
        FUN_00416910(local_230,local_130,0xff);
        local_260 = FUN_016c4bb0(*(undefined8 *)(local_268 + 0xc0),local_230,
                                 *(undefined8 *)(*(longlong *)(local_268 + 0xc0) + 0x9b8));
        if (local_260 == 0) {
          (**(code **)(**(longlong **)(param_2 + 0x58) + 0x18))
                    (*(longlong **)(param_2 + 0x58),&local_240,local_254);
          FUN_00416910(local_230,local_240,0xff);
          FUN_016a4020(*(undefined8 *)(*(longlong *)(local_268 + 0xc0) + 0x10),0xc,local_230,
                       0xffffffff);
        }
        else {
          lVar1 = *(longlong *)(local_260 + 0x30);
          iVar7 = *(int *)(lVar1 + 0x10);
          iVar6 = 0;
          if (-1 < iVar7 + -1) {
            do {
              uVar5 = FUN_01d347d0(lVar1,iVar6);
              FUN_016c9d90(auStack_288,uVar5);
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          lVar1 = *(longlong *)(local_260 + 0x40);
          iVar7 = *(int *)(lVar1 + 0x10);
          iVar6 = 0;
          if (-1 < iVar7 + -1) {
            do {
              uVar5 = FUN_01d347d0(lVar1,iVar6);
              FUN_016c9dd0(auStack_288,uVar5);
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_016bca60(local_260,&local_238);
          plVar2 = *(longlong **)(*(longlong *)(local_268 + 0xc0) + 0xa60);
          (**(code **)(*plVar2 + 0x78))(plVar2,local_238);
          FUN_004ae7e0(*(undefined8 *)(local_268 + 0x90),local_260);
        }
        local_254 = local_254 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  bVar3 = *(char *)(param_2 + 0x28) - 0x40;
  if ((bVar3 < 0x20 && (1 << (bVar3 & 0x1f) & 0x8009e0U) != 0) ||
     ((*(char *)(param_2 + 0x28) == 'B' && (*(longlong *)(param_2 + 0x10) == 0)))) {
    iVar4 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x28))();
    local_254 = 0;
    if (-1 < iVar4 + -1) {
      do {
        (**(code **)(**(longlong **)(param_2 + 0x58) + 0x18))
                  (*(longlong **)(param_2 + 0x58),&local_248,local_254);
        FUN_00416910(&local_128,local_248,0xff);
        bVar3 = *(char *)(param_2 + 0x28) - 0x40;
        if (bVar3 < 8) {
          bVar8 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar3 & 0x1f) & 0xa4U) != 0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          if (local_127 == 'I') {
            FUN_004169a0(&local_250,&local_128);
            iVar7 = FUN_004170c0(&LAB_016ca254,local_250,1);
            FUN_004151b0(&local_128,&local_128,iVar7 + 1,local_128);
            goto LAB_016ca174;
          }
        }
        else {
LAB_016ca174:
          local_260 = FUN_016c4bb0(*(undefined8 *)(local_268 + 0xc0),&local_128,
                                   *(undefined8 *)(*(longlong *)(local_268 + 0xc0) + 0x9b8));
          if (local_260 == 0) {
            FUN_016a4020(*(undefined8 *)(*(longlong *)(local_268 + 0xc0) + 0x10),0xc,&local_128,
                         0xffffffff);
          }
        }
        local_254 = local_254 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414560(&local_250,4);
  FUN_00414480(&local_130);
  return;
}

