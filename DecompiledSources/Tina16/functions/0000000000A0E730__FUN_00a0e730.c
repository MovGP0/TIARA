/* Ghidra address: 00a0e730 */
/* Ghidra symbol: FUN_00a0e730 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a0e730(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  
  puVar14 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x44] = (longlong)puVar14;
  *puVar14 = FUN_00a0ec30;
  puVar14[1] = FUN_00a0edb0;
  *(undefined4 *)(puVar14 + 2) = 0;
  FUN_00a0e410(param_1);
  puVar15 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x580);
  param_1[0x35] = (longlong)(puVar15 + 0x20);
  puVar15[0x1e] = 0;
  puVar15[0x1f] = 0;
  puVar15[0x1c] = 0;
  puVar15[0x1d] = 0;
  puVar15[0x1a] = 0;
  puVar15[0x1b] = 0;
  puVar15[0x18] = 0;
  puVar15[0x19] = 0;
  puVar15[0x16] = 0;
  puVar15[0x17] = 0;
  puVar15[0x14] = 0;
  puVar15[0x15] = 0;
  puVar15[0x12] = 0;
  puVar15[0x13] = 0;
  puVar15[0x10] = 0;
  puVar15[0x11] = 0;
  puVar15[0xe] = 0;
  puVar15[0xf] = 0;
  puVar15[0xc] = 0;
  puVar15[0xd] = 0;
  puVar15[10] = 0;
  puVar15[0xb] = 0;
  puVar15[8] = 0;
  puVar15[9] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = 0;
  puVar15[5] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  uVar10 = uRam0000000001e6edf8;
  puVar15[0x20] = _DAT_01e6edf0;
  puVar15[0x21] = uVar10;
  uVar10 = uRam0000000001e6ee08;
  puVar15[0x22] = _DAT_01e6ee00;
  puVar15[0x23] = uVar10;
  uVar10 = uRam0000000001e6ee18;
  puVar15[0x24] = _DAT_01e6ee10;
  puVar15[0x25] = uVar10;
  uVar10 = uRam0000000001e6ee28;
  puVar15[0x26] = _DAT_01e6ee20;
  puVar15[0x27] = uVar10;
  uVar10 = uRam0000000001e6ee38;
  puVar15[0x28] = _DAT_01e6ee30;
  puVar15[0x29] = uVar10;
  uVar10 = uRam0000000001e6ee48;
  puVar15[0x2a] = _DAT_01e6ee40;
  puVar15[0x2b] = uVar10;
  uVar10 = uRam0000000001e6ee58;
  puVar15[0x2c] = _DAT_01e6ee50;
  puVar15[0x2d] = uVar10;
  uVar10 = uRam0000000001e6ee68;
  puVar15[0x2e] = _DAT_01e6ee60;
  puVar15[0x2f] = uVar10;
  uVar10 = uRam0000000001e6ee78;
  puVar15[0x30] = _DAT_01e6ee70;
  puVar15[0x31] = uVar10;
  uVar10 = uRam0000000001e6ee88;
  puVar15[0x32] = _DAT_01e6ee80;
  puVar15[0x33] = uVar10;
  uVar10 = uRam0000000001e6ee98;
  puVar15[0x34] = _DAT_01e6ee90;
  puVar15[0x35] = uVar10;
  uVar10 = uRam0000000001e6eea8;
  puVar15[0x36] = _DAT_01e6eea0;
  puVar15[0x37] = uVar10;
  uVar10 = uRam0000000001e6eeb8;
  puVar15[0x38] = _DAT_01e6eeb0;
  puVar15[0x39] = uVar10;
  uVar10 = uRam0000000001e6eec8;
  puVar15[0x3a] = _DAT_01e6eec0;
  puVar15[0x3b] = uVar10;
  uVar10 = uRam0000000001e6eed8;
  puVar15[0x3c] = _DAT_01e6eed0;
  puVar15[0x3d] = uVar10;
  uVar10 = uRam0000000001e6eee8;
  puVar15[0x3e] = _DAT_01e6eee0;
  puVar15[0x3f] = uVar10;
  FUN_00626680(puVar15 + 0x40,0xff,0x180);
  uVar18 = 0;
  FUN_00626680(puVar15 + 0x70,0,0x180);
  puVar1 = (undefined8 *)param_1[0x35];
  uVar10 = puVar1[0xf];
  puVar15[0xae] = puVar1[0xe];
  puVar15[0xaf] = uVar10;
  uVar10 = puVar1[0xd];
  puVar15[0xac] = puVar1[0xc];
  puVar15[0xad] = uVar10;
  uVar10 = puVar1[0xb];
  puVar15[0xaa] = puVar1[10];
  puVar15[0xab] = uVar10;
  uVar10 = puVar1[9];
  puVar15[0xa8] = puVar1[8];
  puVar15[0xa9] = uVar10;
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];
  uVar3 = *(undefined4 *)(puVar1 + 4);
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uVar5 = *(undefined4 *)(puVar1 + 5);
  uVar6 = *(undefined4 *)((longlong)puVar1 + 0x2c);
  uVar7 = *(undefined4 *)((longlong)puVar1 + 0x34);
  uVar8 = *(undefined4 *)(puVar1 + 7);
  uVar9 = *(undefined4 *)((longlong)puVar1 + 0x3c);
  *(undefined4 *)(puVar15 + 0xa6) = *(undefined4 *)(puVar1 + 6);
  *(undefined4 *)((longlong)puVar15 + 0x534) = uVar7;
  *(undefined4 *)(puVar15 + 0xa7) = uVar8;
  *(undefined4 *)((longlong)puVar15 + 0x53c) = uVar9;
  *(undefined4 *)(puVar15 + 0xa4) = uVar3;
  *(undefined4 *)((longlong)puVar15 + 0x524) = uVar4;
  *(undefined4 *)(puVar15 + 0xa5) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x52c) = uVar6;
  puVar15[0xa2] = uVar12;
  puVar15[0xa3] = uVar13;
  puVar15[0xa0] = uVar10;
  puVar15[0xa1] = uVar11;
  *(undefined4 *)(puVar14 + 3) = 0;
  if ((((((*(int *)((longlong)param_1 + 100) == 0) && ((int)param_1[0x31] == 0)) &&
        (*(int *)((longlong)param_1 + 0x3c) == 3)) &&
       ((((int)param_1[7] == 3 && ((int)param_1[8] == 2)) &&
        (((int)param_1[0x12] == 3 &&
         ((lVar2 = param_1[0x26], *(int *)(lVar2 + 8) == 2 && (*(int *)(lVar2 + 0x68) == 1))))))))
      && (*(int *)(lVar2 + 200) == 1)) &&
     ((((*(int *)(lVar2 + 0xc) < 3 && (*(int *)(lVar2 + 0x6c) == 1)) &&
       (*(int *)(lVar2 + 0xcc) == 1)) &&
      ((iVar17 = *(int *)(lVar2 + 0x24), iVar17 == (int)param_1[0x34] &&
       (*(int *)(lVar2 + 0x84) == iVar17)))))) {
    uVar18 = (uint)(*(int *)(lVar2 + 0xe4) == iVar17);
  }
  *(uint *)((longlong)puVar14 + 0x1c) = uVar18;
  puVar14[4] = 0;
  puVar14[5] = 0;
  if (*(int *)((longlong)param_1 + 0x6c) == 0) {
    *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    iVar17 = *(int *)((longlong)param_1 + 0x5c);
  }
  else {
    if ((int)param_1[0xb] == 0) {
      *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
      *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    }
    if (*(int *)((longlong)param_1 + 0x5c) != 0) {
      puVar1 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar1 + 5) = 0x2f;
      (*(code *)*puVar1)(param_1);
    }
    if ((int)param_1[0x12] == 3) {
      if (param_1[0x14] == 0) {
        piVar16 = (int *)((longlong)param_1 + 0x84);
        if (*(int *)((longlong)param_1 + 0x74) == 0) {
          piVar16 = (int *)((longlong)param_1 + 0x7c);
        }
        *piVar16 = 1;
        iVar17 = *(int *)((longlong)param_1 + 0x7c);
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 1;
        iVar17 = *(int *)((longlong)param_1 + 0x7c);
      }
    }
    else {
      *(undefined8 *)((longlong)param_1 + 0x7c) = 1;
      *(undefined4 *)((longlong)param_1 + 0x84) = 0;
      param_1[0x14] = 0;
      iVar17 = *(int *)((longlong)param_1 + 0x7c);
    }
    if (iVar17 != 0) {
      FUN_00a11fe0(param_1);
      puVar14[4] = param_1[0x4e];
    }
    if ((*(int *)((longlong)param_1 + 0x84) != 0) || ((int)param_1[0x10] != 0)) {
      FUN_00a13620(param_1);
      puVar14[5] = param_1[0x4e];
    }
    iVar17 = *(int *)((longlong)param_1 + 0x5c);
  }
  if (iVar17 == 0) {
    if (*(int *)((longlong)puVar14 + 0x1c) == 0) {
      FUN_00a113c0(param_1);
      FUN_00a17ed0(param_1);
    }
    else {
      FUN_00a10af0(param_1);
    }
    FUN_00a17530(param_1,*(undefined4 *)((longlong)param_1 + 0x84));
  }
  FUN_00a17910(param_1);
  if (*(int *)((longlong)param_1 + 0x13c) == 0) {
    if ((int)param_1[0x27] == 0) {
      FUN_00a10480(param_1);
    }
    else {
      FUN_00a0ede0(param_1);
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar1 + 5) = 1;
    (*(code *)*puVar1)(param_1);
  }
  bVar19 = true;
  if (*(int *)(param_1[0x48] + 0x20) == 0) {
    bVar19 = (int)param_1[0xb] != 0;
  }
  FUN_00a161f0(param_1,bVar19);
  if (*(int *)((longlong)param_1 + 0x5c) == 0) {
    FUN_00a15590(param_1,0);
  }
  (**(code **)(param_1[1] + 0x30))(param_1);
  (**(code **)(param_1[0x48] + 0x10))(param_1);
  lVar2 = param_1[2];
  if (((lVar2 != 0) && ((int)param_1[0xb] == 0)) && (*(int *)(param_1[0x48] + 0x20) != 0)) {
    iVar17 = (int)param_1[7] * 3 + 2;
    if ((int)param_1[0x27] == 0) {
      iVar17 = (int)param_1[7];
    }
    *(undefined4 *)(lVar2 + 8) = 0;
    *(int *)(lVar2 + 0xc) = iVar17 * *(int *)((longlong)param_1 + 0x1a4);
    *(undefined4 *)(lVar2 + 0x10) = 0;
    *(uint *)(lVar2 + 0x14) = 3 - (uint)(*(int *)((longlong)param_1 + 0x84) == 0);
    *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + 1;
  }
  return;
}

