/* Ghidra address: 00a25b90 */
/* Ghidra symbol: FUN_00a25b90 */


void FUN_00a25b90(longlong *param_1,int param_2,uint param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte *pbVar5;
  longlong *plVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  byte *pbVar15;
  longlong local_560;
  byte local_558 [272];
  int local_448 [258];
  
  if (3 < param_3) {
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x28) = 0x32;
    *(uint *)(lVar1 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  plVar6 = param_1 + 0x10;
  if (param_2 == 0) {
    plVar6 = param_1 + 0x14;
  }
  lVar1 = plVar6[(int)param_3];
  if (lVar1 == 0) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x32;
    *(uint *)(lVar2 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  local_560 = *param_4;
  if (local_560 == 0) {
    local_560 = (**(code **)param_1[1])(param_1,1,0x500);
    *param_4 = local_560;
  }
  uVar12 = 0;
  uVar10 = 1;
  do {
    bVar13 = *(byte *)(lVar1 + uVar10);
    if (0x100 < (int)(uVar12 + bVar13)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 8;
      (*(code *)*puVar3)(param_1);
    }
    if (bVar13 != 0) {
      FUN_00626680(local_558 + (int)uVar12,uVar10 & 0xffffffff,(ulonglong)(bVar13 - 1) + 1);
      uVar12 = uVar12 + bVar13;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x11);
  local_558[(int)uVar12] = 0;
  uVar9 = (uint)(char)local_558[0];
  if (local_558[0] != 0) {
    iVar8 = 0;
    iVar14 = 0;
    uVar4 = uVar9;
    do {
      if (uVar9 == (int)(char)uVar4) {
        piVar7 = local_448 + iVar14;
        pbVar5 = local_558 + (longlong)iVar14 + 1;
        do {
          *piVar7 = iVar8;
          iVar8 = iVar8 + 1;
          bVar13 = *pbVar5;
          piVar7 = piVar7 + 1;
          iVar14 = iVar14 + 1;
          pbVar5 = pbVar5 + 1;
        } while (uVar9 == (int)(char)bVar13);
      }
      if (1 << ((byte)uVar9 & 0x1f) <= iVar8) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 8;
        (*(code *)*puVar3)(param_1);
      }
      iVar8 = iVar8 * 2;
      uVar9 = uVar9 + 1;
      uVar4 = (uint)local_558[iVar14];
    } while (local_558[iVar14] != 0);
  }
  *(undefined8 *)(local_560 + 0x4f0) = 0;
  *(undefined8 *)(local_560 + 0x4f8) = 0;
  *(undefined8 *)(local_560 + 0x4e0) = 0;
  *(undefined8 *)(local_560 + 0x4e8) = 0;
  *(undefined8 *)(local_560 + 0x4d0) = 0;
  *(undefined8 *)(local_560 + 0x4d8) = 0;
  *(undefined8 *)(local_560 + 0x4c0) = 0;
  *(undefined8 *)(local_560 + 0x4c8) = 0;
  *(undefined8 *)(local_560 + 0x4b0) = 0;
  *(undefined8 *)(local_560 + 0x4b8) = 0;
  *(undefined8 *)(local_560 + 0x4a0) = 0;
  *(undefined8 *)(local_560 + 0x4a8) = 0;
  *(undefined8 *)(local_560 + 0x490) = 0;
  *(undefined8 *)(local_560 + 0x498) = 0;
  *(undefined8 *)(local_560 + 0x480) = 0;
  *(undefined8 *)(local_560 + 0x488) = 0;
  *(undefined8 *)(local_560 + 0x470) = 0;
  *(undefined8 *)(local_560 + 0x478) = 0;
  *(undefined8 *)(local_560 + 0x460) = 0;
  *(undefined8 *)(local_560 + 0x468) = 0;
  *(undefined8 *)(local_560 + 0x450) = 0;
  *(undefined8 *)(local_560 + 0x458) = 0;
  *(undefined8 *)(local_560 + 0x440) = 0;
  *(undefined8 *)(local_560 + 0x448) = 0;
  *(undefined8 *)(local_560 + 0x430) = 0;
  *(undefined8 *)(local_560 + 0x438) = 0;
  *(undefined8 *)(local_560 + 0x420) = 0;
  *(undefined8 *)(local_560 + 0x428) = 0;
  *(undefined8 *)(local_560 + 0x410) = 0;
  *(undefined8 *)(local_560 + 0x418) = 0;
  *(undefined8 *)(local_560 + 0x400) = 0;
  *(undefined8 *)(local_560 + 0x408) = 0;
  bVar13 = 0xff;
  if (param_2 != 0) {
    bVar13 = 0xf;
  }
  if (0 < (int)uVar12) {
    uVar10 = (ulonglong)uVar12;
    pbVar15 = (byte *)(lVar1 + 0x11);
    piVar7 = local_448;
    pbVar5 = local_558;
    do {
      uVar11 = (ulonglong)*pbVar15;
      if ((bVar13 < *pbVar15) || (*(char *)(local_560 + 0x400 + uVar11) != '\0')) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 8;
        (*(code *)*puVar3)(param_1);
      }
      *(int *)(local_560 + uVar11 * 4) = *piVar7;
      *(byte *)(local_560 + 0x400 + uVar11) = *pbVar5;
      piVar7 = piVar7 + 1;
      pbVar5 = pbVar5 + 1;
      pbVar15 = pbVar15 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

