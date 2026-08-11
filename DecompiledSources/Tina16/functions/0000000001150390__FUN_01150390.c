/* Ghidra address: 01150390 */
/* Ghidra symbol: FUN_01150390 */


void FUN_01150390(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 *local_a0;
  longlong local_98;
  int local_8c;
  int local_88;
  char local_81;
  int local_80;
  short local_7a;
  longlong local_78;
  longlong local_70;
  undefined1 local_5b;
  undefined1 local_5a;
  char local_59;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined1 local_29;
  
  local_98 = param_1;
  FUN_01150080(param_1);
  FUN_0114f5e0(local_98);
  *(undefined2 *)(local_98 + 0x48) = 0;
  FUN_0114fa60();
  FUN_01150190(local_98);
  local_80 = *(int *)(*(longlong *)(local_98 + 0xa0) + 0x2d8);
  local_8c = 1;
  if (0 < local_80) {
    do {
      local_78 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_98 + 0xa0) + 0x2b0) + -8 +
                  (longlong)local_8c * 8);
      local_29 = 1;
      local_7a = 0;
      local_81 = '\0';
      local_38 = local_78;
      uVar3 = FUN_0114fda0(local_98,local_78);
      local_40 = (undefined8 *)FUN_00409570(uVar3);
      *(undefined8 **)(local_78 + 0x50) = local_40;
      iVar4 = FUN_01cfd2d0();
      local_88 = 0;
      if (-1 < iVar4 + -1) {
        do {
          local_a8 = &local_5a;
          local_a0 = &local_5b;
          puVar5 = (undefined8 *)
                   FUN_01b05ad0(local_38,CONCAT31((int3)((uint)local_88 >> 8),
                                                  (char)local_88 + '\x01'),0,&local_59);
          if (local_59 == '\x06') {
            if ((*(float *)(puVar5 + 2) != 0.0) ||
               (cVar2 = FUN_0114eb00(*(undefined1 *)(puVar5 + 3),puVar5[4]), cVar2 != '\0')) {
              *local_40 = *puVar5;
              FUN_00b909d0(&local_40,8);
              local_81 = local_81 + '\x01';
              local_7a = local_7a + 8;
              FUN_01150280(auStack_c8);
            }
          }
          else if ((local_59 == '\a') && (puVar5[0x28] != 0)) {
            lVar7 = *(longlong *)((longlong)puVar5 + 0x26);
            local_58 = *(undefined8 *)(puVar5[0x28] + 0x10);
            uVar3 = FUN_0114fe60(local_98,local_38);
            local_48 = (undefined8 *)FUN_00409570(uVar3);
            *(undefined8 **)(lVar7 + 0x11) = local_48;
            local_50 = *(undefined8 **)(lVar7 + 9);
            for (uVar8 = (uint)*(byte *)(puVar5[0x28] + 0x18); uVar8 != 0; uVar8 = uVar8 - 1) {
              cVar2 = FUN_0114eb60(local_58);
              if (cVar2 != '\0') {
                *local_48 = *local_50;
                FUN_00b909d0(&local_48,8);
              }
              FUN_00b909d0(&local_50,8);
              FUN_00b909d0(&local_58,0x14);
            }
            local_81 = local_81 + '\x01';
            local_7a = local_7a + *(short *)(*(longlong *)((longlong)puVar5 + 0x26) + 0x23);
            FUN_01150280(auStack_c8);
          }
          local_88 = local_88 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (local_81 != '\0') {
        uVar6 = FUN_01d34b90(*(undefined8 *)(param_2 + 0x10));
        FUN_01cbfcb0(uVar6,local_81);
        lVar7 = FUN_01d34b90(*(undefined8 *)(param_2 + 0x10));
        *(short *)(lVar7 + 0x12) = local_7a;
        local_81 = '\0';
        iVar4 = FUN_01cfd2d0();
        local_88 = 0;
        if (-1 < iVar4 + -1) {
          do {
            iVar1 = local_88;
            local_a8 = &local_5a;
            local_a0 = &local_5b;
            lVar7 = FUN_01b05ad0(local_38,CONCAT31((int3)((uint)local_88 >> 8),
                                                   (char)local_88 + '\x01'),0,&local_59);
            if (local_59 == '\x06') {
              if ((*(float *)(lVar7 + 0x10) != 0.0) ||
                 (cVar2 = FUN_0114eb00(*(undefined1 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20)),
                 cVar2 != '\0')) {
                uVar6 = FUN_01d34b90(*(undefined8 *)(param_2 + 0x10));
                local_a8 = (undefined1 *)((ulonglong)local_a8 & 0xffffffffffffff00);
                FUN_01150360(auStack_c8,local_88,0xff,0);
                FUN_01cbfce0(uVar6,local_81);
                local_81 = local_81 + '\x01';
              }
            }
            else if ((local_59 == '\a') && (local_70 = lVar7, *(longlong *)(lVar7 + 0x140) != 0)) {
              uVar6 = FUN_01d34b90(*(undefined8 *)(param_2 + 0x10));
              local_a8 = (undefined1 *)
                         CONCAT71(local_a8._1_7_,(*(undefined1 **)(local_70 + 0x26))[0x21]);
              FUN_01150360(auStack_c8,iVar1,0xff,**(undefined1 **)(local_70 + 0x26));
              FUN_01cbfce0(uVar6,local_81);
              local_81 = local_81 + '\x01';
            }
            local_88 = local_88 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      local_8c = local_8c + 1;
      local_80 = local_80 + -1;
    } while (local_80 != 0);
  }
  return;
}

