/* Ghidra address: 01366530 */
/* Ghidra symbol: FUN_01366530 */


void FUN_01366530(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_40;
  int local_38;
  int local_34;
  longlong *local_30;
  
  if ((param_2 != (longlong *)0x0) &&
     (local_40 = param_2, cVar2 = (**(code **)(*param_2 + 0xc0))(param_2), cVar2 != '\0')) {
    cVar2 = (**(code **)(*local_40 + 0x118))(local_40);
    if (cVar2 != '\0') {
      if (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x20) == '\0') {
        if (*(char *)(param_1 + 0x67) != '\0') {
          uVar4 = FUN_0198a580(local_40);
          if ((byte)uVar4 < 8) {
            bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x1eU)
                    != 0;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
            *(undefined1 *)(lVar5 + 0x27b0) = *(undefined1 *)((longlong)local_40 + 0xd1);
            *(undefined1 *)(lVar5 + 0x27b1) = *(undefined1 *)((longlong)local_40 + 0xd3);
            FUN_00414ad0(lVar5 + 0x27b8,local_40[0x13]);
          }
        }
      }
      else if (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x30) == '\0') {
        FUN_01991f70(*(undefined8 *)(param_1 + 0x68),local_40,1);
      }
    }
    uVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0x68));
    (**(code **)(*local_40 + 0xd8))
              (local_40,uVar4,*(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0x20));
    if (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x20) != '\0') {
      uVar4 = FUN_0198a580(local_40);
      if ((byte)uVar4 < 8) {
        bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x3eU) !=
                0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        cVar2 = FUN_0198a580(local_40);
        if ((cVar2 == '\x05') || (*(char *)((longlong)local_40 + 0xaa) == '\0')) {
          iVar3 = (**(code **)(*local_40 + 0x1c8))(local_40);
          local_38 = 0;
          local_34 = iVar3;
          if (-1 < iVar3 + -1) {
            do {
              plVar1 = local_40;
              cVar2 = (**(code **)(*local_40 + 0x1d8))(local_40,local_38);
              if (cVar2 == '\0') {
                (**(code **)(*plVar1 + 0x1f0))(plVar1,-(local_38 + 1),param_1 + 0x7c,param_1 + 0x78)
                ;
                (**(code **)(*plVar1 + 0x1f0))(plVar1,local_38,param_1 + 0x74,param_1 + 0x70);
                local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x7c));
                local_60 = *(undefined4 *)(param_1 + 0x78);
                local_58 = *(undefined4 *)(param_1 + 0x74);
                local_50 = *(undefined4 *)(param_1 + 0x70);
                FUN_013653b0(*(undefined8 *)(param_1 + 0xb0),local_40,
                             *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58));
              }
              local_38 = local_38 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          iVar3 = (**(code **)(*local_40 + 0x1d0))();
          local_38 = 0;
          if (-1 < iVar3 + -1) {
            do {
              local_30 = local_40;
              iVar6 = local_34 + local_38;
              cVar2 = (**(code **)(*local_40 + 0x1d8))(local_40,iVar6);
              if (cVar2 == '\0') {
                (**(code **)(*local_30 + 0x1f0))
                          (local_30,-(iVar6 + 1),param_1 + 0x7c,param_1 + 0x78);
                (**(code **)(*local_30 + 0x1f0))(local_30,iVar6,param_1 + 0x74,param_1 + 0x70);
                local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x7c));
                local_60 = *(undefined4 *)(param_1 + 0x78);
                local_58 = *(undefined4 *)(param_1 + 0x74);
                local_50 = *(undefined4 *)(param_1 + 0x70);
                FUN_013653b0(*(undefined8 *)(param_1 + 0xb0),local_40,
                             *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58));
              }
              local_38 = local_38 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        cVar2 = FUN_0198a580(local_40);
        if ((cVar2 == '\x05') && (cVar2 = FUN_017c3740(local_40), cVar2 != '\0')) {
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x10);
          local_38 = 0;
          if (-1 < iVar3 + -1) {
            do {
              uVar4 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x68),local_38);
              cVar2 = FUN_0198a580(uVar4);
              if (cVar2 == '\x05') {
                lVar5 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x68),local_38);
                if (*(longlong **)(lVar5 + 0x3e0) == local_40) {
                  local_68 = *(undefined8 *)(param_1 + 0x68);
                  FUN_01366380(auStack_88,local_40,lVar5,0);
                }
                if (*(longlong **)(lVar5 + 1000) == local_40) {
                  local_68 = *(undefined8 *)(param_1 + 0x68);
                  FUN_01366380(auStack_88,local_40,lVar5,1);
                }
              }
              local_38 = local_38 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
    }
  }
  return;
}

