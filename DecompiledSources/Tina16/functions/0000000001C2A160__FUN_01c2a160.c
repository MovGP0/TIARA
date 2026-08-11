/* Ghidra address: 01c2a160 */
/* Ghidra symbol: FUN_01c2a160 */


undefined1 FUN_01c2a160(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_91;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  cVar2 = FUN_01c29d30(param_1,&DAT_01c2a5f8);
  if (((((cVar2 == '\0') || (cVar2 = FUN_01c29d30(param_1,&DAT_01c2a60c), cVar2 == '\0')) ||
       (cVar2 = FUN_01c29d30(param_1,&DAT_01c2a620), cVar2 == '\0')) ||
      (cVar2 = FUN_01c29d30(param_1,&DAT_01c2a634), cVar2 == '\0')) ||
     (((cVar2 = FUN_01c29d30(param_1,&DAT_01c2a648), cVar2 == '\0' &&
       (cVar2 = FUN_01c29d30(param_1,L"OpenCollOut"), cVar2 == '\0')) &&
      ((cVar2 = FUN_01c29d30(param_1,L"Out+"), cVar2 == '\0' ||
       (cVar2 = FUN_01c29d30(param_1,L"Out-"), cVar2 == '\0')))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar3 = (**(code **)(*param_1 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_30,iVar5);
      iVar4 = (**(code **)(*DAT_03565e68 + 0xb0))(DAT_03565e68,local_30);
      if (iVar4 == -1) {
        (**(code **)(*param_1 + 0x18))(param_1,&local_38,iVar5);
        iVar4 = FUN_00416db0(local_38,&DAT_01c2a620);
        if (iVar4 != 0) {
          (**(code **)(*param_1 + 0x18))(param_1,&local_40,iVar5);
          iVar4 = FUN_00416db0(local_40,&DAT_01c2a634);
          if (iVar4 != 0) {
            (**(code **)(*param_1 + 0x18))(param_1,&local_48,iVar5);
            iVar4 = FUN_00416db0(local_48,&DAT_01c2a5f8);
            if (iVar4 != 0) {
              (**(code **)(*param_1 + 0x18))(param_1,&local_50,iVar5);
              iVar4 = FUN_00416db0(local_50,&DAT_01c2a60c);
              if (iVar4 != 0) {
                (**(code **)(*param_1 + 0x18))(param_1,&local_58,iVar5);
                iVar4 = FUN_00416db0(local_58,&DAT_01c2a648);
                if (iVar4 != 0) {
                  (**(code **)(*param_1 + 0x18))(param_1,&local_60,iVar5);
                  iVar4 = FUN_00416db0(local_60,L"OpenCollOut");
                  if (iVar4 != 0) {
                    (**(code **)(*param_1 + 0x18))(param_1,&local_68,iVar5);
                    iVar4 = FUN_00416db0(local_68,L"OutGnd");
                    if (iVar4 != 0) {
                      (**(code **)(*param_1 + 0x18))(param_1,&local_70,iVar5);
                      iVar4 = FUN_00416db0(local_70,L"Out+");
                      if (iVar4 != 0) {
                        (**(code **)(*param_1 + 0x18))(param_1,&local_78,iVar5);
                        iVar4 = FUN_00416db0(local_78,L"Out-");
                        if (iVar4 != 0) {
                          bVar1 = false;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((bVar1) &&
     ((iVar3 = (**(code **)(*param_1 + 0x28))(param_1), iVar3 < 10 ||
      ((iVar3 = (**(code **)(*param_1 + 0x28))(param_1), iVar3 < 0xb &&
       (cVar2 = FUN_01c29d30(param_1,&DAT_01c2a648), cVar2 == '\0')))))) {
    local_91 = 1;
    iVar3 = (**(code **)(*param_1 + 0x28))();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(*param_1 + 0x18))(param_1,&local_80,iVar5);
        iVar4 = (**(code **)(*DAT_03565e68 + 0xb0))(DAT_03565e68,local_80);
        if (-1 < iVar4) {
          (**(code **)(*param_1 + 0x18))(param_1,&local_90,iVar5);
          FUN_00416ba0(&local_88,&LAB_01c2a6cc,local_90);
          (**(code **)(*param_1 + 0x40))(param_1,iVar5,local_88);
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    local_91 = 0;
  }
  FUN_00414560(&local_90,0xd);
  return local_91;
}

