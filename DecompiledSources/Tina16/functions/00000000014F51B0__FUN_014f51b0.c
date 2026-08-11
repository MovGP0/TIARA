/* Ghidra address: 014f51b0 */
/* Ghidra symbol: FUN_014f51b0 */


undefined8 FUN_014f51b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined7 uVar6;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 uVar7;
  bool bVar8;
  double unaff_XMM6_Qa;
  byte local_3b;
  undefined1 local_3a;
  undefined1 local_39 [17];
  
  uVar7 = 0;
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  if (*(byte *)(param_1 + 0x4c8) < 8) {
    bVar8 = ((int)CONCAT71(uVar6,1) << (*(byte *)(param_1 + 0x4c8) & 0x1f) & 0x28U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    puVar4 = (undefined8 *)
             FUN_01b05ad0(*(undefined8 *)(param_1 + 0x4d0),2,0,local_39,&local_3a,&local_3b);
    *(undefined8 **)(param_1 + 0x13b0) = puVar4;
    *(undefined8 *)(param_1 + 5000) = *puVar4;
    *(undefined8 *)(param_1 + 0x1390) = puVar4[1];
    *(undefined8 *)(param_1 + 0x1398) = puVar4[2];
    *(undefined8 *)(param_1 + 0x13a0) = puVar4[3];
    *(undefined1 *)(param_1 + 0x13a8) = *(undefined1 *)(puVar4 + 4);
    if (local_3b < 8) {
      uVar3 = (int)CONCAT71(uVar6,1) << (local_3b & 0x1f);
      pdVar5 = (double *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),(uVar3 & 0x90) != 0);
    }
    else {
      pdVar5 = (double *)0x0;
    }
    if ((char)pdVar5 != '\0') {
      pdVar5 = (double *)
               FUN_01b05ad0(*(undefined8 *)(param_1 + 0x4d0),2,1,local_39,&local_3a,&local_3b);
      unaff_XMM6_Qa = *pdVar5;
    }
    puVar2 = PTR_DAT_02002eb8;
    if (local_3b < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)pdVar5 >> 8),1) << (local_3b & 0x1f) & 0x90U) != 0;
    }
    else {
      bVar8 = false;
    }
    if ((!bVar8) || (unaff_XMM6_Qa == 0.0)) {
      puVar1 = *(undefined8 **)(param_1 + 0x13b0);
      puVar4 = (undefined8 *)(PTR_DAT_02002eb8 + 8);
      *puVar1 = *(undefined8 *)PTR_DAT_02002eb8;
      puVar1[1] = *puVar4;
      puVar1[2] = *(undefined8 *)(puVar2 + 0x10);
      puVar1[3] = *(undefined8 *)(puVar2 + 0x18);
      *(undefined *)(puVar1 + 4) = puVar2[0x20];
      uVar7 = *(undefined8 *)(param_1 + 0x4d0);
    }
  }
  return uVar7;
}

