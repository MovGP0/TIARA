/* Ghidra address: 00f560e0 */
/* Ghidra symbol: FUN_00f560e0 */


void FUN_00f560e0(char *param_1,longlong param_2,longlong param_3,char param_4)

{
  double dVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 in_RAX;
  bool bVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) || ((*(byte *)(param_3 + 0x88) & 0x20) != 0)) {
    if (param_4 == '\f') {
      dVar7 = (double)FUN_016ed770(param_3);
      uVar6 = FUN_0040c760((dVar7 + 273.15) * 5.5224904e-23 * *(double *)(param_1 + 0x78));
      FUN_016ed220(param_2,*param_1 + '\x03',uVar6,0);
    }
  }
  else {
    if (*(int *)(param_1 + 8) == -1) {
      uVar4 = FUN_016ee690(param_2,param_1[1],0);
      *(undefined4 *)(param_1 + 8) = uVar4;
      uVar4 = FUN_016ee690(param_2,param_1[2],0);
      *(undefined4 *)(param_1 + 0xc) = uVar4;
      uVar4 = FUN_016ee690(param_2,param_1[3],0);
      *(undefined4 *)(param_1 + 0x10) = uVar4;
      uVar4 = FUN_016ee690(param_2,param_1[4],0);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
    }
    dVar7 = *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x10) * 8);
    dVar1 = *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x14) * 8);
    dVar8 = *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 8) * 8) -
            *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0xc) * 8);
    if (*(double *)(param_1 + 0x40) <= dVar8) {
      if (dVar8 < *(double *)(param_1 + 0x48) || dVar8 == *(double *)(param_1 + 0x48)) {
        dVar9 = (dVar8 - *(double *)(param_1 + 0x28)) * *(double *)(param_1 + 0x38);
        uVar6 = FUN_0040af80(*(double *)(param_1 + 0x18) +
                             *(double *)(param_1 + 0x20) * dVar9 * (1.5 - dVar9 * dVar9 * 2.0));
        *(undefined8 *)(param_1 + 0x78) = uVar6;
        dVar9 = *(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x38) *
                (1.5 - dVar9 * dVar9 * 6.0) * *(double *)(param_1 + 0x78);
      }
      else {
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x68);
        dVar9 = 0.0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x60);
      dVar9 = 0.0;
    }
    if (*(double *)(param_1 + 0x68) < *(double *)(param_1 + 0x60) ||
        *(double *)(param_1 + 0x68) == *(double *)(param_1 + 0x60)) {
      param_1[0x80] = dVar8 < *(double *)(param_1 + 0x28);
    }
    else {
      param_1[0x80] = *(double *)(param_1 + 0x28) <= dVar8;
    }
    dVar9 = dVar9 * (dVar7 - dVar1);
    cVar3 = FUN_01d44bc0(*(undefined1 *)(param_3 + 0xed6));
    if (cVar3 == '\0') {
      lVar2 = *(longlong *)(param_2 + 0x130);
      if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x10))) {
        if (*(int *)(lVar2 + 0x10) == 0) {
          FUN_00594f90();
        }
        uVar6 = (**(code **)(*(longlong *)**(undefined8 **)(lVar2 + 8) + 0x10))
                          ((longlong *)**(undefined8 **)(lVar2 + 8),param_3,0xffffffff);
        FUN_016ed320(param_2,*param_1 + '\x01',0,uVar6,0);
      }
    }
    else {
      FUN_016ed320(param_2,*param_1 + '\x01',-dVar9 * dVar8,*(undefined8 *)(param_1 + 0x78),0);
      FUN_016ed220(param_2,*param_1 + '\x02',dVar9,0);
    }
  }
  return;
}

