/* Ghidra address: 01150810 */
/* Ghidra symbol: FUN_01150810 */


void FUN_01150810(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int local_68;
  int local_64;
  undefined1 local_4b;
  undefined1 local_4a;
  char local_49;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  iVar8 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x2d8);
  local_68 = 1;
  if (0 < iVar8) {
    do {
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x2b0) + -8 + (longlong)local_68 * 8);
      local_30 = *(undefined8 **)(lVar1 + 0x50);
      iVar6 = FUN_01cfd2d0();
      local_64 = 0;
      if (-1 < iVar6 + -1) {
        do {
          puVar7 = (undefined8 *)
                   FUN_01b05ad0(lVar1,CONCAT31((int3)((uint)local_64 >> 8),(char)local_64 + '\x01'),
                                0,&local_49,&local_4a,&local_4b);
          if (local_49 == '\x06') {
            if ((*(float *)(puVar7 + 2) != 0.0) ||
               (cVar3 = FUN_0114eb00(*(undefined1 *)(puVar7 + 3),puVar7[4]), cVar3 != '\0')) {
              *puVar7 = *local_30;
              FUN_00b909d0(&local_30,8);
            }
          }
          else if ((local_49 == '\a') && (puVar7[0x28] != 0)) {
            lVar2 = *(longlong *)((longlong)puVar7 + 0x26);
            local_40 = *(undefined8 *)(puVar7[0x28] + 0x10);
            local_48 = *(undefined8 **)(lVar2 + 9);
            local_38 = *(undefined8 **)(lVar2 + 0x11);
            for (uVar9 = (uint)*(byte *)(puVar7[0x28] + 0x18); uVar9 != 0; uVar9 = uVar9 - 1) {
              cVar3 = FUN_0114eb60(local_40);
              if (cVar3 != '\0') {
                *local_48 = *local_38;
                FUN_00b909d0(&local_38,8);
              }
              FUN_00b909d0(&local_48,8);
              FUN_00b909d0(&local_40,0x14);
            }
            lVar2 = *(longlong *)(lVar2 + 0x11);
            if (lVar2 != 0) {
              uVar4 = FUN_0114fe60(param_1,lVar1);
              FUN_004095f0(lVar2,uVar4);
            }
          }
          local_64 = local_64 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      lVar2 = *(longlong *)(lVar1 + 0x50);
      if (lVar2 != 0) {
        uVar4 = FUN_0114fda0(param_1,lVar1);
        FUN_004095f0(lVar2,uVar4);
      }
      local_68 = local_68 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x50),(ulonglong)*(ushort *)(param_1 + 0x44) << 4);
  }
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    uVar5 = FUN_0114f620(param_1);
    FUN_004095f0(lVar1,(uint)uVar5 * 2);
  }
  return;
}

