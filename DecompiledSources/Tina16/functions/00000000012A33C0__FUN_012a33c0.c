/* Ghidra address: 012a33c0 */
/* Ghidra symbol: FUN_012a33c0 */


undefined8 FUN_012a33c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  byte local_81;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte *local_60;
  int local_54;
  longlong local_50;
  longlong local_48;
  undefined1 local_3b;
  byte local_3a;
  byte local_39 [9];
  
  local_80 = (undefined1 *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_0153a550(&local_50,&local_54,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00e17da0(local_39,&local_48);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8));
    if (local_39[0] != 0) {
      FUN_00e16e30(&local_3a,&local_3b);
      local_81 = 0;
      bVar7 = local_39[0];
      do {
        lVar4 = FUN_01107340(&PTR_FUN_01105a20,1);
        FUN_004169a0(lVar4 + 8,local_48 + (ulonglong)local_81 * 0x29);
        *(undefined1 *)(lVar4 + 0x10) = 1;
        uVar3 = FUN_0040c770((double)local_3a / 2.0);
        *(undefined1 *)(lVar4 + 0x2a) = uVar3;
        FUN_00e16ec0(lVar4 + 0x2a,lVar4 + 0x118,1);
        *(uint *)(lVar4 + 0x80) = (uint)local_81 % 0xb;
        *(undefined1 *)(lVar4 + 0x120) = local_3b;
        *(undefined1 *)(lVar4 + 0x148) = 1;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        FUN_00414480(lVar4 + 0x108);
        if ((0 < local_54) && (iVar5 = 0, iVar8 = local_54, -1 < local_54 + -1)) {
          do {
            lVar6 = (longlong)iVar5;
            plVar1 = *(longlong **)(local_50 + lVar6 * 8);
            (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_60);
            if ((uint)*local_60 == local_81 / 2) {
              *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(local_50 + lVar6 * 8);
              plVar1 = *(longlong **)(local_50 + lVar6 * 8);
              (**(code **)(*plVar1 + 0x288))(plVar1,&local_70);
              FUN_00414ad0(lVar4 + 0x108,local_70);
              *(undefined1 *)(lVar4 + 0x2b) = 3;
              FUN_010c0b00(&local_78,*(undefined8 *)(lVar4 + 0x108),&local_68,lVar4 + 0x2b);
              FUN_00414ad0(lVar4 + 0x108,local_78);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        FUN_004169a0(&local_80,local_48 + (ulonglong)local_81 * 0x29);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                  (*(longlong **)(param_1 + 8),local_80,lVar4);
        local_81 = local_81 + 1;
        bVar7 = bVar7 - 1;
      } while (bVar7 != 0);
      FUN_004095f0(local_48,(uint)local_39[0] * 0x29);
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  FUN_00414560(&local_80,4);
  return uVar2;
}

