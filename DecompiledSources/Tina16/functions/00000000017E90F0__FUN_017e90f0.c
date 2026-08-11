/* Ghidra address: 017e90f0 */
/* Ghidra symbol: FUN_017e90f0 */


void FUN_017e90f0(longlong param_1,longlong param_2,longlong param_3,undefined2 param_4,
                 undefined4 param_5,undefined8 param_6,undefined1 param_7)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [8];
  double local_b0;
  undefined1 local_88 [8];
  double local_80;
  
  FUN_00414610(param_6);
  uVar3 = *(uint *)(param_1 + 0x638);
  dVar6 = *(double *)(param_2 + 8);
  dVar5 = 4.0;
  dVar7 = (*(double *)(param_3 + 8) - dVar6) / (double)(int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar3 + 1;
  }
  FUN_00416910(local_1b8,param_6,0xff);
  FUN_013b3040(*(undefined8 *)(param_1 + 0x4e8),local_1b8,param_2);
  FUN_017e2590(param_1,param_5);
  cVar1 = FUN_017e28e0(param_1);
  if (cVar1 == '\0') {
    FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),param_4,local_88);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x30))(*(longlong **)(param_1 + 0x4e8));
    FUN_013b3ec0(*(undefined8 *)(param_1 + 0x4e8),uVar2,param_3,param_7);
    FUN_017e2590(param_1,param_5);
    FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),param_4,local_b8);
    local_80 = local_80 + local_b0;
    iVar4 = uVar3 - 1;
    if (0 < iVar4) {
      do {
        dVar6 = dVar6 + dVar7;
        *(double *)(param_2 + 8) = dVar6;
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x30))
                          (*(longlong **)(param_1 + 0x4e8));
        FUN_013b3ec0(*(undefined8 *)(param_1 + 0x4e8),uVar2,param_2,param_7);
        FUN_017e2590(param_1,param_5);
        FUN_010d37d0(*(undefined8 *)(param_1 + 0x4f0),param_4,param_2);
        if (*(char *)(param_1 + 0x508) != '\0') break;
        local_80 = local_80 + dVar5 * *(double *)(param_2 + 8);
        dVar5 = 6.0 - dVar5;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_010c7a40(param_2,(local_80 * dVar7) / 3.0);
    FUN_00c53170(*(undefined8 *)(param_1 + 0x4e8));
  }
  FUN_00414480(&param_6);
  return;
}

