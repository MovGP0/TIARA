/* Ghidra address: 019d0700 */
/* Ghidra symbol: FUN_019d0700 */


void FUN_019d0700(longlong param_1,double param_2,undefined4 param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int unaff_R13D;
  undefined8 local_38;
  undefined8 uStack_30;
  
  bVar4 = false;
  iVar6 = *(int *)(param_1 + 0x74) + -1;
  iVar5 = 1;
  if (0 < iVar6) {
    do {
      pdVar1 = (double *)(param_1 + 0xb0 + (longlong)(iVar5 + -1) * 0x10);
      if ((*pdVar1 <= param_2 && param_2 != *pdVar1) &&
         (param_2 < *(double *)(param_1 + 0xb0 + (longlong)iVar5 * 0x10))) {
        bVar4 = true;
        unaff_R13D = iVar5;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (bVar4) {
    iVar5 = *(int *)(param_1 + 0x74) + -1;
    if (unaff_R13D <= iVar5) {
      iVar6 = (unaff_R13D - iVar5) + -1;
      do {
        puVar2 = (undefined8 *)(param_1 + 0xb0 + (longlong)(iVar5 + 1) * 0x10);
        puVar3 = (undefined8 *)(param_1 + 0xb0 + (longlong)iVar5 * 0x10);
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        iVar5 = iVar5 + -1;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0);
    }
    FUN_019d0650(param_1,&local_38,param_2,param_3);
    puVar2 = (undefined8 *)(param_1 + 0xb0 + (longlong)unaff_R13D * 0x10);
    *puVar2 = local_38;
    puVar2[1] = uStack_30;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  return;
}

