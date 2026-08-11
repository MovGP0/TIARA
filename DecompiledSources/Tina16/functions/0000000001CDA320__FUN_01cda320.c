/* Ghidra address: 01cda320 */
/* Ghidra symbol: FUN_01cda320 */


void FUN_01cda320(longlong param_1,double param_2,char param_3,char param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (1e-10 <= param_2 + 1.0) {
    dVar11 = param_2 / (param_2 + 1.0);
    dVar12 = 1.0 / (param_2 + 1.0);
    lVar7 = *(longlong *)(param_1 + 0x58);
    dVar9 = *(double *)(lVar7 + 0xb8) - dVar11;
    lVar1 = *(longlong *)(param_1 + 0x60);
    dVar10 = *(double *)(lVar1 + 0xb8) - 0.0;
    if ((((dVar12 * dVar12 < dVar9 * dVar9 + dVar10 * dVar10) ||
         (dVar9 = *(double *)(*(longlong *)(param_1 + 0x58) + 0xb8) - dVar11,
         dVar10 = *(double *)(lVar1 + 0xc0) - 0.0, dVar12 * dVar12 < dVar9 * dVar9 + dVar10 * dVar10
         )) || (dVar9 = *(double *)(lVar7 + 0xc0) - dVar11,
               dVar10 = *(double *)(*(longlong *)(param_1 + 0x60) + 0xb8) - 0.0,
               dVar12 * dVar12 < dVar9 * dVar9 + dVar10 * dVar10)) ||
       (dVar9 = *(double *)(lVar7 + 0xc0) - dVar11, dVar10 = *(double *)(lVar1 + 0xc0) - 0.0,
       dVar12 * dVar12 < dVar9 * dVar9 + dVar10 * dVar10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar7 = *(longlong *)(param_1 + 0x58);
    dVar9 = *(double *)(lVar7 + 0xb8) - dVar11;
    lVar1 = *(longlong *)(param_1 + 0x60);
    dVar10 = *(double *)(lVar1 + 0xb8) - 0.0;
    if (((dVar9 * dVar9 + dVar10 * dVar10 <= dVar12 * dVar12) ||
        (dVar9 = *(double *)(*(longlong *)(param_1 + 0x58) + 0xb8) - dVar11,
        dVar10 = *(double *)(lVar1 + 0xc0) - 0.0, dVar9 * dVar9 + dVar10 * dVar10 <= dVar12 * dVar12
        )) || ((dVar9 = *(double *)(lVar7 + 0xc0) - dVar11,
               dVar10 = *(double *)(*(longlong *)(param_1 + 0x60) + 0xb8) - 0.0,
               dVar9 * dVar9 + dVar10 * dVar10 <= dVar12 * dVar12 ||
               (dVar9 = *(double *)(lVar7 + 0xc0) - dVar11, dVar10 = *(double *)(lVar1 + 0xc0) - 0.0
               , dVar9 * dVar9 + dVar10 * dVar10 <= dVar12 * dVar12)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar2) {
      if ((bVar3) &&
         (cVar4 = FUN_01a8e5c0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xb8),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xb8),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xc0),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xc0),dVar11,0),
         cVar4 == '\0')) {
        return;
      }
      lVar7 = FUN_010ed740(&PTR_FUN_010ecd58,1);
      FUN_005fd6d0(*(undefined8 *)(lVar7 + 0x88),1);
      FUN_005fd4e0(*(undefined8 *)(lVar7 + 0x88),0x808080);
      FUN_005fd670(*(undefined8 *)(lVar7 + 0x88),0);
      uVar5 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x58),dVar11 - dVar12);
      uVar6 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x60),0.0 - dVar12);
      uVar8 = FUN_00498310(uVar5,uVar6);
      *(undefined8 *)(lVar7 + 0x68) = uVar8;
      uVar5 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x58),dVar11 + dVar12);
      uVar6 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x60),dVar12 + 0.0);
      uVar8 = FUN_00498310(uVar5,uVar6);
      *(undefined8 *)(lVar7 + 0x70) = uVar8;
      uVar5 = FUN_01cdf670(*(undefined8 *)(param_1 + 0x78));
      FUN_005fd4e0(*(undefined8 *)(lVar7 + 0x88),uVar5);
      FUN_005fd670(*(undefined8 *)(lVar7 + 0x88),0);
      if (param_3 != '\0') {
        uVar8 = *(undefined8 *)(lVar7 + 0x90);
        uVar5 = FUN_01a90ee0(0xffffff);
        FUN_005fdab0(uVar8,uVar5);
        FUN_005fdcb0(uVar8,0);
      }
      if (param_4 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
                  (*(longlong **)(param_1 + 0x48),L"GridLine",lVar7);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x80))
                  (*(longlong **)(param_1 + 0x70),L"GridLine",lVar7);
      }
    }
  }
  return;
}

