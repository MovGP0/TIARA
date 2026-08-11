/* Ghidra address: 0139a390 */
/* Ghidra symbol: FUN_0139a390 */


void FUN_0139a390(longlong *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  uint in_stack_ffffffffffffff28;
  uint3 uVar13;
  double local_98 [2];
  char local_84;
  double local_80;
  double local_78;
  char *local_70;
  double *local_68;
  int local_5c [13];
  
  iVar5 = FUN_017d1380(*(undefined8 *)(param_2 + 0x4c0));
  uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (uVar3 < 0x3f) {
    if (uVar3 != 0x3e) {
      if (uVar3 < 0xf) {
        if (uVar3 != 0xe) {
          if (uVar3 == 5) {
            uVar12 = FUN_013972e0(param_2,param_1,1,1,2,1,1);
            FUN_01d04c40(param_1,0,0);
            FUN_01d04c80(param_1,uVar12);
            return;
          }
          if (uVar3 == 6) {
            (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_68);
            cVar1 = *(char *)local_68;
            if (cVar1 == '\0') {
              uVar12 = FUN_013972e0(param_2,param_1,0,1,2,1,1);
            }
            else {
              uVar12 = 0;
            }
            FUN_01d04c40(param_1,0,cVar1);
            FUN_01d04c80(param_1,uVar12);
            return;
          }
          if (uVar3 == 8) {
            (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_68);
            if (*(char *)local_68 == '\0') {
              (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_68);
              FUN_01d350f0(*(undefined8 *)(param_2 + 0x4c0),local_68,local_5c);
              FUN_017d13d0(&local_80,param_2,local_5c[0],param_1,
                           in_stack_ffffffffffffff28 & 0xffffff00,1,2,1,1);
              dVar10 = (double)FUN_00c44590(&local_80);
              if (dVar10 == 0.0) {
                uVar12 = 0x4415af1d78b58c40;
              }
              else {
                FUN_00c44790(PTR_DAT_02003900,&local_80,&local_80);
                FUN_00c44500(&local_80,PTR_DAT_02002618,&local_80);
                uVar12 = FUN_00c44590(&local_80);
              }
            }
            else {
              uVar12 = 0;
            }
            FUN_01d04c40(param_1,0,0);
            FUN_01d04c80(param_1,uVar12);
            return;
          }
          if (uVar3 != 9) {
            return;
          }
          goto LAB_0139a7da;
        }
      }
      else if (uVar3 != 0x10) {
        if (uVar3 == 0x2c) goto LAB_0139abd8;
        if (uVar3 == 0x32) {
          FUN_017d13d0(local_98,param_2,0,param_1,1,1,2,1,1);
          dVar11 = (double)FUN_01397060(param_2,param_1,1,1,1,2,1,1);
          dVar9 = (double)FUN_0040c850(local_98[0]);
          dVar10 = local_98[0];
          if (dVar9 + 0.01 < dVar11) {
            dVar10 = dVar11;
          }
          (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_68);
          dVar11 = *local_68;
          if (dVar11 < 0.001) {
            dVar11 = 12.0;
          }
          dVar9 = (double)FUN_0040c850(dVar10);
          (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_68);
          cVar1 = *(char *)local_68;
          if ((dVar9 <= dVar11 * 1.005) && (cVar1 == '\0')) {
            FUN_01d04c40(param_1,0,0);
            dVar11 = (dVar9 * 12.0) / dVar11;
            if (dVar10 < 0.0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            if (0.001 <= dVar11) {
              if (4.0 <= dVar11) {
                dVar11 = dVar11 - 4.0;
                if (8.0 < dVar11) {
                  dVar11 = 8.0;
                }
                iVar6 = FUN_0040c840(127.0 - (dVar11 * 125.0) / 8.0);
                iVar5 = iVar5 * iVar6;
              }
              else {
                iVar5 = 1;
              }
            }
            else {
              iVar5 = 0;
            }
            FUN_01d04c40(param_1,1,iVar5);
            return;
          }
          if (cVar1 == '\0') {
            FUN_01d04c40(param_1,0,2);
          }
          else {
            FUN_01d04c40(param_1,0,cVar1);
          }
          FUN_01d04c40(param_1,1,1);
          return;
        }
        if (uVar3 != 0x33) {
          return;
        }
        goto LAB_0139a4f3;
      }
LAB_0139aa80:
      sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
      if ((sVar4 == 0xe) || (sVar4 = (**(code **)(*param_1 + 0xf8))(param_1), sVar4 == 0x43)) {
        uVar12 = 0;
        (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_68);
      }
      else {
        uVar12 = 0;
        (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_68);
      }
      bVar2 = *(byte *)local_68;
      if (bVar2 < 0x10) {
        bVar8 = ((int)CONCAT62((int6)((ulonglong)uVar12 >> 0x10),1) << (bVar2 & 0x1f) & 0x401U) != 0
        ;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        uVar12 = FUN_01397060(param_2,param_1,0,0,1,2,1,1);
      }
      else {
        uVar12 = 0;
      }
      if (bVar2 == 1) {
        FUN_01d04c40(param_1,0,1);
        FUN_01d04c40(param_1,1,1);
        return;
      }
      dVar10 = (double)FUN_0040c850(uVar12);
      if (50.0 < dVar10) {
        FUN_01d04c40(param_1,0,10);
        FUN_01d04c40(param_1,1,0);
        return;
      }
      FUN_01d04c40(param_1,0,0);
      FUN_01d04c40(param_1,1,0);
      return;
    }
LAB_0139af85:
    if (*(char *)((longlong)param_1 + 0x3d1) == '\0') {
      return;
    }
    dVar11 = 0.0;
    iVar5 = iVar5 + -1;
    iVar6 = 1;
    dVar10 = 0.0;
    if (0 < iVar5) {
      do {
        sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
        if (sVar4 == 0x3e) {
          FUN_017d13d0(&local_80,param_2,iVar6,param_1,1,3,4,1,1);
        }
        else {
          FUN_017d13d0(&local_80,param_2,iVar6,param_1,1,2,1,1,1);
        }
        dVar11 = dVar11 + local_80 * local_80 + local_78 * local_78;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
        dVar10 = dVar11;
      } while (iVar5 != 0);
    }
    uVar12 = FUN_0040c760(dVar10);
    FUN_01d04c40(param_1,0,0);
    FUN_01d04c80(param_1,uVar12);
    return;
  }
  if (uVar3 < 0x68) {
    if (uVar3 == 0x67) {
      iVar5 = FUN_014b8310(*(undefined8 *)PTR_DAT_02002d98,*(undefined4 *)PTR_DAT_02001240,param_1);
      if (*(char *)(*(longlong *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)PTR_DAT_02002d98 + -8 + (longlong)iVar5 * 8) +
                       0x60) + 0x50) + 0x80) != '\0') {
        FUN_01d04c40(param_1,1,1);
        return;
      }
      FUN_01d04c40(param_1,1,0);
      return;
    }
    if (uVar3 != 0x3f) {
      if (uVar3 == 0x43) goto LAB_0139aa80;
      if (uVar3 == 0x5f) {
        (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_68);
        if ((*(char *)local_68 != '\x01') &&
           (iVar5 = FUN_014b8310(*(undefined8 *)PTR_DAT_02002d98,*(undefined4 *)PTR_DAT_02001240,
                                 param_1),
           *(double *)
            (*(longlong *)
              (**(longlong **)
                 (*(longlong *)(*(longlong *)PTR_DAT_02002d98 + -8 + (longlong)iVar5 * 8) + 0x40) +
              0x18) + 8) != 0.0)) {
          FUN_01d04c40(param_1,0,0);
          return;
        }
        FUN_01d04c40(param_1,0,1);
        return;
      }
      if (uVar3 != 0x66) {
        return;
      }
      goto LAB_0139af85;
    }
  }
  else if (uVar3 != 0x6a) {
    if (uVar3 != 0x6b) {
      if (uVar3 != 0x6f) {
        if (uVar3 != 0x71) {
          return;
        }
LAB_0139abd8:
        FUN_017d13d0(local_98,param_2,0,param_1,1,1,2,1,1);
        (**(code **)(*param_1 + 0x2d0))(param_1,6,&local_68);
        cVar1 = *(char *)local_68;
        FUN_01d04c40(param_1,0,cVar1);
        pcVar7 = (char *)FUN_01d04b90(*(undefined8 *)
                                       (*(longlong *)
                                         (*(longlong *)PTR_DAT_02002d98 + -8 +
                                         (longlong)local_5c[0] * 8) + 0x128));
        local_84 = *pcVar7;
        if ((cVar1 == '\0') && (local_84 != '\0')) {
          FUN_01d04c40(param_1,1,1);
          return;
        }
        FUN_01d04c40(param_1,1,0);
        return;
      }
LAB_0139a4f3:
      dVar11 = (double)FUN_01397060(param_2,param_1,1,1,1,2,1,1);
      (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_68);
      dVar10 = *local_68;
      (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_68);
      cVar1 = *(char *)local_68;
      iVar5 = FUN_0040c840((dVar11 * 0.999) / (dVar10 / 14.0));
      if ((iVar5 < 0xe) && (cVar1 == '\0')) {
        FUN_01d04c40(param_1,0,0);
        FUN_01d04c40(param_1,1,iVar5);
        return;
      }
      FUN_01d04c40(param_1,0,1);
      FUN_01d04c40(param_1,1,0xe);
      return;
    }
LAB_0139a7da:
    dVar10 = (double)FUN_01397060(param_2,param_1,1,1,1,2,1,1);
    (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_68);
    FUN_0040c850(*local_68 * *local_68);
    dVar11 = (double)FUN_0040c760();
    if (dVar11 * 1.005 < dVar10) {
      FUN_01d04c40(param_1,0,1);
      FUN_01d04c40(param_1,1,1);
      return;
    }
    FUN_01d04c40(param_1,0,0);
    FUN_01d04c40(param_1,1,0);
    return;
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_68);
  bVar2 = *(byte *)local_68;
  if (bVar2 < 4) {
    if (bVar2 == 3) {
      (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_68);
      FUN_01d350f0(*(undefined8 *)(param_2 + 0x4c0),local_68,local_5c);
      sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
      uVar13 = (uint3)(in_stack_ffffffffffffff28 >> 8);
      if (sVar4 == 0x3f) {
        FUN_017d13d0(&local_80,param_2,local_5c[0],param_1,(uint)uVar13 << 8,1,2,2,1);
      }
      else {
        FUN_017d13d0(&local_80,param_2,local_5c[0],param_1,(uint)uVar13 << 8,1,2,1,1);
      }
      dVar10 = (double)FUN_00c44590(&local_80);
      if (dVar10 == 0.0) {
        uVar12 = 0x4415af1d78b58c40;
      }
      else {
        FUN_00c44790(PTR_DAT_02003900,&local_80,&local_80);
        FUN_00c44500(&local_80,PTR_DAT_02002618,&local_80);
        uVar12 = FUN_00c44590(&local_80);
      }
      FUN_01d04c40(param_1,0,0);
      FUN_01d04c80(param_1,uVar12);
      return;
    }
    if (bVar2 == 1) {
LAB_0139ad09:
      FUN_017d13d0(local_98,param_2,0,param_1,bVar2 == 1,1,2,1,1);
      FUN_01d04c40(param_1,0,0);
      FUN_01d04c80(param_1,local_98[0]);
      return;
    }
    if (bVar2 != 2) {
      return;
    }
  }
  else {
    if (bVar2 == 4) goto LAB_0139ad09;
    if (bVar2 != 5) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_70);
  dVar10 = (double)FUN_01397060(param_2,param_1,*(char *)local_68 == '\x02',*local_70 == '\0',1,2,1,
                                1);
  FUN_017d13d0(local_98,param_2,0,param_1,*(char *)local_68 == '\x02',1,2,1,1);
  uVar12 = FUN_0040c760(dVar10 * dVar10 - local_98[0] * local_98[0]);
  FUN_01d04c40(param_1,0,0);
  FUN_01d04c80(param_1,uVar12);
  return;
}

