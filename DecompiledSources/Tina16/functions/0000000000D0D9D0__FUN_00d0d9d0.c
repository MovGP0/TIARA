/* Ghidra address: 00d0d9d0 */
/* Ghidra symbol: FUN_00d0d9d0 */


void FUN_00d0d9d0(longlong *param_1,longlong param_2,int param_3,byte param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  
  uVar4 = 0;
  if (param_4 != 1) {
    uVar4 = FUN_00cd57a0(param_1,param_2,param_3,param_4);
  }
  if (param_4 < 8) {
    bVar6 = ((byte)((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (param_4 & 0x1f)) &
            *(byte *)(param_1 + 4)) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    if (param_2 == 0) {
      return;
    }
    iVar3 = (**(code **)(*param_1 + 0x60))(*param_1);
    if (param_4 == 3) {
      (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3);
    }
    else {
      lVar1 = param_2;
      iVar2 = param_3;
      if (param_4 < 8 && (1 << (param_4 & 0x1f) & 0x14U) != 0) {
        for (; 0 < iVar2; iVar2 = iVar2 - iVar5) {
          iVar5 = iVar2;
          if (iVar3 < iVar2) {
            iVar5 = iVar3;
          }
          (**(code **)(*param_1 + 0x48))(param_1,lVar1,iVar5);
          (**(code **)(*param_1 + 0x50))(param_1);
          uVar4 = (**(code **)(*param_1 + 0x58))(param_1);
          FUN_00409a70(uVar4,lVar1,(longlong)iVar5);
          lVar1 = lVar1 + iVar5;
        }
      }
      else {
        for (; 0 < iVar2; iVar2 = iVar2 - iVar5) {
          iVar5 = iVar3;
          if (iVar2 < iVar3) {
            iVar5 = iVar2;
          }
          uVar4 = (**(code **)(*param_1 + 0x58))(param_1);
          (**(code **)(*param_1 + 0x48))(param_1,uVar4,iVar3);
          (**(code **)(*param_1 + 0x50))(param_1);
          uVar4 = (**(code **)(*param_1 + 0x58))(param_1);
          FUN_00cd7350(uVar4,lVar1,iVar5,lVar1);
          lVar1 = lVar1 + iVar5;
        }
      }
    }
  }
  if (param_4 == 1) {
    FUN_00cd57a0(param_1,param_2,param_3,1);
  }
  return;
}

