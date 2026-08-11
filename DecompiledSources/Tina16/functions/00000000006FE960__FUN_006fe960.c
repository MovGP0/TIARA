/* Ghidra address: 006fe960 */
/* Ghidra symbol: FUN_006fe960 */


undefined8 FUN_006fe960(undefined8 param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_40;
  undefined1 local_3c [12];
  
  iVar5 = 0;
  iVar7 = *param_2;
  iVar2 = FUN_006fe580(param_1,iVar7);
  iVar3 = FUN_006fe580(param_1,0);
  if ((iVar2 != iVar3) && (0 < iVar7)) {
    do {
      uVar1 = (longlong)(iVar5 + iVar7) / 2;
      iVar6 = (int)uVar1;
      iVar4 = FUN_006fe580(param_1,uVar1 & 0xffffffff);
      iVar3 = iVar6;
      if ((iVar4 != iVar2) && (bVar8 = iVar5 == iVar6, iVar3 = iVar7, iVar5 = iVar6, bVar8)) {
        FUN_006fe580(param_1,iVar7);
        break;
      }
      iVar7 = iVar3;
    } while (iVar5 < iVar7);
  }
  FUN_006fe240(param_1,&local_40,local_3c);
  FUN_006fe580(param_1,local_40);
  return 0;
}

