/* Ghidra address: 0123d820 */
/* Ghidra symbol: FUN_0123d820 */


void FUN_0123d820(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined4 local_3c;
  
  iVar9 = -1;
  bVar1 = false;
  do {
    iVar9 = iVar9 + 1;
    if (iVar9 < *(int *)(param_2 + 0x10)) {
      uVar6 = FUN_00b94e60(param_2,iVar9);
      cVar2 = FUN_0198a580(uVar6);
      if (cVar2 == '\x04') {
LAB_0123d896:
        lVar7 = FUN_00b94e60(param_2,iVar9);
        sVar3 = FUN_01d03160(lVar7);
        *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + param_3;
        *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + param_4;
        uVar6 = FUN_00b94e60(param_2,iVar9);
        cVar2 = FUN_0198a580(uVar6);
        if ((cVar2 == '\x04') && (((sVar3 == 9 || (sVar3 == 10)) || (sVar3 == 0xb)))) {
          FUN_0123efe0(param_1,lVar7);
        }
      }
      else {
        uVar6 = FUN_00b94e60(param_2,iVar9);
        cVar2 = FUN_0198a580(uVar6);
        if (cVar2 == '\x01') goto LAB_0123d896;
        uVar6 = FUN_00b94e60(param_2,iVar9);
        cVar2 = FUN_0198a580(uVar6);
        if (cVar2 == '\x03') goto LAB_0123d896;
      }
      uVar6 = FUN_00b94e60(param_2,iVar9);
      cVar2 = FUN_0198a580(uVar6);
      if (cVar2 == '\x05') {
        FUN_00b94e60(param_2,iVar9);
        iVar4 = FUN_017c2b70();
        iVar8 = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar6 = FUN_00b94e60(param_2,iVar9);
            uVar5 = FUN_017c2c60(uVar6,iVar8);
            local_3c._0_2_ = (short)uVar5;
            local_3c._2_2_ = (short)((uint)uVar5 >> 0x10);
            local_3c = CONCAT22(local_3c._2_2_ + (short)param_4,(short)local_3c + (short)param_3);
            uVar6 = FUN_00b94e60(param_2,iVar9);
            FUN_017c2cc0(uVar6,iVar8,local_3c);
            iVar8 = iVar8 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
  } while( true );
}

