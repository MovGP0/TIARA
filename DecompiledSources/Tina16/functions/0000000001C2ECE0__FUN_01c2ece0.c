/* Ghidra address: 01c2ece0 */
/* Ghidra symbol: FUN_01c2ece0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c2ece0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*DAT_03565e78 + 0x10))(DAT_03565e78);
  iVar5 = *(int *)(DAT_03565e70 + 0x10);
  DAT_021114ec = 0;
  if (-1 < iVar5 + -1) {
    do {
      FUN_004ae7e0(DAT_03565e78,
                   *(undefined8 *)(*(longlong *)(DAT_03565e70 + 8) + (longlong)DAT_021114ec * 8));
      DAT_021114ec = DAT_021114ec + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_01c2e020(DAT_03565e78);
  FUN_01c2e080(DAT_03565e78);
  FUN_01c2de90(DAT_03565e78);
  FUN_01c2dfd0(DAT_03565e78);
  _DAT_02111550 = 0x4e01;
  FUN_00414ad0(&DAT_02111548,L"No Process");
  if ((int)DAT_03565e78[2] == DAT_0211150c) {
    FUN_004af4a0(DAT_03565e78,FUN_01c29c70);
    FUN_01c2c400(DAT_03565e78,&local_20);
    FUN_00414ad0(&DAT_02111510,local_20);
    cVar2 = FUN_01c2e0e0(DAT_03565e78);
    if (cVar2 != '\0') {
      FUN_004af4a0(DAT_03565e78,FUN_01c29c80);
      FUN_01c2c400(DAT_03565e78,&local_28);
      FUN_00414ad0(&DAT_02111518,local_28);
      iVar5 = FUN_00416db0(DAT_02111510,DAT_02111518);
      if (iVar5 == 0) {
        FUN_00414ad0(&DAT_02111548,L"No errors");
        _DAT_02111550 = 0x4101;
      }
      else {
        FUN_00414ad0(&DAT_02111548,L"Error 2");
      }
    }
    iVar5 = FUN_00416db0(DAT_02111548,L"No errors");
    if (iVar5 != 0) {
      cVar2 = FUN_01c2e160(DAT_03565e78);
      if (cVar2 == '\0') {
        FUN_00414ad0(&DAT_02111548,L"Error 1");
      }
      else {
        FUN_004af4a0(DAT_03565e78,FUN_01c29c70);
        FUN_01c2c400(DAT_03565e78,&local_30);
        FUN_00414ad0(&DAT_02111510,local_30);
        _DAT_02111550 = 0x4201;
        FUN_00414ad0(&DAT_02111548,L"No errors");
      }
    }
  }
  if (DAT_0211150c < (int)DAT_03565e78[2]) {
    DAT_02111b58 = 0;
    do {
      (**(code **)(*DAT_03565e78 + 0x10))(DAT_03565e78);
      iVar5 = *(int *)(DAT_03565e70 + 0x10);
      DAT_021114ec = 0;
      if (-1 < iVar5 + -1) {
        do {
          FUN_004ae7e0(DAT_03565e78,
                       *(undefined8 *)(*(longlong *)(DAT_03565e70 + 8) + (longlong)DAT_021114ec * 8)
                      );
          *(undefined1 *)(*(longlong *)(DAT_03565e78[1] + (longlong)DAT_021114ec * 8) + 0x4e) = 0;
          DAT_021114ec = DAT_021114ec + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar5 = DAT_02111b58 + DAT_0211150c + -1;
      DAT_021114ec = DAT_02111b58;
      if (DAT_02111b58 <= iVar5) {
        iVar5 = (iVar5 - DAT_02111b58) + 1;
        do {
          *(undefined1 *)(*(longlong *)(DAT_03565e78[1] + (longlong)DAT_021114ec * 8) + 0x4e) = 1;
          DAT_021114ec = DAT_021114ec + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_01c2dfd0(DAT_03565e78);
      FUN_004af4a0(DAT_03565e78,FUN_01c29c70);
      FUN_01c2c400(DAT_03565e78,&local_38);
      FUN_00414ad0(&DAT_02111510,local_38);
      cVar2 = FUN_01c2e0e0(DAT_03565e78);
      if (cVar2 != '\0') {
        FUN_004af4a0(DAT_03565e78,FUN_01c29c80);
        FUN_01c2c400(DAT_03565e78,&local_40);
        FUN_00414ad0(&DAT_02111518,local_40);
        iVar5 = FUN_00416db0(DAT_02111510,DAT_02111518);
        if (iVar5 == 0) {
          FUN_00414ad0(&DAT_02111548,L"No errors");
          _DAT_02111550 = 0x4101;
        }
        else {
          FUN_00414ad0(&DAT_02111548,L"Error 2");
        }
      }
      iVar5 = FUN_00416db0(DAT_02111548,L"No errors");
      if (iVar5 != 0) {
        cVar2 = FUN_01c2e160(DAT_03565e78);
        if (cVar2 == '\0') {
          FUN_00414ad0(&DAT_02111548,L"Error 1");
        }
        else {
          FUN_004af4a0(DAT_03565e78,FUN_01c29c70);
          FUN_01c2c400(DAT_03565e78,&local_48);
          FUN_00414ad0(&DAT_02111510,local_48);
          _DAT_02111550 = 0x4201;
          FUN_00414ad0(&DAT_02111548,L"No errors");
        }
      }
      DAT_02111b58 = DAT_02111b58 + 1;
    } while ((DAT_02111b58 + DAT_0211150c + -1 <= *(int *)(DAT_03565e70 + 0x10) + -1) &&
            (iVar5 = FUN_00416db0(DAT_02111548,L"No errors"), iVar5 != 0));
  }
  iVar5 = FUN_00416db0(DAT_02111548,L"No errors");
  if (iVar5 != 0) {
    (**(code **)(*DAT_03565e78 + 0x10))(DAT_03565e78);
    iVar5 = *(int *)(DAT_03565e70 + 0x10);
    DAT_021114ec = 0;
    if (-1 < iVar5 + -1) {
      do {
        FUN_004ae7e0(DAT_03565e78,
                     *(undefined8 *)(*(longlong *)(DAT_03565e70 + 8) + (longlong)DAT_021114ec * 8));
        DAT_021114ec = DAT_021114ec + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_01c2e020(DAT_03565e78);
    FUN_01c2e080(DAT_03565e78);
    FUN_01c2df10(DAT_03565e78,DAT_0211150c);
    FUN_01c2dfd0(DAT_03565e78);
    if ((DAT_0211150c == (int)DAT_03565e78[2]) &&
       (cVar2 = FUN_01c2e0e0(DAT_03565e78), cVar2 != '\0')) {
      FUN_004af4a0(DAT_03565e78,FUN_01c29c80);
      FUN_01c2c400(DAT_03565e78,&local_50);
      FUN_00414ad0(&DAT_02111510,local_50);
      _DAT_02111550 = 0x4301;
      FUN_00414ad0(&DAT_02111548,L"No errors");
    }
    else {
      FUN_00414ad0(&DAT_02111548,L"Error 3");
    }
  }
  iVar5 = FUN_00416db0(DAT_02111548,L"No errors");
  if (iVar5 != 0) {
    if (DAT_01fe5bb1 == '\0') {
      FUN_01c2d830(DAT_03565e70,DAT_03565e48);
    }
    else {
      FUN_01c2d830(DAT_03565e70,DAT_03565e60);
    }
    (**(code **)(*DAT_03565e78 + 0x10))(DAT_03565e78);
    iVar5 = *(int *)(DAT_03565e70 + 0x10);
    DAT_021114ec = 0;
    if (-1 < iVar5 + -1) {
      do {
        FUN_004ae7e0(DAT_03565e78,
                     *(undefined8 *)(*(longlong *)(DAT_03565e70 + 8) + (longlong)DAT_021114ec * 8));
        DAT_021114ec = DAT_021114ec + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_01c2e020(DAT_03565e78);
    FUN_01c2e080(DAT_03565e78);
    FUN_01c2df10(DAT_03565e78,DAT_0211150c);
    FUN_01c2dfd0(DAT_03565e78);
    if ((DAT_0211150c == (int)DAT_03565e78[2]) &&
       (cVar2 = FUN_01c2e0e0(DAT_03565e78), cVar2 != '\0')) {
      FUN_004af4a0(DAT_03565e78,FUN_01c29c80);
      FUN_01c2c400(DAT_03565e78,&local_58);
      FUN_00414ad0(&DAT_02111510,local_58);
      _DAT_02111550 = 0x4301;
      FUN_00414ad0(&DAT_02111548,L"No errors");
    }
    else {
      FUN_00414ad0(&DAT_02111548,L"Error 3");
    }
  }
  iVar5 = FUN_00416db0(DAT_02111548,L"No errors");
  if (iVar5 != 0) {
    iVar5 = (**(code **)(*DAT_03565e50 + 0x28))();
    DAT_021114ec = 0;
    if (-1 < iVar5 + -1) {
      do {
        (**(code **)(*DAT_03565e50 + 0x18))(DAT_03565e50,&local_68,DAT_021114ec);
        FUN_0043e130(&local_60,local_68);
        iVar3 = FUN_004170c0(L".SUBCKT",local_60,1);
        if (iVar3 == 1) {
          (**(code **)(*DAT_03565e50 + 0x18))(DAT_03565e50,&local_70,DAT_021114ec);
          FUN_00414b50(param_1 + 0x2e8,local_70);
          *(int *)(param_1 + 0x2dc) = DAT_021114ec;
        }
        else {
          (**(code **)(*DAT_03565e50 + 0x18))(DAT_03565e50,&local_80,DAT_021114ec);
          FUN_0043e130(&local_78,local_80);
          iVar3 = FUN_004170c0(&DAT_01c2fa7c,local_78,1);
          if (iVar3 == 1) {
            (**(code **)(*DAT_03565e50 + 0x18))(DAT_03565e50,&local_88,DAT_021114ec);
            FUN_00414b50(param_1 + 0x2e0,local_88);
            *(int *)(param_1 + 0x2d8) = DAT_021114ec;
          }
          else {
            (**(code **)(*DAT_03565e50 + 0x18))(DAT_03565e50,&local_98,DAT_021114ec);
            FUN_0043e130(&local_90,local_98);
            iVar3 = FUN_004170c0(L".ENDS",local_90,1);
            if (iVar3 == 1) {
              *(int *)(param_1 + 0x2d4) = DAT_021114ec;
            }
          }
        }
        DAT_021114ec = DAT_021114ec + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if ((*(int *)(param_1 + 0x2d8) + -1 == *(int *)(param_1 + 0x2dc)) &&
       (*(int *)(param_1 + 0x2d8) + 1 == *(int *)(param_1 + 0x2d4))) {
      uVar4 = FUN_004170c0(&LAB_01c2faa4,*(undefined8 *)(param_1 + 0x2e8),1);
      FUN_01c29c00(param_1 + 0x2e8,1,uVar4);
      uVar4 = FUN_004170c0(&LAB_01c2faa4,*(undefined8 *)(param_1 + 0x2e8),1);
      FUN_01c29c00(param_1 + 0x2e8,1,uVar4);
      uVar4 = FUN_004170c0(&LAB_01c2faa4,*(undefined8 *)(param_1 + 0x2e0),1);
      FUN_01c29c00(param_1 + 0x2e0,1,uVar4);
      while (**(short **)(param_1 + 0x2e8) == 0x20) {
        FUN_01c29c00(param_1 + 0x2e8,1,1);
      }
      while( true ) {
        lVar1 = *(longlong *)(param_1 + 0x2e8);
        iVar5 = 0;
        if (lVar1 != 0) {
          iVar5 = *(int *)(lVar1 + -4);
        }
        if (*(short *)(*(longlong *)(param_1 + 0x2e8) + -2 + (longlong)iVar5 * 2) != 0x20) break;
        uVar4 = 0;
        if (lVar1 != 0) {
          uVar4 = *(undefined4 *)(lVar1 + -4);
        }
        FUN_01c29c00(param_1 + 0x2e8,uVar4,1);
      }
      iVar5 = FUN_004170c0(*(undefined8 *)(param_1 + 0x2e8),*(undefined8 *)(param_1 + 0x2e0),1);
      if (iVar5 != 0) {
        uVar4 = 0;
        if (*(longlong *)(param_1 + 0x2e8) != 0) {
          uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x2e8) + -4);
        }
        FUN_01c29c00(param_1 + 0x2e0,1,uVar4);
        while (**(short **)(param_1 + 0x2e0) == 0x20) {
          FUN_01c29c00(param_1 + 0x2e0,1,1);
        }
        while( true ) {
          lVar1 = *(longlong *)(param_1 + 0x2e0);
          iVar5 = 0;
          if (lVar1 != 0) {
            iVar5 = *(int *)(lVar1 + -4);
          }
          if (*(short *)(*(longlong *)(param_1 + 0x2e0) + -2 + (longlong)iVar5 * 2) != 0x20) break;
          uVar4 = 0;
          if (lVar1 != 0) {
            uVar4 = *(undefined4 *)(lVar1 + -4);
          }
          FUN_01c29c00(param_1 + 0x2e0,uVar4,1);
        }
        DAT_021114ec = (**(code **)(*DAT_02111b80 + 0xb0))
                                 (DAT_02111b80,*(undefined8 *)(param_1 + 0x2e0));
        if (-1 < DAT_021114ec) {
          (**(code **)(*DAT_02111b88 + 0x18))(DAT_02111b88,&local_a0,DAT_021114ec);
          FUN_00414ad0(&DAT_02111510,local_a0);
          FUN_00414ad0(&DAT_02111548,L"No errors");
        }
      }
    }
  }
  FUN_00414560(&local_a0,0x11);
  return;
}

