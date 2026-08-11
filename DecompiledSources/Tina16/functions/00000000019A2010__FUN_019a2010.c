/* Ghidra address: 019a2010 */
/* Ghidra symbol: FUN_019a2010 */


void FUN_019a2010(undefined8 param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [3];
  
  uVar2 = FUN_019a1fb0(param_1,param_3);
  if ((byte)uVar2 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 5U) != 0;
  }
  else {
    bVar6 = false;
  }
  (**(code **)(*param_3 + 0x1f0))(param_3,0,local_3c,&local_40);
  bVar1 = false;
  iVar5 = *(int *)(param_2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_004aeac0(param_2,iVar4);
      (**(code **)(*plVar3 + 0x1f0))(plVar3,0,&local_44,&local_48);
      if (bVar6) {
        bVar1 = local_40 < local_48;
      }
      else {
        bVar1 = local_3c[0] < local_44;
      }
      if (bVar1) {
        FUN_004aec30(param_2,iVar4,param_3);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (!bVar1) {
    FUN_004ae7e0(param_2,param_3);
  }
  return;
}

