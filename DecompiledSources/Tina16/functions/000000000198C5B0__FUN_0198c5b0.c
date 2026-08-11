/* Ghidra address: 0198c5b0 */
/* Ghidra symbol: FUN_0198c5b0 */


void FUN_0198c5b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40 [2];
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_48 = (longlong *)0x0;
  local_40[0] = 0;
  local_28 = 0;
  if ((param_2 != (longlong *)0x0) &&
     ((plVar9 = param_2, *(char *)(param_1 + 0x8f) != '\0' ||
      (cVar4 = (**(code **)(*param_2 + 0xc0))(param_2), cVar4 != '\0')))) {
    bVar3 = true;
    if (*(char *)(param_1 + 0x8e) == '\0') {
      cVar4 = FUN_0198a580(param_2);
      if (cVar4 == '\b') {
        bVar2 = *(byte *)(param_2[5] + 0x98);
        if (bVar2 < 8) {
          bVar11 = ((int)CONCAT71((int7)((ulonglong)plVar9 >> 8),1) << (bVar2 & 0x1f) & 0x34U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          cVar4 = FUN_0198c540(*(undefined8 *)(param_1 + 0xc0),bVar2,&local_1c);
          if (cVar4 == '\0') {
            if (*(char *)(param_2[5] + 0x98) == '\x02') {
              plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x438);
              (**(code **)(*plVar9 + 0x10))
                        (plVar9,*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x438));
            }
            else if (*(char *)(param_2[5] + 0x98) == '\x04') {
              if (*(char *)(param_1 + 0xd8) == '\0') {
                bVar3 = false;
              }
              else {
                plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x440);
                (**(code **)(*plVar9 + 0x10))
                          (plVar9,*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x440));
              }
            }
            else if (*(char *)(param_1 + 0xd8) == '\0') {
              bVar3 = false;
            }
            else {
              FUN_01474ba0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x208),
                           *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x208));
            }
          }
          else {
            if (*(char *)(param_2[5] + 0x98) == '\x02') {
              uVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xc0),local_1c);
              FUN_019af9a0(*(undefined8 *)(param_1 + 0xc0),param_2,uVar8);
            }
            uVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xc0),local_1c);
            *(undefined8 *)(param_1 + 0x80) = uVar8;
            bVar3 = false;
          }
        }
      }
      if ((*(char *)(param_1 + 0x6e) != '\0') &&
         (cVar4 = (**(code **)(*param_2 + 0x118))(param_2), cVar4 != '\0')) {
        FUN_017ff4f0(param_2,&local_28);
      }
      uVar8 = (**(code **)(*param_2 + 0x40))(param_2);
      *(undefined8 *)(param_1 + 0x80) = uVar8;
      if ((*(char *)(param_1 + 0x6e) != '\0') &&
         (cVar4 = (**(code **)(*param_2 + 0x118))(param_2), cVar4 != '\0')) {
        FUN_017ff510(*(undefined8 *)(param_1 + 0x80),local_28);
      }
    }
    else {
      *(longlong **)(param_1 + 0x80) = param_2;
      plVar9 = param_2;
      FUN_0198b6a0(*(undefined8 *)(param_1 + 200),param_2);
      if ((*(char *)(param_1 + 0x7f) != '\0') &&
         (cVar4 = (**(code **)(*param_2 + 0x118))(param_2), cVar4 != '\0')) {
        cVar4 = FUN_0198a580(param_2);
        if (cVar4 == '\x04') {
          plVar9 = local_40;
          FUN_01d07fb0(param_2,plVar9);
          if (local_40[0] == 0) {
            FUN_017ff4f0(param_2,&local_48);
            plVar9 = local_48;
            FUN_01d07f50(param_2,local_48);
          }
        }
        FUN_017ff310(param_2);
        if (*(char *)(param_1 + 0x7e) != '\0') {
          plVar9 = *(longlong **)(param_1 + 0x70);
          FUN_017ff590(param_2,plVar9);
        }
      }
      if ((*(char *)(param_1 + 0x6f) != '\0') && (cVar4 = FUN_0198a580(param_2), cVar4 == '\x04')) {
        plVar9 = &local_50;
        FUN_01d07fb0(param_2,plVar9);
        if (local_50 == 0) {
          FUN_017ff4f0(param_2,&local_58);
          plVar9 = local_58;
          FUN_01d07f50(param_2,local_58);
        }
      }
      cVar4 = FUN_0198a580(param_2);
      if (cVar4 == '\b') {
        if (*(char *)(param_1 + 0x7e) != '\0') {
          plVar9 = *(longlong **)(param_1 + 0x70);
          FUN_0149ef60(param_2,plVar9);
        }
        bVar2 = *(byte *)(param_2[5] + 0x98);
        if (bVar2 < 8) {
          bVar11 = ((int)CONCAT71((int7)((ulonglong)plVar9 >> 8),1) << (bVar2 & 0x1f) & 0x34U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          cVar4 = FUN_0198c540(*(undefined8 *)(param_1 + 0xc0),bVar2,&local_1c);
          if (cVar4 == '\0') {
            if (*(char *)(param_2[5] + 0x98) == '\x02') {
              plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x438);
              (**(code **)(*plVar9 + 0x10))
                        (plVar9,*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x438));
            }
            else if (*(char *)(param_2[5] + 0x98) == '\x04') {
              if (*(char *)(param_1 + 0xd8) == '\0') {
                bVar3 = false;
              }
              else {
                plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x440);
                (**(code **)(*plVar9 + 0x10))
                          (plVar9,*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x440));
              }
            }
            else if (*(char *)(param_1 + 0xd8) == '\0') {
              bVar3 = false;
            }
            else {
              FUN_01474ba0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x208),
                           *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x208));
            }
          }
          else {
            if (*(char *)(param_2[5] + 0x98) == '\x02') {
              uVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xc0),local_1c);
              FUN_019af9a0(*(undefined8 *)(param_1 + 0xc0),param_2,uVar8);
            }
            uVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xc0),local_1c);
            *(undefined8 *)(param_1 + 0x80) = uVar8;
            bVar3 = false;
          }
        }
      }
      cVar4 = FUN_0198a580(param_2);
      if ((cVar4 == '\a') && (*(char *)(param_1 + 0x7e) != '\0')) {
        FUN_010b9780(param_2,*(undefined8 *)(param_1 + 0x70));
      }
      cVar4 = FUN_0198a580(param_2);
      if ((cVar4 == '\v') && (*(char *)(param_1 + 0x7e) != '\0')) {
        FUN_017b9ad0(param_2,*(undefined8 *)(param_1 + 0x70));
      }
    }
    if (bVar3) {
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x20))
                (*(longlong **)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x80));
    }
    if (*(char *)(param_1 + 0x6d) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0xb0))
                (*(longlong **)(param_1 + 0x80),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x210),0);
    }
    if (*(char *)(param_1 + 0x6b) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0xa0))
                (*(longlong **)(param_1 + 0x80),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x210));
    }
    if (*(char *)(param_1 + 0x6a) != '\0') {
      cVar4 = FUN_0198a580(*(undefined8 *)(param_1 + 0x80));
      if (cVar4 == '\x05') {
        iVar6 = FUN_017c2b70();
        iVar10 = 0;
        if (-1 < iVar6 + -1) {
          do {
            uVar7 = FUN_017c2c60(*(undefined8 *)(param_1 + 0x80),iVar10);
            local_20._0_2_ = (short)uVar7;
            local_20._2_2_ = (short)((uint)uVar7 >> 0x10);
            local_20 = CONCAT22(local_20._2_2_ + -0x8b8,(short)local_20 + -0x8e8);
            FUN_017c2cc0(*(undefined8 *)(param_1 + 0x80),iVar10,local_20);
            iVar10 = iVar10 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0xc);
        *piVar1 = *piVar1 + -0x8e8;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x10);
        *piVar1 = *piVar1 + -0x8b8;
        cVar4 = FUN_0198a580(*(undefined8 *)(param_1 + 0x80));
        if ((cVar4 == '\x04') &&
           (sVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0xf8))
                              (*(longlong **)(param_1 + 0x80)), sVar5 == 0x68)) {
          local_2c = 4;
          local_30 = 0;
          FUN_01a98500(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x210),4,0,&local_2c,
                       &local_30);
          FUN_01b1cd00(&local_2c,&local_30);
          piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x10);
          *piVar1 = *piVar1 + local_2c;
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x1b8))
                (*(longlong **)(param_1 + 0x80),0,*(undefined8 *)(param_1 + 0x60),0);
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x1c0))
                (*(longlong **)(param_1 + 0x80),0,*(undefined8 *)(param_1 + 0x60));
    }
    FUN_019953b0(*(undefined8 *)(param_1 + 0xc0));
  }
  FUN_00414560(&local_58,4);
  FUN_00414480(&local_28);
  return;
}

