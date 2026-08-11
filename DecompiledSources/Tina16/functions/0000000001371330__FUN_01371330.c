/* Ghidra address: 01371330 */
/* Ghidra symbol: FUN_01371330 */


double FUN_01371330(longlong param_1,char param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar15 = 0.0;
  puVar2 = (undefined8 *)
           FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x478),param_3);
  iVar6 = *(int *)(*(longlong *)((longlong)puVar2 + 0x13) + 0x10) + -1;
  iVar5 = 1;
  dVar14 = 0.0;
  if (0 < iVar6) {
    do {
      puVar3 = (undefined8 *)FUN_004aeac0(*(undefined8 *)((longlong)puVar2 + 0x13),iVar5);
      if ((param_2 == '\x03') || (param_2 == '\x04')) {
        dVar14 = (double)puVar3[1];
      }
      else {
        dVar14 = (double)FUN_013712e0(param_1,puVar3[1],*(undefined1 *)((longlong)puVar2 + 0x11));
      }
      (**(code **)(**(longlong **)(param_1 + 0x1440) + 0x10))
                (*(longlong **)(param_1 + 0x1440),*(undefined8 *)((longlong)puVar2 + 0x2b),1);
      dVar7 = (double)(**(code **)(**(longlong **)(param_1 + 0x1440) + 0x48))
                                (*(longlong **)(param_1 + 0x1440),*puVar3);
      dVar8 = (double)FUN_013711f0(param_1,*puVar2);
      dVar9 = (double)FUN_0040c850(dVar7 - dVar14);
      uVar10 = FUN_0040c850(dVar7);
      uVar11 = FUN_0040c850(dVar14);
      dVar12 = (double)FUN_00b90620(uVar10,uVar11);
      dVar9 = dVar9 / (dVar12 + dVar8);
      pdVar4 = (double *)FUN_004aeac0(*(undefined8 *)((longlong)puVar2 + 0x13),0);
      uVar10 = FUN_0040c850(dVar7);
      uVar11 = FUN_0040c850(dVar14);
      dVar13 = (double)FUN_00b90620(uVar10,uVar11);
      dVar12 = *pdVar4;
      if ((*(char *)(param_1 + 0x1439) != '\0') ||
         (dVar14 = (double)FUN_0040c850(dVar7 - dVar14),
         (dVar12 / 100.0) * (dVar13 + dVar8) < dVar14)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)(param_1 + 0x1439) = uVar1;
      dVar15 = dVar15 + dVar9 * dVar9;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
      dVar14 = dVar15;
    } while (iVar6 != 0);
  }
  dVar14 = (double)FUN_0040c760(dVar14);
  return dVar14 / (double)(*(int *)(*(longlong *)((longlong)puVar2 + 0x13) + 0x10) + -1);
}

