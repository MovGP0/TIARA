/* Ghidra address: 00c2d410 */
/* Ghidra symbol: FUN_00c2d410 */


void FUN_00c2d410(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_a8 [40];
  longlong local_80;
  byte local_74;
  byte local_73;
  char local_72;
  char local_71;
  int local_70;
  int local_6c;
  longlong local_68;
  longlong local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  local_60 = 0;
  local_68 = 0;
  local_80 = param_2;
  cVar1 = FUN_00c28880(param_1);
  if ((cVar1 == '\0') && (local_80 != 0)) {
    cVar1 = FUN_00c28880(local_80);
    if (cVar1 == '\0') {
      if (*(longlong *)(local_80 + 0x60) != 0) {
        uVar2 = FUN_00c2e570(*(longlong *)(local_80 + 0x60));
        if ((byte)uVar2 < 8) {
          bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0xcU) !=
                  0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) goto LAB_00c2d75a;
      }
      FUN_00c29e80(local_80,local_38);
      FUN_00c29e80(param_1,local_48);
      cVar1 = FUN_004239d0(&local_58,local_38,local_48);
      if (cVar1 != '\0') {
        cVar1 = FUN_00c2a4a0(param_1);
        if (cVar1 == '\0') {
          cVar1 = FUN_00c2d280(auStack_a8);
          if (cVar1 == '\0') goto LAB_00c2d75a;
          local_73 = 0;
          local_71 = '\x01';
        }
        else {
          local_73 = FUN_00c2e3e0(*(undefined8 *)(param_1 + 0x60));
          local_71 = '\0';
        }
        local_72 = FUN_00c2a4a0(local_80);
        if (local_72 == '\0') {
          local_74 = 0;
        }
        else {
          local_74 = FUN_00c2e3e0(*(undefined8 *)(local_80 + 0x60));
        }
        local_70 = local_54 - (uint)*(ushort *)(local_80 + 0x4b);
        lVar3 = FUN_00c29d60(local_80);
        FUN_004194b0(&local_60,*(undefined8 *)(lVar3 + 8),&DAT_00c12750);
        lVar3 = FUN_00c29d60(param_1);
        FUN_004194b0(&local_68,*(undefined8 *)(lVar3 + 8),&DAT_00c12750);
        local_6c = local_54 - (uint)*(ushort *)(param_1 + 0x4b);
        iVar6 = (local_4c - (uint)*(ushort *)(param_1 + 0x4b)) + -1;
        if (local_6c <= iVar6) {
          iVar6 = (iVar6 - local_6c) + 1;
          do {
            lVar3 = FUN_00c2a3f0(local_80,local_70);
            pbVar4 = (byte *)((lVar3 + local_58) - (ulonglong)*(ushort *)(local_80 + 0x49));
            lVar3 = FUN_00c2a3f0(param_1,local_6c);
            pbVar5 = (byte *)((lVar3 + local_58) - (ulonglong)*(ushort *)(param_1 + 0x49));
            if (local_58 <= local_50 + -1) {
              iVar7 = ((local_50 + -1) - local_58) + 1;
              do {
                if (((local_71 != '\0') || (*pbVar5 != local_73)) &&
                   ((local_72 == '\0' || (*pbVar4 != local_74)))) {
                  if ((local_68 != local_60) || (*pbVar5 != *pbVar4)) {
                    cVar1 = FUN_0043e2c0(local_68 + (ulonglong)*pbVar5 * 3,
                                         local_60 + (ulonglong)*pbVar4 * 3,3);
                    if (cVar1 == '\0') goto LAB_00c2d6b5;
                  }
                  if (local_71 != '\0') {
                    local_71 = '\0';
                    local_73 = FUN_00c2d2f0(auStack_a8);
                  }
                  *pbVar5 = local_73;
                }
LAB_00c2d6b5:
                pbVar5 = pbVar5 + 1;
                pbVar4 = pbVar4 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            local_70 = local_70 + 1;
            local_6c = local_6c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        cVar1 = FUN_00c2a4a0(param_1);
        if ((cVar1 == '\0') && (local_71 == '\0')) {
          lVar3 = *(longlong *)(param_1 + 0x60);
          if (lVar3 == 0) {
            lVar3 = FUN_00c2e190(&LAB_00c15318,1,param_1);
          }
          FUN_00c2e340(lVar3,1);
          FUN_00c2e3f0(lVar3,local_73);
        }
        FUN_00c28ba0(param_1);
        FUN_00c28bd0(param_1);
      }
    }
  }
LAB_00c2d75a:
  FUN_00417840(&local_68,&DAT_00c12750,2);
  return;
}

