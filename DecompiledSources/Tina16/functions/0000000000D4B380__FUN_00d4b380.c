/* Ghidra address: 00d4b380 */
/* Ghidra symbol: FUN_00d4b380 */


void FUN_00d4b380(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined7 uVar13;
  uint uVar14;
  undefined8 uVar15;
  int local_84;
  int local_7c;
  undefined1 local_78 [20];
  undefined1 local_64 [32];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [12];
  
  plVar9 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar9 + 0x90))(plVar9);
  if (cVar1 != '\0') {
    uVar2 = thunk_FUN_04118143(*(undefined8 *)(param_1 + 8),0xfffffff0);
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x41a,0,&local_44);
    iVar5 = local_3c;
    iVar3 = local_44;
    uVar12 = 0;
    if ((uVar2 & 2) == 0) {
      plVar9 = (longlong *)FUN_00781840();
      (**(code **)(*plVar9 + 0x210))(plVar9,local_34,2);
      uVar10 = FUN_00781840();
      uVar11 = FUN_005ffa40(param_2);
      uVar15 = 0;
      FUN_00778dc0(uVar10,uVar11,local_34,&local_44,0,0);
    }
    else {
      local_44 = local_40;
      local_40 = iVar3;
      local_3c = local_38;
      local_38 = iVar5;
      plVar9 = (longlong *)FUN_00781840();
      (**(code **)(*plVar9 + 0x210))(plVar9,local_34,3);
      uVar10 = FUN_00781840();
      uVar11 = FUN_005ffa40(param_2);
      uVar15 = 0;
      FUN_00778dc0(uVar10,uVar11,local_34,&local_44,0,0);
    }
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x41a,0,&local_44);
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x419,0,local_64);
    uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
    if ((uVar2 & 0x10) == 0) {
      iVar3 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x410,0,0);
      uVar10 = FUN_00781840();
      uVar4 = FUN_00778bd0(uVar10,0xff000012,0);
      FUN_005fd4e0(param_2[0xf],uVar4);
      if ((uVar2 & 2) == 0) {
        iVar5 = FUN_004230a0(local_64);
        local_7c = local_44 + iVar5 / 2;
        if (((uVar2 & 4) == 4) || ((uVar2 & 8) == 8)) {
          (**(code **)(*param_2 + 200))(param_2,local_7c,local_40 + -7);
          (**(code **)(*param_2 + 0xc0))(param_2,local_7c,local_40 + -3);
        }
        if (((uVar2 & 4) == 0) || ((uVar2 & 8) == 8)) {
          (**(code **)(*param_2 + 200))(param_2,local_7c,local_38 + 3);
          (**(code **)(*param_2 + 0xc0))(param_2,local_7c,local_38 + 7);
        }
      }
      else {
        iVar5 = FUN_004230c0(local_64);
        local_7c = local_44 + iVar5 / 2;
        if (((uVar2 & 4) == 4) || ((uVar2 & 8) == 8)) {
          (**(code **)(*param_2 + 200))(param_2,local_40 + -7,local_7c);
          (**(code **)(*param_2 + 0xc0))(param_2,local_40 + -3,local_7c);
        }
        if (((uVar2 & 4) == 0) || ((uVar2 & 8) == 8)) {
          (**(code **)(*param_2 + 200))(param_2,local_38 + 3,local_7c);
          (**(code **)(*param_2 + 0xc0))(param_2,local_38 + 7,local_7c);
        }
      }
      if ((uVar2 & 2) == 0) {
        iVar5 = FUN_004230a0(local_64);
        uVar14 = local_3c - iVar5 / 2;
        if (((uVar2 & 4) == 4) || ((uVar2 & 8) == 8)) {
          (**(code **)(*param_2 + 200))(param_2,uVar14,local_40 + -7);
          (**(code **)(*param_2 + 0xc0))(param_2,uVar14,local_40 + -3);
        }
        if (((uVar2 & 4) == 0) || ((uVar2 & 8) == 8)) {
          (**(code **)(*param_2 + 200))(param_2,uVar14,local_38 + 3);
          (**(code **)(*param_2 + 0xc0))(param_2,uVar14,local_38 + 7);
        }
      }
      else {
        iVar5 = FUN_004230c0(local_64);
        uVar14 = local_3c - iVar5 / 2;
        if (((uVar2 & 4) == 4) || ((uVar2 & 8) == 8)) {
          (**(code **)(*param_2 + 200))(param_2,local_40 + -7,uVar14);
          (**(code **)(*param_2 + 0xc0))(param_2,local_40 + -3,uVar14);
        }
        if (((uVar2 & 4) == 0) || ((uVar2 & 8) == 8)) {
          (**(code **)(*param_2 + 200))(param_2,local_38 + 3,uVar14);
          (**(code **)(*param_2 + 0xc0))(param_2,local_38 + 7,uVar14);
        }
      }
      uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
      uVar12 = (ulonglong)uVar14;
      iVar5 = iVar3 + -1;
      local_84 = 1;
      if (0 < iVar5) {
        do {
          iVar6 = FUN_0040c770((double)(int)(uVar14 - local_7c) *
                               ((double)local_84 / (double)(iVar3 + -1)));
          iVar6 = local_7c + iVar6;
          if ((uVar2 & 2) == 0) {
            if (((uVar2 & 4) == 4) || ((uVar2 & 8) == 8)) {
              (**(code **)(*param_2 + 200))(param_2,iVar6,local_40 + -6);
              (**(code **)(*param_2 + 0xc0))(param_2,iVar6,local_40 + -3);
            }
            if (((uVar2 & 4) == 0) || ((uVar2 & 8) == 8)) {
              (**(code **)(*param_2 + 200))(param_2,iVar6,local_38 + 3);
              (**(code **)(*param_2 + 0xc0))(param_2,iVar6,local_38 + 6);
            }
          }
          else {
            if (((uVar2 & 4) == 4) || ((uVar2 & 8) == 8)) {
              (**(code **)(*param_2 + 200))(param_2,local_40 + -6,iVar6);
              (**(code **)(*param_2 + 0xc0))(param_2,local_40 + -3,iVar6);
            }
            if (((uVar2 & 4) == 0) || ((uVar2 & 8) == 8)) {
              (**(code **)(*param_2 + 200))(param_2,local_38 + 3,iVar6);
              (**(code **)(*param_2 + 0xc0))(param_2,local_38 + 6,iVar6);
            }
          }
          uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
          local_84 = local_84 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    if ((uVar2 & 0x80) == 0) {
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x419,0,&local_44);
      cVar1 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
      uVar13 = (undefined7)(uVar12 >> 8);
      if (cVar1 == '\0') {
        if ((uVar2 & 2) == 0) {
          if ((uVar2 & 8) == 8) {
            uVar4 = (undefined4)CONCAT71(uVar13,8);
          }
          else if ((uVar2 & 4) == 4) {
            uVar4 = (undefined4)CONCAT71(uVar13,0x12);
          }
          else {
            uVar4 = (undefined4)CONCAT71(uVar13,0xd);
          }
        }
        else {
          uVar4 = (undefined4)CONCAT71(uVar13,0x21);
          if ((uVar2 & 4) == 4) {
            uVar4 = (undefined4)CONCAT71(uVar13,0x1c);
          }
          else if ((uVar2 & 8) == 8) {
            uVar4 = (undefined4)CONCAT71(uVar13,0x17);
          }
        }
      }
      else if (*(char *)(param_1 + 0x61) == '\0') {
        if (*(char *)(param_1 + 0x60) == '\0') {
          if ((uVar2 & 2) == 0) {
            if ((uVar2 & 8) == 8) {
              uVar4 = (undefined4)CONCAT71(uVar13,4);
            }
            else if ((uVar2 & 4) == 4) {
              uVar4 = (undefined4)CONCAT71(uVar13,0xe);
            }
            else {
              uVar4 = (undefined4)CONCAT71(uVar13,9);
            }
          }
          else {
            uVar4 = (undefined4)CONCAT71(uVar13,0x1d);
            if ((uVar2 & 4) == 4) {
              uVar4 = (undefined4)CONCAT71(uVar13,0x18);
            }
            else if ((uVar2 & 8) == 8) {
              uVar4 = (undefined4)CONCAT71(uVar13,0x13);
            }
          }
        }
        else if ((uVar2 & 2) == 0) {
          if ((uVar2 & 8) == 8) {
            uVar4 = (undefined4)CONCAT71(uVar13,5);
          }
          else if ((uVar2 & 4) == 4) {
            uVar4 = (undefined4)CONCAT71(uVar13,0xf);
          }
          else {
            uVar4 = (undefined4)CONCAT71(uVar13,10);
          }
        }
        else {
          uVar4 = (undefined4)CONCAT71(uVar13,0x1e);
          if ((uVar2 & 4) == 4) {
            uVar4 = (undefined4)CONCAT71(uVar13,0x19);
          }
          else if ((uVar2 & 8) == 8) {
            uVar4 = (undefined4)CONCAT71(uVar13,0x14);
          }
        }
      }
      else if ((uVar2 & 2) == 0) {
        if ((uVar2 & 8) == 8) {
          uVar4 = (undefined4)CONCAT71(uVar13,6);
        }
        else if ((uVar2 & 4) == 4) {
          uVar4 = (undefined4)CONCAT71(uVar13,0x10);
        }
        else {
          uVar4 = (undefined4)CONCAT71(uVar13,0xb);
        }
      }
      else {
        uVar4 = (undefined4)CONCAT71(uVar13,0x1f);
        if ((uVar2 & 4) == 4) {
          uVar4 = (undefined4)CONCAT71(uVar13,0x1a);
        }
        else if ((uVar2 & 8) == 8) {
          uVar4 = (undefined4)CONCAT71(uVar13,0x15);
        }
      }
      plVar9 = (longlong *)FUN_00781840();
      (**(code **)(*plVar9 + 0x210))(plVar9,local_34,uVar4);
      uVar10 = FUN_00781840();
      uVar11 = FUN_005ffa40(param_2);
      uVar4 = 0;
      FUN_00778dc0(uVar10,uVar11,local_34,&local_44,0,0);
    }
    cVar1 = FUN_00788bc0(param_1);
    if (cVar1 != '\0') {
      uVar7 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
      uVar8 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
      FUN_004238d0(local_78,0,0,uVar7,CONCAT44(uVar4,uVar8));
      (**(code **)(*param_2 + 0x98))(param_2,local_78);
    }
  }
  return;
}

