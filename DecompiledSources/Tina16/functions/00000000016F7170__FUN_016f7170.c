/* Ghidra address: 016f7170 */
/* Ghidra symbol: FUN_016f7170 */


void FUN_016f7170(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  short sVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  double dVar9;
  
  lVar5 = *(longlong *)(param_1 + 0x140);
  cVar2 = *(char *)(lVar5 + 0x4c8);
  if (cVar2 == '\a') {
    iVar3 = *(int *)(lVar5 + 0x4dc);
    iVar4 = *(int *)(lVar5 + 0x4e0);
    *(double *)(param_1 + 0xe8) =
         *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x118) + (longlong)iVar3 * 8) -
         *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x118) + (longlong)iVar4 * 8);
    *(double *)(param_1 + 0xf0) =
         *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x120) + (longlong)iVar3 * 8) -
         *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x120) + (longlong)iVar4 * 8);
  }
  else if (cVar2 == '\b') {
    uVar7 = FUN_01b05690(*(undefined8 *)(lVar5 + 0x4d0),1,1);
    *(undefined4 *)(param_1 + 0xe4) = uVar7;
    *(undefined8 *)(param_1 + 0xe8) =
         *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x118) +
          (longlong)*(int *)(param_1 + 0xe4) * 8);
    *(undefined8 *)(param_1 + 0xf0) =
         *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x120) +
          (longlong)*(int *)(param_1 + 0xe4) * 8);
  }
  else if (cVar2 == '\x05') {
    uVar8 = FUN_01b05ad0(*(undefined8 *)(lVar5 + 0x4d0),2,1,param_1 + 0xff,param_1 + 0xfe,
                         param_1 + 0xfd);
    *(undefined8 *)(param_1 + 0xd8) = uVar8;
    *(undefined8 *)(param_1 + 0xd0) = **(undefined8 **)(param_1 + 0xd8);
    uVar8 = FUN_01b05ad0(*(undefined8 *)(lVar5 + 0x4d0),2,3,param_1 + 0xff,param_1 + 0xfe,
                         param_1 + 0xfd);
    *(undefined8 *)(param_1 + 0xd8) = uVar8;
    *(undefined8 *)(param_1 + 200) = **(undefined8 **)(param_1 + 0xd8);
    if (*(char *)(*(longlong *)(param_1 + 0x140) + 0x12f4) == '\x01') {
      dVar9 = (double)FUN_0040bcd0(*(double *)(param_1 + 200) * 0.017453292519943295);
      *(double *)(param_1 + 0xe8) = *(double *)(param_1 + 0xd0) * dVar9;
      dVar9 = (double)FUN_0040bdd0(*(double *)(param_1 + 200) * 0.017453292519943295);
      *(double *)(param_1 + 0xf0) = *(double *)(param_1 + 0xd0) * dVar9;
    }
    else {
      dVar9 = (double)FUN_0040bdd0(*(double *)(param_1 + 200) * 0.017453292519943295);
      *(double *)(param_1 + 0xe8) = -*(double *)(param_1 + 0xd0) * dVar9;
      dVar9 = (double)FUN_0040bcd0(*(double *)(param_1 + 200) * 0.017453292519943295);
      *(double *)(param_1 + 0xf0) = *(double *)(param_1 + 0xd0) * dVar9;
    }
  }
  else if (cVar2 == '\x03') {
    sVar6 = (**(code **)(**(longlong **)(lVar5 + 0x4e8) + 0xf8))(*(longlong **)(lVar5 + 0x4e8));
    if (sVar6 == 0x66) {
      uVar7 = FUN_01b05600(*(undefined8 *)(lVar5 + 0x4d0),3);
      *(undefined4 *)(param_1 + 0xc4) = uVar7;
      uVar7 = FUN_01b05600(*(undefined8 *)(lVar5 + 0x4d0),1);
      *(undefined4 *)(param_1 + 0xc0) = uVar7;
    }
    else {
      uVar7 = FUN_01b05600(*(undefined8 *)(lVar5 + 0x4d0),1);
      *(undefined4 *)(param_1 + 0xc4) = uVar7;
      uVar7 = FUN_01b05600(*(undefined8 *)(lVar5 + 0x4d0),2);
      *(undefined4 *)(param_1 + 0xc0) = uVar7;
    }
    *(double *)(param_1 + 0xe8) =
         *(double *)
          (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x118) +
          (longlong)*(int *)(param_1 + 0xc4) * 8) -
         *(double *)
          (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x118) +
          (longlong)*(int *)(param_1 + 0xc0) * 8);
    *(double *)(param_1 + 0xf0) =
         *(double *)
          (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x120) +
          (longlong)*(int *)(param_1 + 0xc4) * 8) -
         *(double *)
          (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x120) +
          (longlong)*(int *)(param_1 + 0xc0) * 8);
  }
  else {
    puVar1 = (undefined8 *)(PTR_DAT_02002618 + 8);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)PTR_DAT_02002618;
    *(undefined8 *)(param_1 + 0xf0) = *puVar1;
  }
  return;
}

