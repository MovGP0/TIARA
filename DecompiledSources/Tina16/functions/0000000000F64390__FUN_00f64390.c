/* Ghidra address: 00f64390 */
/* Ghidra symbol: FUN_00f64390 */


void FUN_00f64390(longlong param_1,undefined8 param_2,ushort param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_50 [2];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c [12];
  
  local_50[0] = 0;
  if (((*(char *)(param_1 + 0x80) == '\0') &&
      (lVar2 = FUN_00f75010(*(undefined8 *)(param_1 + 0x48),local_3c), lVar2 != 0)) &&
     ((param_3 & 8) != 0)) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar4);
        cVar1 = FUN_00f6f970(uVar3);
        if (cVar1 != '\0') {
          FUN_00f6f910(uVar3,1);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00f63b50(param_1);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar4);
        cVar1 = FUN_00f6f970(lVar2);
        if (cVar1 != '\0') {
          *(undefined1 *)(lVar2 + 0x40) = 1;
          FUN_00f6ece0(lVar2,param_4,param_5);
          *(undefined1 *)(lVar2 + 0x41) = 1;
          FUN_00f6f900(lVar2,0x10);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined1 *)(param_1 + 0x80) = 2;
    FUN_00f62b60(param_1,*(undefined8 *)(param_1 + 0x10));
  }
  if (((*(char *)(param_1 + 0x80) == '\x01') || (*(char *)(param_1 + 0x80) == '\x02')) &&
     ((param_3 & 0x10) == 0)) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar4);
        cVar1 = FUN_00f6f960(uVar3);
        if (cVar1 != '\0') {
          FUN_00f6ecd0(uVar3,param_4,param_5);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (*(char *)(param_1 + 0x80) == '\x01') {
      FUN_00f62b60(param_1,*(undefined8 *)(param_1 + 0x10));
      FUN_00f63290(param_1);
    }
    else if (*(char *)(param_1 + 0x80) == '\x02') {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar4);
          cVar1 = FUN_00f6f960(lVar2);
          if (cVar1 != '\0') {
            if (*(char *)(lVar2 + 0x40) == '\0') {
              FUN_00f62a80(param_1,1);
              FUN_00f63210(param_1,lVar2,lVar2 + 0x20,0xf);
              FUN_00f62a80(param_1,0);
              FUN_00f63210(param_1,lVar2,lVar2 + 0x28,0xf);
            }
            else {
              FUN_00f63210(param_1,lVar2,lVar2 + 0x28,0xf);
            }
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  if ((*(char *)(param_1 + 0x80) == '\0') && (param_3 == 0)) {
    uVar3 = FUN_00f74ae0(*(undefined8 *)(param_1 + 0x48),param_4,param_5,&local_2d,local_2c,local_40
                        );
    FUN_00f75130(*(undefined8 *)(param_1 + 0x48),uVar3);
    FUN_00f638e0(param_1);
  }
  lVar2 = FUN_00f74ae0(*(undefined8 *)(param_1 + 0x48),param_4,param_5,&local_2d,local_2c,local_40);
  if (lVar2 == 0) {
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0);
    FUN_0064dfb0(*(undefined8 *)(param_1 + 8),0);
    FUN_00414480(*(longlong *)(param_1 + 8) + 0xf0);
  }
  else {
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0x19);
    cVar1 = FUN_00f654d0(param_1);
    if ((cVar1 == '\0') && (cVar1 = FUN_00f6f8e0(lVar2), cVar1 == '\0')) {
      FUN_0064dfb0(*(undefined8 *)(param_1 + 8),1);
      FUN_00f6f6b0(lVar2,local_50);
      FUN_00414ad0(*(longlong *)(param_1 + 8) + 0xf0,local_50[0]);
    }
    else {
      FUN_0064dfb0(*(undefined8 *)(param_1 + 8),0);
      FUN_00414480(*(longlong *)(param_1 + 8) + 0xf0);
    }
  }
  if (*(char *)(param_1 + 0x80) == '\x03') {
    FUN_00f6fff0(*(undefined8 *)(param_1 + 0x38),param_4,param_5);
    uVar3 = FUN_00f6f040(*(undefined8 *)(param_1 + 0x38));
    FUN_00f65340(param_1,uVar3);
    if (*(char *)(param_1 + 0xe0) != '\0') {
      *(undefined1 *)(param_1 + 0xe0) = 0;
      cVar1 = FUN_00f70050(*(undefined8 *)(param_1 + 0x38),param_4,param_5,&local_2e);
      if (cVar1 != '\0') {
        local_38 = FUN_00f70520(*(undefined8 *)(param_1 + 0x38));
        if (PTR_DAT_02002068[2] != '\0') {
          FUN_00f607f0(&local_38);
          FUN_00f6fff0(*(undefined8 *)(param_1 + 0x38),local_38 & 0xffffffff,local_38._4_4_);
          uVar3 = FUN_00f705a0(*(undefined8 *)(param_1 + 0x38));
          FUN_00f65340(param_1,uVar3);
        }
        FUN_00f701e0(*(undefined8 *)(param_1 + 0x38),&local_38);
        FUN_00f70120(*(undefined8 *)(param_1 + 0x38),&local_38);
        FUN_00f70250(*(undefined8 *)(param_1 + 0x38),local_2e);
      }
    }
  }
  if ((*(char *)(param_1 + 0x80) == '\x04') && ((param_3 & 8) != 0)) {
    if (*(char *)(param_1 + 0x1a) == '\0') {
      FUN_00f63480(param_1,param_1 + 0x1c);
    }
    *(undefined4 *)(param_1 + 0x24) = param_4;
    *(undefined4 *)(param_1 + 0x28) = param_5;
    FUN_00f63480(param_1,param_1 + 0x1c);
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  FUN_00414480(local_50);
  return;
}

