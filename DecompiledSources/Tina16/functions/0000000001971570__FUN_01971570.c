/* Ghidra address: 01971570 */
/* Ghidra symbol: FUN_01971570 */


void FUN_01971570(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  puVar1 = auStack_68;
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x1a8) + 0x31) == '\0') {
    local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    iVar3 = FUN_004b2060();
    local_24 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar4 = FUN_0196d410(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x170),local_24);
        if (*(longlong *)(lVar4 + 0x18) != 0) {
          uVar5 = FUN_0196d410(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x170),local_24);
          FUN_0196d210(uVar5,&local_48);
          local_30 = FUN_0196d4a0(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x198),local_48);
          if (local_30 == 0) {
            lVar4 = FUN_0196d410(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x170),local_24);
            if (*(longlong *)(*(longlong *)(lVar4 + 0x18) + 8) != 0) {
              lVar4 = FUN_0196d410(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x170),local_24)
              ;
              cVar2 = FUN_004113d0(*(undefined8 *)(*(longlong *)(lVar4 + 0x18) + 8),
                                   &PTR_FUN_01918c28);
              if (cVar2 == '\0') goto LAB_019716ea;
            }
            lVar4 = FUN_0196d410(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x170),local_24);
            FUN_004ae7e0(local_20,*(undefined8 *)(lVar4 + 0x18));
          }
          else {
            FUN_004ae7e0(local_20,*(undefined8 *)(local_30 + 0x18));
          }
        }
LAB_019716ea:
        local_24 = local_24 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_004b1e70(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x170));
    iVar3 = *(int *)(local_20 + 0x10);
    local_24 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar5 = FUN_004aeac0(local_20,local_24);
        FUN_0196d3f0(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x170),uVar5);
        local_24 = local_24 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(local_20);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00414480(&local_48);
  return;
}

