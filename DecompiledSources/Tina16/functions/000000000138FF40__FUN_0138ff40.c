/* Ghidra address: 0138ff40 */
/* Ghidra symbol: FUN_0138ff40 */


undefined8 FUN_0138ff40(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  short sVar4;
  uint uVar5;
  undefined7 uVar8;
  undefined8 *puVar6;
  double *pdVar7;
  undefined8 uVar9;
  bool bVar10;
  double unaff_XMM6_Qa;
  byte local_3b;
  undefined1 local_3a;
  undefined1 local_39 [17];
  
  uVar9 = 0;
  uVar8 = (undefined7)((ulonglong)param_1 >> 8);
  if (*(byte *)(param_1 + 0x4c8) < 8) {
    bVar10 = ((int)CONCAT71(uVar8,1) << (*(byte *)(param_1 + 0x4c8) & 0x1f) & 0x28U) != 0;
  }
  else {
    bVar10 = false;
  }
  if (((bVar10) &&
      (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x4d0) + 0x128),
      sVar4 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar4 != 0x3e)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x4d0) + 0x128),
     sVar4 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar4 != 0x66)) {
    puVar6 = (undefined8 *)
             FUN_01b05ad0(*(undefined8 *)(param_1 + 0x4d0),2,0,local_39,&local_3a,&local_3b);
    *(undefined8 **)(param_1 + 0x13b0) = puVar6;
    *(undefined8 *)(param_1 + 5000) = *puVar6;
    *(undefined8 *)(param_1 + 0x1390) = puVar6[1];
    *(undefined8 *)(param_1 + 0x1398) = puVar6[2];
    *(undefined8 *)(param_1 + 0x13a0) = puVar6[3];
    *(undefined1 *)(param_1 + 0x13a8) = *(undefined1 *)(puVar6 + 4);
    if (local_3b < 8) {
      uVar5 = (int)CONCAT71(uVar8,1) << (local_3b & 0x1f);
      pdVar7 = (double *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0x90) != 0);
    }
    else {
      pdVar7 = (double *)0x0;
    }
    if ((char)pdVar7 != '\0') {
      pdVar7 = (double *)
               FUN_01b05ad0(*(undefined8 *)(param_1 + 0x4d0),2,1,local_39,&local_3a,&local_3b);
      unaff_XMM6_Qa = *pdVar7;
    }
    puVar3 = PTR_DAT_02002eb8;
    if (local_3b < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)pdVar7 >> 8),1) << (local_3b & 0x1f) & 0x90U) != 0;
    }
    else {
      bVar10 = false;
    }
    if ((!bVar10) || (uVar9 = 0, unaff_XMM6_Qa == 0.0)) {
      puVar2 = *(undefined8 **)(param_1 + 0x13b0);
      puVar6 = (undefined8 *)(PTR_DAT_02002eb8 + 8);
      *puVar2 = *(undefined8 *)PTR_DAT_02002eb8;
      puVar2[1] = *puVar6;
      puVar2[2] = *(undefined8 *)(puVar3 + 0x10);
      puVar2[3] = *(undefined8 *)(puVar3 + 0x18);
      *(undefined *)(puVar2 + 4) = puVar3[0x20];
      uVar9 = *(undefined8 *)(param_1 + 0x4d0);
    }
  }
  return uVar9;
}

