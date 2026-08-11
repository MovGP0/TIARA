/* Ghidra address: 01238100 */
/* Ghidra symbol: FUN_01238100 */


undefined8 FUN_01238100(longlong *param_1,double param_2,double param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  undefined8 uVar11;
  uint local_c4;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  puVar3 = (undefined8 *)FUN_00409570(0x1fd8);
  iVar8 = *(int *)(*param_1 + 0x1fa0);
  *(int *)(*param_1 + 0x1fa0) = iVar8 * 2;
  puVar6 = (undefined8 *)(*param_1 + 0x50);
  puVar7 = puVar3;
  for (lVar4 = 0x1f5; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined8 *)(*param_1 + 0xff8);
  puVar7 = puVar3 + 0x1f5;
  for (lVar4 = 0x1f5; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  bVar9 = iVar8 % 2 == 1;
  if (bVar9) {
    *(double *)(*param_1 + 0x48) =
         *(double *)(*param_1 + 0x48) * ((double)puVar3[2] / (double)puVar3[0x1f7]);
    puVar3[0x3ea] = 0x3ff0000000000000;
    puVar3[0x3eb] = (param_2 * (double)puVar3[1]) / (double)puVar3[2];
    puVar3[0x3ec] = param_3 * param_3;
    puVar3[0x5df] = 0x3ff0000000000000;
    puVar3[0x5e0] = (param_2 * (double)puVar3[0x1f6]) / (double)puVar3[0x1f7];
    puVar3[0x5e1] = param_3 * param_3;
  }
  uVar5 = (uint)bVar9;
  iVar8 = (iVar8 + 1) / 2 + -1;
  if ((int)uVar5 <= iVar8) {
    iVar8 = (iVar8 - uVar5) + 1;
    local_c4 = uVar5;
    do {
      iVar1 = local_c4 * 3;
      iVar2 = local_c4 * 6 + uVar5 * -3;
      lVar4 = (longlong)(iVar1 + 2);
      *(double *)(*param_1 + 0x48) =
           *(double *)(*param_1 + 0x48) * ((double)puVar3[lVar4] / (double)puVar3[lVar4 + 0x1f5]);
      if ((double)puVar3[iVar1] == 0.0) {
        puVar3[(longlong)iVar2 + 0x3ea] = 0x3ff0000000000000;
        puVar3[(longlong)(iVar2 + 1) + 0x3ea] = 0;
        puVar3[(longlong)(iVar2 + 2) + 0x3ea] = param_3 * param_3;
        puVar3[(longlong)(iVar2 + 3) + 0x3ea] = 0x3ff0000000000000;
        puVar3[(longlong)(iVar2 + 4) + 0x3ea] = 0;
        puVar3[(longlong)(iVar2 + 5) + 0x3ea] = param_3 * param_3;
      }
      else {
        FUN_01236c30(local_58,puVar3[iVar1],0);
        FUN_01236c30(local_68,puVar3[iVar1 + 1],0);
        FUN_01236c30(local_78,puVar3[lVar4],0);
        FUN_01236d30(local_58,local_68,local_78,local_88,local_98);
        FUN_01236c30(local_58,0x3ff0000000000000,0);
        FUN_01236c30(local_a8,0x3ff0000000000000,0);
        FUN_01236b60(local_b8,local_a8,local_88);
        FUN_01236cd0(local_a8,local_b8);
        FUN_01236c30(local_b8,param_2,0);
        FUN_01236c60(local_68,local_a8,local_b8);
        FUN_01236c30(local_78,param_3 * param_3,0);
        FUN_01236d30(local_58,local_68,local_78,local_88,local_98);
        puVar3[(longlong)iVar2 + 0x3ea] = 0x3ff0000000000000;
        dVar10 = (double)FUN_01236eb0(local_88);
        puVar3[(longlong)(iVar2 + 1) + 0x3ea] = dVar10 * -2.0;
        FUN_01236b00(local_b8,local_88);
        FUN_01236c60(local_a8,local_88,local_b8);
        uVar11 = FUN_01236eb0(local_a8);
        puVar3[(longlong)(iVar2 + 2) + 0x3ea] = uVar11;
        puVar3[(longlong)(iVar2 + 3) + 0x3ea] = 0x3ff0000000000000;
        dVar10 = (double)FUN_01236eb0(local_98);
        puVar3[(longlong)(iVar2 + 4) + 0x3ea] = dVar10 * -2.0;
        FUN_01236b00(local_b8,local_98);
        FUN_01236c60(local_a8,local_98,local_b8);
        uVar11 = FUN_01236eb0(local_a8);
        puVar3[(longlong)(iVar2 + 5) + 0x3ea] = uVar11;
      }
      FUN_01236c30(local_58,puVar3[(longlong)iVar1 + 0x1f5],0);
      FUN_01236c30(local_68,puVar3[(longlong)(iVar1 + 1) + 0x1f5],0);
      FUN_01236c30(local_78,puVar3[lVar4 + 0x1f5],0);
      FUN_01236d30(local_58,local_68,local_78,local_88,local_98);
      FUN_01236c30(local_58,0x3ff0000000000000,0);
      FUN_01236c30(local_a8,0x3ff0000000000000,0);
      FUN_01236b60(local_b8,local_a8,local_88);
      FUN_01236cd0(local_a8,local_b8);
      FUN_01236c30(local_b8,param_2,0);
      FUN_01236c60(local_68,local_a8,local_b8);
      FUN_01236c30(local_78,param_3 * param_3,0);
      FUN_01236d30(local_58,local_68,local_78,local_88,local_98);
      puVar3[(longlong)iVar2 + 0x5df] = 0x3ff0000000000000;
      dVar10 = (double)FUN_01236eb0(local_88);
      puVar3[(longlong)(iVar2 + 1) + 0x5df] = dVar10 * -2.0;
      FUN_01236b00(local_b8,local_88);
      FUN_01236c60(local_a8,local_88,local_b8);
      uVar11 = FUN_01236eb0(local_a8);
      puVar3[(longlong)(iVar2 + 2) + 0x5df] = uVar11;
      puVar3[(longlong)(iVar2 + 3) + 0x5df] = 0x3ff0000000000000;
      dVar10 = (double)FUN_01236eb0(local_98);
      puVar3[(longlong)(iVar2 + 4) + 0x5df] = dVar10 * -2.0;
      FUN_01236b00(local_b8,local_98);
      FUN_01236c60(local_a8,local_98,local_b8);
      uVar11 = FUN_01236eb0(local_a8);
      puVar3[(longlong)(iVar2 + 5) + 0x5df] = uVar11;
      local_c4 = local_c4 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  puVar6 = puVar3 + 0x3ea;
  puVar7 = (undefined8 *)(*param_1 + 0x50);
  for (lVar4 = 0x1f5; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = puVar3 + 0x5df;
  puVar7 = (undefined8 *)(*param_1 + 0xff8);
  for (lVar4 = 0x1f5; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_004095f0(puVar3);
  return 0;
}

