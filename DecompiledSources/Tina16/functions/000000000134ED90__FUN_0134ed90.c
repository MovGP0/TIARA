/* Ghidra address: 0134ed90 */
/* Ghidra symbol: FUN_0134ed90 */


void FUN_0134ed90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong local_70;
  longlong *local_68;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_2 != (longlong *)0x0) {
    local_70 = param_1;
    local_68 = param_2;
    uVar4 = FUN_0198a580(param_2);
    if ((byte)uVar4 < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x32U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      uVar4 = FUN_0198a580(local_68);
      if ((byte)uVar4 < 8) {
        bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x12U) !=
                0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        local_5c = 0x7000000;
        local_54 = 0x7000000;
        local_50 = 0x7000000;
        local_4c = 0x7000000;
        iVar3 = (**(code **)(*local_68 + 0x1c8))();
        local_58 = 0;
        if (-1 < iVar3 + -1) {
          do {
            plVar1 = local_68;
            (**(code **)(*local_68 + 0x1f0))(local_68,local_58,&local_34,&local_38);
            cVar2 = (**(code **)(*plVar1 + 0x1e0))(plVar1,local_58);
            FUN_0134e970(auStack_a8,local_34,local_38,cVar2 == '\0');
            if (local_34 < local_5c) {
              local_5c = local_34;
            }
            if (local_50 < local_34) {
              local_50 = local_34;
            }
            if (local_38 < local_54) {
              local_54 = local_38;
            }
            if (local_4c < local_38) {
              local_4c = local_38;
            }
            local_58 = local_58 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        uVar4 = FUN_0198d430(*(undefined8 *)(local_70 + 0x50));
        (**(code **)(*local_68 + 0x68))(local_68,uVar4,&local_48);
        local_88 = local_3c;
        FUN_0134e9e0(auStack_a8,local_48,local_44,local_40);
      }
      cVar2 = FUN_0198a580(local_68);
      if (cVar2 == '\x05') {
        iVar3 = FUN_017c2b70();
        local_58 = 0;
        if (-1 < iVar3 + -1) {
          do {
            local_30 = local_2c;
            local_2c = FUN_017c2c60(local_68,local_58);
            if (local_58 != 0) {
              lVar5 = (longlong)(short)local_2c;
              local_2c._2_2_ = (short)((uint)local_2c >> 0x10);
              local_88 = (int)local_2c._2_2_;
              FUN_0134eb10(auStack_a8,(longlong)(short)local_30,(longlong)local_30._2_2_,lVar5);
            }
            local_58 = local_58 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
  }
  return;
}

