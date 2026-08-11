/* Ghidra address: 0187b4f0 */
/* Ghidra symbol: FUN_0187b4f0 */


void FUN_0187b4f0(undefined8 param_1,longlong param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_50 = 0;
  local_48 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  cVar2 = FUN_0187b0b0(param_1,param_2);
  if (cVar2 == '\0') {
    local_c = 1;
LAB_0187b898:
    iVar3 = FUN_00414cb0(param_2);
    if (local_c <= iVar3) {
      while( true ) {
        iVar3 = FUN_00414cb0(param_2);
        if (iVar3 < local_c) break;
        cVar2 = FUN_0043e100(*(undefined2 *)(param_2 + -2 + (longlong)local_c * 2),&DAT_0187b958);
        if (cVar2 == '\0') break;
        local_c = local_c + 1;
      }
      sVar1 = *(short *)(param_2 + -2 + (longlong)local_c * 2);
      if ((sVar1 == 0x22) || (sVar1 == 0x27)) {
        FUN_0187b070(param_1,param_2,&local_c);
      }
      else {
        if (sVar1 != 0x28) {
          if (sVar1 == 0x3c) {
            FUN_004168e0(&local_48,param_2);
            FUN_0180d9f0(local_40,local_48,&DAT_0187b97c,&DAT_0187b984,&local_c,&local_10);
            FUN_004168b0(&local_50,local_40[0]);
            FUN_0187b4f0(param_1,local_50);
            local_c = local_10;
            goto LAB_0187b898;
          }
          local_10 = local_c;
          while( true ) {
            iVar3 = FUN_00414cb0(param_2);
            if (iVar3 < local_c) break;
            cVar2 = FUN_0043e100(*(undefined2 *)(param_2 + -2 + (longlong)local_c * 2),&DAT_0187b998
                                );
            if (cVar2 != '\0') break;
            local_c = local_c + 1;
          }
          FUN_00416dc0(&local_70,param_2,local_10,local_c - local_10);
          FUN_0043e130(&local_18,local_70);
          iVar3 = FUN_00416db0(local_18,&DAT_0187b9c4);
          if (iVar3 != 0) {
            iVar3 = FUN_00416db0(local_18,&DAT_0187b9d8);
            if (iVar3 != 0) {
              iVar3 = FUN_00416db0(local_18,&DAT_0187b9ec);
              if (iVar3 != 0) {
                iVar3 = FUN_00416db0(local_18,&DAT_0187ba00);
                if (iVar3 != 0) {
                  iVar3 = FUN_00416db0(local_18,L"COUNT");
                  if (iVar3 != 0) {
                    FUN_0187b0b0(param_1,local_18);
                    goto LAB_0187b898;
                  }
                }
              }
            }
          }
          iVar3 = FUN_00414cb0(param_2);
          if ((local_c < iVar3) && (*(short *)(param_2 + -2 + (longlong)local_c * 2) == 0x28)) {
            FUN_01878ba0(param_2,&local_c,&local_20,&local_28,&local_30);
            FUN_00416dc0(&local_78,param_2,local_10,local_c - local_10);
            FUN_0187b2f0(param_1,local_78);
          }
          goto LAB_0187b898;
        }
        FUN_004168e0(&local_60,param_2);
        FUN_0180d9f0(&local_58,local_60,&DAT_0187b98c,&DAT_0187b994,&local_c,&local_10);
        FUN_004168b0(&local_68,local_58);
        FUN_0187b4f0(param_1,local_68);
        if (local_c == local_10) {
          local_c = local_c + 1;
        }
        else {
          local_c = local_10;
        }
      }
      goto LAB_0187b898;
    }
  }
  FUN_00414560(&local_78,3);
  FUN_004145c0(&local_60,2);
  FUN_00414480(&local_50);
  FUN_004145c0(&local_48,2);
  FUN_00414560(&local_30,4);
  return;
}

