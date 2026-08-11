/* Ghidra address: 015b43b0 */
/* Ghidra symbol: FUN_015b43b0 */


void FUN_015b43b0(longlong *param_1,longlong param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  int local_2c;
  
  lVar4 = param_2;
  if (param_4 != 1) {
    FUN_015a9420(param_1,param_2,param_3,param_4);
  }
  if (param_4 < 8) {
    bVar5 = ((byte)((int)CONCAT71((int7)((ulonglong)lVar4 >> 8),1) << (param_4 & 0x1f)) &
            *(byte *)(param_1 + 4)) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    if (param_2 == 0) {
      return;
    }
    iVar2 = (**(code **)(*param_1 + 0x60))(*param_1);
    if (param_4 == 3) {
      (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3);
    }
    else {
      if (param_4 < 8) {
        bVar5 = ((int)CONCAT71((uint7)(uint3)((uint)param_3 >> 8),1) << (param_4 & 0x1f) & 0x14U) !=
                0;
      }
      else {
        bVar5 = false;
      }
      lVar4 = param_2;
      iVar1 = param_3;
      if (bVar5) {
        for (; 0 < iVar1; iVar1 = iVar1 - local_2c) {
          local_2c = iVar1;
          if (iVar2 < iVar1) {
            local_2c = iVar2;
          }
          (**(code **)(*param_1 + 0x48))(param_1,lVar4,local_2c);
          (**(code **)(*param_1 + 0x50))(param_1);
          uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
          FUN_00409a70(uVar3,lVar4,(longlong)local_2c);
          lVar4 = lVar4 + local_2c;
        }
      }
      else {
        for (; 0 < iVar1; iVar1 = iVar1 - local_2c) {
          local_2c = iVar2;
          if (iVar1 < iVar2) {
            local_2c = iVar1;
          }
          uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
          (**(code **)(*param_1 + 0x48))(param_1,uVar3,iVar2);
          (**(code **)(*param_1 + 0x50))(param_1);
          uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
          FUN_015ab570(uVar3,lVar4,local_2c,lVar4);
          lVar4 = lVar4 + local_2c;
        }
      }
    }
  }
  if (param_4 == 1) {
    FUN_015a9420(param_1,param_2,param_3,1);
  }
  return;
}

