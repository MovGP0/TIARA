/* Ghidra address: 01696780 */
/* Ghidra symbol: FUN_01696780 */


void FUN_01696780(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_180 [64];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_2c;
  undefined4 *local_28;
  undefined8 local_20;
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20 = 0;
  local_28 = (undefined4 *)0x0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + -1;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  FUN_00416780(&local_20,*(undefined2 *)(param_1 + 0x30));
  FUN_01696200(param_1,1);
  while (cVar1 = FUN_00c53600(*(undefined2 *)(param_1 + 0x30)), cVar1 != '\0') {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    FUN_00416780(local_40,*(undefined2 *)(param_1 + 0x30));
    FUN_00416ad0(&local_20,local_40[0]);
    FUN_01696200(param_1,1);
  }
  if (*(short *)(param_1 + 0x30) == 0x2e) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    FUN_00416780(&local_48,*(undefined2 *)(param_1 + 0x30));
    FUN_00416ad0(&local_20,local_48);
    FUN_01696200(param_1,1);
  }
  while (cVar1 = FUN_00c53600(*(undefined2 *)(param_1 + 0x30)), cVar1 != '\0') {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    FUN_00416780(&local_50,*(undefined2 *)(param_1 + 0x30));
    FUN_00416ad0(&local_20,local_50);
    FUN_01696200(param_1,1);
  }
  uVar3 = *(ushort *)(param_1 + 0x30);
  if ((ushort)(uVar3 - 0x61) < 0x1a) {
    uVar3 = uVar3 & 0xffdf;
  }
  if (uVar3 == 0x45) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0x30));
    FUN_00416ad0(&local_20,local_58);
    FUN_01696200(param_1,1);
    if ((*(short *)(param_1 + 0x30) == 0x2b) || (*(short *)(param_1 + 0x30) == 0x2d)) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      FUN_00416780(&local_60,*(undefined2 *)(param_1 + 0x30));
      FUN_00416ad0(&local_20,local_60);
      FUN_01696200(param_1,1);
    }
    while (cVar1 = FUN_00c53600(*(undefined2 *)(param_1 + 0x30)), cVar1 != '\0') {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0x30));
      FUN_00416ad0(&local_20,local_68);
      FUN_01696200(param_1,1);
    }
  }
  if ((*(int *)(param_1 + 0x318) == 1) || (*(int *)(param_1 + 0x318) == 2)) {
    FUN_00414480(&local_28);
    uVar3 = *(ushort *)(param_1 + 0x30);
    if ((ushort)(uVar3 - 0x61) < 0x1a) {
      uVar3 = uVar3 & 0xffdf;
    }
    *(ushort *)(param_1 + 0x30) = uVar3;
    if ((ushort)(uVar3 - 0x40) < 0x20) {
      bVar5 = (1 << ((byte)(uVar3 - 0x40) & 0x1f) & 0x3168c0U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      FUN_00416780(&local_70,*(undefined2 *)(param_1 + 0x30));
      FUN_00416ad0(&local_28,local_70);
      uVar2 = FUN_01696200(param_1,1);
      uVar3 = *(short *)(param_1 + 0x30) - 0x40;
      if (uVar3 < 0x10) {
        bVar5 = ((int)CONCAT62((int6)((ulonglong)uVar2 >> 0x10),1) << ((byte)uVar3 & 0x1f) & 0x220U)
                != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        FUN_00416780(&local_78,*(undefined2 *)(param_1 + 0x30));
        FUN_00416ad0(&local_28,local_78);
        uVar2 = FUN_01696200(param_1,1);
        uVar3 = *(short *)(param_1 + 0x30) - 0x40;
        if (uVar3 < 0x10) {
          bVar5 = ((int)CONCAT62((int6)((ulonglong)uVar2 >> 0x10),1) << ((byte)uVar3 & 0x1f) &
                  0x1080U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          FUN_00416780(&local_80,*(undefined2 *)(param_1 + 0x30));
          FUN_00416ad0(&local_28,local_80);
          FUN_01696200(param_1,1);
        }
      }
    }
  }
  uVar2 = FUN_00410100(local_20,&local_2c);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  if (local_2c == 0) {
    iVar4 = 0x105;
  }
  else {
    iVar4 = 0x103;
  }
  if ((iVar4 == 0x105) &&
     (((*(int *)(param_1 + 0x318) == 1 || (*(int *)(param_1 + 0x318) == 2)) &&
      (local_28 != (undefined4 *)0x0)))) {
    FUN_00416910(local_180,local_28,0xff);
    cVar1 = FUN_010ccf90(local_180);
    if (cVar1 == '\0') {
      iVar4 = 0x103;
    }
    else {
      FUN_00416910(local_180,local_28,0xff);
      uVar2 = FUN_010cd010(*(undefined8 *)(param_1 + 0x98),local_180);
      *(undefined8 *)(param_1 + 0x98) = uVar2;
    }
  }
  if (((iVar4 == 0x105) && (*(char *)(param_1 + 0x32c) == '\0')) &&
     ((*(int *)(param_1 + 0x318) == 1 || (*(int *)(param_1 + 0x318) == 2)))) {
    while (cVar1 = FUN_00c535d0(*(undefined2 *)(param_1 + 0x30)), cVar1 != '\0') {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      FUN_01696200(param_1,1);
    }
  }
  FUN_00c53470(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x98),iVar4,param_1 + 0x20)
  ;
  FUN_00414560(&local_80,9);
  FUN_00414560(&local_28,2);
  return;
}

