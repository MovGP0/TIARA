/* Ghidra address: 01d5ab00 */
/* Ghidra symbol: FUN_01d5ab00 */


void FUN_01d5ab00(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int iVar1;
  undefined8 in_RAX;
  bool bVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 local_d8;
  double local_d0;
  undefined1 local_a9 [153];
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
        if ((*(byte *)(param_3 + 0x88) & 0x80) == 0) {
          local_d8 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[3],0,0);
        }
        else {
          local_d8 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[3],0,0);
          uVar5 = FUN_016ee9a0(param_2,param_3,param_1[1],param_1[5],1,0);
          *(undefined8 *)(param_1 + 0x70) = uVar5;
        }
      }
      else if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
        local_d8 = *(undefined8 *)(param_1 + 8);
      }
      else {
        local_d8 = *(undefined8 *)(param_1 + 8);
      }
      dVar3 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x02',1,0);
      dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[2],0)
      ;
      uVar5 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[5],0);
      FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[5],param_1[2],0);
      uVar6 = FUN_00b90620(local_d8,0x406be00000000000);
      dVar7 = (double)FUN_00b90650(uVar6,0x4080580000000000);
      dVar8 = dVar7 * 1.3806226e-23;
      dVar9 = (double)FUN_0040c760(*(undefined8 *)(param_1 + 0x48));
      dVar9 = (dVar8 / 1.6021917e-19) / dVar9;
      iVar1 = FUN_00c42630(uVar5);
      uVar5 = FUN_0040c850(uVar5);
      uVar6 = FUN_0040c850(*(undefined8 *)(param_1 + 0x70));
      local_d0 = (double)FUN_00c42ff0(uVar5,uVar6,dVar9,dVar9,local_a9);
      local_d0 = (double)iVar1 * local_d0;
      FUN_016e9f80(param_2,param_3,local_a9[0],0);
      *(double *)(param_1 + 0x70) = local_d0;
      dVar9 = (double)FUN_00c42a20(*(double *)(param_1 + 0x58) * (1.0 / dVar7 - 0.00335401643468053)
                                  );
      dVar9 = *(double *)(param_1 + 0x50) * dVar9;
      dVar14 = (-dVar9 * *(double *)(param_1 + 0x58)) / (dVar7 * dVar7);
      FUN_016ed320(param_2,*param_1 + '\x02',dVar9 * dVar3 - (dVar14 * dVar7 + dVar9) * dVar3,dVar9,
                   0);
      FUN_016ed220(param_2,*param_1 + '\t',dVar14 * dVar3,0);
      FUN_016ed320(param_2,*param_1 + '\x05',(dVar4 * dVar3 - dVar3 * dVar4) - dVar4 * dVar3,0,0);
      FUN_016ed220(param_2,*param_1 + '\n',dVar3,0);
      FUN_016ed220(param_2,*param_1 + '\v',dVar4,0);
      dVar4 = *(double *)(param_1 + 0x40) * 1.6021917e-19;
      dVar9 = (dVar7 - *(double *)(param_1 + 0x18)) / *(double *)(param_1 + 0x28);
      dVar3 = (double)FUN_00c44290(dVar9);
      dVar13 = 1.0 / *(double *)(param_1 + 0x20) + (dVar3 + 1.0) / 2.0;
      dVar3 = (double)FUN_00c44110(dVar9);
      dVar9 = (double)FUN_00c44110(dVar9);
      dVar17 = 1.0 / (*(double *)(param_1 + 0x28) * 2.0 * dVar3 * dVar9);
      dVar9 = (double)FUN_00c42670(0x4072a26666666666,*(undefined8 *)(param_1 + 0x38));
      dVar9 = -*(double *)(param_1 + 0x30) * dVar13 * dVar9;
      dVar15 = (dVar4 * local_d0) / dVar8;
      FUN_0040c850(*(double *)(param_1 + 0x48) * local_d0);
      dVar14 = (double)FUN_0040c760();
      dVar16 = (dVar14 * 1.6021917e-19) / dVar8;
      dVar3 = (double)FUN_00c42670(dVar7,*(ulonglong *)(param_1 + 0x38) ^ 0x8000000000000000);
      dVar10 = (double)FUN_00c42a20(dVar9 * dVar3);
      dVar3 = *(double *)(param_1 + 0x10);
      dVar11 = (double)FUN_00c44290(dVar15);
      dVar12 = (double)FUN_00c42a20(dVar16);
      dVar10 = (dVar10 / dVar3) * (dVar8 / dVar4) * dVar11 * dVar12;
      dVar3 = (double)FUN_0040c850(local_d0);
      if (dVar3 < 1e-09) {
        iVar1 = FUN_00c42630(local_d0);
        local_d0 = (double)iVar1 * 1e-09;
        if (local_d0 == 0.0) {
          local_d0 = 1e-09;
        }
        dVar15 = (dVar4 * local_d0) / dVar8;
        FUN_0040c850(*(double *)(param_1 + 0x48) * local_d0);
        dVar14 = (double)FUN_0040c760();
        dVar16 = (dVar14 * 1.6021917e-19) / dVar8;
      }
      dVar3 = (double)FUN_00c42670(dVar7,-1.0 - *(double *)(param_1 + 0x38));
      dVar11 = (double)FUN_00c44090(dVar15);
      dVar12 = (double)FUN_00c44110(dVar15);
      dVar11 = (((1.0 / dVar7 - dVar9 * *(double *)(param_1 + 0x38) * dVar3) -
                dVar15 / (dVar11 * dVar12 * dVar7)) - dVar16 / dVar7) * dVar10;
      dVar3 = (double)FUN_00c44090(dVar15);
      dVar9 = (double)FUN_00c44110(dVar15);
      iVar1 = FUN_00c42630(*(double *)(param_1 + 0x48) * local_d0);
      dVar4 = (dVar4 / (dVar3 * dVar9 * dVar8) +
              ((double)iVar1 * 1.6021917e-19 * *(double *)(param_1 + 0x48)) / (dVar8 * 2.0 * dVar14)
              ) * dVar10;
      dVar3 = (double)FUN_00c42670(298.15 / dVar7,*(undefined8 *)(param_1 + 0x38));
      dVar3 = -*(double *)(param_1 + 0x30) * dVar3 * dVar10;
      FUN_016ed320(param_2,*param_1 + '\x01',
                   ((dVar10 - dVar11 * dVar7) - dVar4 * local_d0) - dVar3 * dVar13,
                   dVar4 + *(double *)(param_3 + 0x430),0);
      FUN_016ed220(param_2,*param_1 + '\f',dVar11,0);
      FUN_016ed220(param_2,*param_1 + '\r',dVar3,0);
      FUN_016ed320(param_2,*param_1 + '\x0e',dVar13 - dVar17 * dVar7,0,0);
      FUN_016ed220(param_2,*param_1 + '\x0f',dVar17,0);
      FUN_016ed220(param_2,*param_1 + '\x03',*(double *)(param_1 + 0x60) / dVar13,0);
    }
    else {
      FUN_016ee8d0(param_2,*(undefined8 *)(param_3 + 0x118),param_1[3],0,0x4072c26666666666,0);
    }
  }
  return;
}

