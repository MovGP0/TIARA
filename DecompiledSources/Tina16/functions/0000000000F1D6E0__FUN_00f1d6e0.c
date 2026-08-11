/* Ghidra address: 00f1d6e0 */
/* Ghidra symbol: FUN_00f1d6e0 */


void FUN_00f1d6e0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                 undefined1 param_9,undefined4 param_10,longlong *param_11,longlong param_12)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 local_res18 [2];
  undefined8 local_80 [2];
  undefined8 local_70 [9];
  
  local_80[0] = 0;
  local_70[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414610(param_7);
  bVar2 = true;
  uVar8 = 0;
  uVar10 = 0;
  uVar9 = 0x4024000000000000;
  uVar11 = 0x4024000000000000;
  if (*param_11 == 0) {
    lVar5 = FUN_01cdf400(&DAT_01cdd500,1);
    lVar6 = param_12;
    *param_11 = lVar5;
    *(undefined1 *)(*param_11 + 0x58) = 7;
    *(longlong *)(*param_11 + 0x50) = param_12;
    *(undefined1 *)(*param_11 + 0x59) = 0;
    lVar5 = FUN_01ccd700(&DAT_01ccbf00,1);
    *(longlong *)(lVar5 + 0x60) = lVar6;
    *(longlong *)(lVar5 + 0x68) = *param_11;
    *(undefined1 *)(lVar5 + 0xf0) = 0;
    *(undefined1 *)(lVar5 + 0x70) = param_4;
    FUN_01cd64a0(lVar5,local_res18[0]);
    *(undefined1 *)(lVar5 + 0x80) = param_5;
    *(undefined4 *)(lVar5 + 0x90) = param_6;
    (**(code **)(**(longlong **)(*param_11 + 0x70) + 0x80))
              (*(longlong **)(*param_11 + 0x70),&DAT_00f1df3c,lVar5);
    lVar5 = FUN_01ccd700(&DAT_01ccbf00,1);
    *(longlong *)(lVar5 + 0x60) = lVar6;
    *(longlong *)(lVar5 + 0x68) = *param_11;
    *(undefined1 *)(lVar5 + 0xf0) = 1;
    *(undefined1 *)(lVar5 + 0x70) = param_8;
    FUN_01cd64a0(lVar5,param_7);
    *(undefined1 *)(lVar5 + 0x80) = param_9;
    *(undefined4 *)(lVar5 + 0x90) = param_10;
    (**(code **)(**(longlong **)(*param_11 + 0x78) + 0x80))
              (*(longlong **)(*param_11 + 0x78),&DAT_00f1df4c,lVar5);
    FUN_01cc5c60(param_1);
    do {
      lVar6 = FUN_01cc5cc0(param_1);
      if (lVar6 != 0) {
        lVar5 = FUN_00f12e70(&LAB_00f12330,1);
        *(longlong *)(lVar5 + 0xa0) = lVar6;
        FUN_005fd4e0(*(undefined8 *)(lVar5 + 0x60),*(undefined4 *)(PTR_DAT_02003c00 + 4));
        *(longlong *)(lVar5 + 0x78) = param_12;
        FUN_01cc0ae0(lVar6,local_80);
        FUN_00414ad0(lVar5 + 0xe8,local_80[0]);
        cVar1 = *(char *)(lVar6 + 0x3a);
        if (cVar1 == '\x01') {
          *(undefined1 *)(lVar5 + 0x9d) = 0;
        }
        else if (cVar1 == '\x02') {
          *(undefined1 *)(lVar5 + 0x9d) = 1;
        }
        else if (cVar1 == '\x03') {
          *(undefined1 *)(lVar5 + 0x9d) = 3;
        }
        else if (cVar1 == '\x04') {
          *(undefined1 *)(lVar5 + 0x9d) = 2;
        }
        else {
          *(undefined1 *)(lVar5 + 0x9d) = 4;
        }
        *(undefined8 *)(lVar5 + 0xa8) = 0;
        *(undefined8 *)(lVar5 + 0xb0) = 0;
        uVar7 = (**(code **)(*param_2 + 0x58))(param_2,lVar6);
        *(undefined8 *)(lVar5 + 0xb8) = uVar7;
        uVar7 = (**(code **)(*param_2 + 0x68))(param_2,lVar6);
        *(undefined8 *)(lVar5 + 0xc0) = uVar7;
        uVar7 = (**(code **)(**(longlong **)(*param_11 + 0x70) + 0x30))
                          (*(longlong **)(*param_11 + 0x70),0);
        uVar7 = FUN_004113f0(uVar7,&DAT_01ccbf00);
        *(undefined8 *)(lVar5 + 0xd8) = uVar7;
        uVar7 = (**(code **)(**(longlong **)(*param_11 + 0x78) + 0x30))
                          (*(longlong **)(*param_11 + 0x78),0);
        uVar7 = FUN_004113f0(uVar7,&DAT_01ccbf00);
        *(undefined8 *)(lVar5 + 0xe0) = uVar7;
        if (bVar2) {
          uVar8 = (**(code **)(*param_2 + 0x58))(param_2,lVar6);
          uVar9 = (**(code **)(*param_2 + 0x60))(param_2,lVar6);
          uVar10 = (**(code **)(*param_2 + 0x68))(param_2,lVar6);
          uVar11 = (**(code **)(*param_2 + 0x70))(param_2,lVar6);
          bVar2 = false;
        }
        else {
          uVar7 = (**(code **)(*param_2 + 0x58))(param_2,lVar6);
          uVar8 = FUN_00b90650(uVar8,uVar7);
          uVar7 = (**(code **)(*param_2 + 0x60))(param_2,lVar6);
          uVar9 = FUN_00b90620(uVar9,uVar7);
          uVar7 = (**(code **)(*param_2 + 0x68))(param_2,lVar6);
          uVar10 = FUN_00b90650(uVar10,uVar7);
          uVar7 = (**(code **)(*param_2 + 0x70))(param_2,lVar6);
          uVar11 = FUN_00b90620(uVar11,uVar7);
        }
        (**(code **)(**(longlong **)(param_12 + 0xe0) + 0x80))
                  (*(longlong **)(param_12 + 0xe0),L"Vector",lVar5);
      }
    } while (lVar6 != 0);
    dVar12 = (double)FUN_00b90620(0,uVar9);
    dVar13 = (double)FUN_00b90650(0,uVar8);
    dVar14 = (double)FUN_00b90620(0,uVar11);
    dVar15 = (double)FUN_00b90650(0,uVar10);
    uVar8 = (**(code **)(**(longlong **)(*param_11 + 0x70) + 0x30))
                      (*(longlong **)(*param_11 + 0x70),0);
    lVar6 = FUN_004113f0(uVar8,&DAT_01ccbf00);
    uVar8 = FUN_00b90620(0x3e112e0be826d695,(dVar12 - dVar13) * 0.1);
    dVar16 = (double)FUN_00b90620(uVar8,(dVar14 - dVar15) * 0.1);
    *(double *)(lVar6 + 0xb8) = dVar13 - dVar16;
    *(double *)(lVar6 + 0xc0) = dVar12 + dVar16;
    *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(lVar6 + 0xb8);
    *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)(lVar6 + 0xc0);
    uVar3 = FUN_01ccdde0(lVar6);
    uVar4 = FUN_01ccde00(lVar6);
    FUN_01cd43b0(lVar6,uVar3,uVar4);
    *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(lVar6 + 0xb8);
    *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)(lVar6 + 0xc0);
    uVar8 = (**(code **)(**(longlong **)(*param_11 + 0x78) + 0x30))
                      (*(longlong **)(*param_11 + 0x78),0);
    lVar6 = FUN_004113f0(uVar8,&DAT_01ccbf00);
    uVar8 = FUN_00b90620(0x3e112e0be826d695,(dVar12 - dVar13) * 0.1);
    dVar12 = (double)FUN_00b90620(uVar8,(dVar14 - dVar15) * 0.1);
    *(double *)(lVar6 + 0xb8) = dVar15 - dVar12;
    *(double *)(lVar6 + 0xc0) = dVar14 + dVar12;
    *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(lVar6 + 0xb8);
    *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)(lVar6 + 0xc0);
    uVar3 = FUN_01ccddc0(lVar6);
    uVar4 = FUN_01ccddd0(lVar6);
    FUN_01cd43b0(lVar6,uVar3,uVar4);
    *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(lVar6 + 0xb8);
    *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)(lVar6 + 0xc0);
    FUN_01ce27e0(*param_11);
    uVar8 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
    (**(code **)(**(longlong **)(*param_11 + 0x88) + 0x80))
              (*(longlong **)(*param_11 + 0x88),L"Grid",uVar8);
    lVar6 = (**(code **)(**(longlong **)(*param_11 + 0x88) + 0x30))
                      (*(longlong **)(*param_11 + 0x88),0);
    *(longlong *)(lVar6 + 0x78) = *param_11;
    uVar8 = (**(code **)(**(longlong **)(*param_11 + 0x88) + 0x30))
                      (*(longlong **)(*param_11 + 0x88),0);
    uVar9 = (**(code **)(**(longlong **)(*param_11 + 0x70) + 0x30))
                      (*(longlong **)(*param_11 + 0x70),0);
    uVar9 = FUN_004113f0(uVar9,&DAT_01ccbf00);
    FUN_01cd9880(uVar8,uVar9);
    uVar8 = (**(code **)(**(longlong **)(*param_11 + 0x88) + 0x30))
                      (*(longlong **)(*param_11 + 0x88),0);
    uVar9 = (**(code **)(**(longlong **)(*param_11 + 0x78) + 0x30))
                      (*(longlong **)(*param_11 + 0x78),0);
    uVar9 = FUN_004113f0(uVar9,&DAT_01ccbf00);
    FUN_01cd98a0(uVar8,uVar9);
  }
  FUN_00414480(local_80);
  FUN_00414480(local_70);
  FUN_00414480(local_res18);
  FUN_00414480(&param_7);
  return;
}

