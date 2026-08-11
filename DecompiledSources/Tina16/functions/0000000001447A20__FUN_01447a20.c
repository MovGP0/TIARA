/* Ghidra address: 01447a20 */
/* Ghidra symbol: FUN_01447a20 */


void FUN_01447a20(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  double dVar3;
  undefined8 uVar4;
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
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_18 = 0;
  local_10 = 0;
  if (*(char *)(param_2 + 0x92) == '\0') {
    if ((*(longlong *)(param_2 + 0x18) == 0) || (*(longlong *)(param_2 + 0x20) == 0)) {
      iVar2 = 0;
      if (*(longlong *)(param_1 + 0x58) != 0) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x58) + -4);
      }
      if (iVar2 == 0) {
        FUN_00efa6e0(&local_38,*(undefined8 *)(param_1 + 0x50),*(undefined1 *)(param_2 + 0xe98));
        FUN_00414b50(param_1 + 0x58,local_38);
      }
      if (*(char *)(param_2 + 0xb3) == '\0') {
        FUN_019b6e50(param_1 + 0x68,L"+\\f(",param_2);
        FUN_019b6f10(param_1 + 0x68,*(undefined8 *)(param_2 + 0xb8),param_2);
        FUN_019b6e50(param_1 + 0x68,&DAT_0144839c,param_2);
        FUN_019b6f10(param_1 + 0x68,*(undefined8 *)(param_2 + 0xc0),param_2);
        FUN_00416ba0(&local_80,&DAT_01448370,*(undefined8 *)(param_1 + 0x58));
        FUN_019b6e50(param_1 + 0x68,local_80,param_2);
        iVar2 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x60),param_2);
        if (0 < iVar2) {
          FUN_019b6e50(param_1 + 0x60,&DAT_014482f8,param_2);
        }
        FUN_019b6e50(param_1 + 0x60,&LAB_014483ac,param_2);
        FUN_019b6f10(param_1 + 0x60,*(undefined8 *)(param_2 + 200),param_2);
        FUN_019b6e50(param_1 + 0x60,&DAT_0144839c,param_2);
        FUN_019b6f10(param_1 + 0x60,*(undefined8 *)(param_2 + 0xd0),param_2);
        FUN_00efa6e0(&local_90,*(undefined8 *)(param_1 + 0x50),*(undefined1 *)(param_2 + 0xe98));
        FUN_00416ba0(&local_88,&DAT_01448370,local_90);
        FUN_019b6e50(param_1 + 0x60,local_88,param_2);
      }
      else {
        cVar1 = FUN_00efa430(*(undefined8 *)(param_2 + 0xb8),param_2);
        if (cVar1 == '\x01') {
          FUN_00416ba0(&local_40,&DAT_014482f8,*(undefined8 *)(param_1 + 0x58));
          FUN_019b6e50(param_1 + 0x68,local_40,param_2);
        }
        else {
          cVar1 = FUN_00efa430(*(undefined8 *)(param_2 + 0xb8),param_2);
          if (cVar1 == -1) {
            FUN_00416ba0(&local_48,&DAT_01448308,*(undefined8 *)(param_1 + 0x58));
            FUN_019b6e50(param_1 + 0x68,local_48,param_2);
          }
          else {
            cVar1 = FUN_00efa430(*(undefined8 *)(param_2 + 0xb8),param_2);
            if (cVar1 == '\0') {
              FUN_019b6e50(param_1 + 0x68,&DAT_0144834c,param_2);
            }
            else {
              iVar2 = FUN_019b5d30(&DAT_014482f8,*(undefined8 *)(param_2 + 0xb8),param_2);
              if ((iVar2 < 1) &&
                 (iVar2 = FUN_019b5d30(&DAT_01448308,*(undefined8 *)(param_2 + 0xb8),param_2),
                 iVar2 < 0)) {
                iVar2 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x68),param_2);
                if (0 < iVar2) {
                  FUN_019b6e50(param_1 + 0x68,&DAT_014482f8,param_2);
                }
                FUN_019b6f10(param_1 + 0x68,*(undefined8 *)(param_2 + 0xb8),param_2);
                FUN_00416ba0(&local_68,&DAT_01448318,*(undefined8 *)(param_1 + 0x58));
                FUN_019b6e50(param_1 + 0x68,local_68,param_2);
                iVar2 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x60),param_2);
                if (0 < iVar2) {
                  FUN_019b6e50(param_1 + 0x60,&DAT_014482f8,param_2);
                }
                FUN_019b6f10(param_1 + 0x60,*(undefined8 *)(param_2 + 200),param_2);
                FUN_00efa6e0(&local_78,*(undefined8 *)(param_1 + 0x50),
                             *(undefined1 *)(param_2 + 0xe98));
                FUN_00416ba0(&local_70,&DAT_01448318,local_78);
                FUN_019b6e50(param_1 + 0x60,local_70,param_2);
              }
              else {
                iVar2 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x68),param_2);
                if (0 < iVar2) {
                  FUN_019b6e50(param_1 + 0x68,&DAT_014482f8,param_2);
                }
                FUN_019b6e50(param_1 + 0x68,&DAT_01448360,param_2);
                FUN_019b6f10(param_1 + 0x68,*(undefined8 *)(param_2 + 0xb8),param_2);
                FUN_00416ba0(&local_50,&DAT_01448370,*(undefined8 *)(param_1 + 0x58));
                FUN_019b6e50(param_1 + 0x68,local_50,param_2);
                iVar2 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x60),param_2);
                if (0 < iVar2) {
                  FUN_019b6e50(param_1 + 0x60,&DAT_014482f8,param_2);
                }
                FUN_019b6e50(param_1 + 0x60,&DAT_01448360,param_2);
                FUN_019b6f10(param_1 + 0x60,*(undefined8 *)(param_2 + 200),param_2);
                FUN_00efa6e0(&local_60,*(undefined8 *)(param_1 + 0x50),
                             *(undefined1 *)(param_2 + 0xe98));
                FUN_00416ba0(&local_58,&DAT_01448370,local_60);
                FUN_019b6e50(param_1 + 0x60,local_58,param_2);
              }
            }
          }
        }
      }
    }
    else {
      iVar2 = 0;
      if (*(longlong *)(param_1 + 0x58) != 0) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x58) + -4);
      }
      if (0 < iVar2) {
        dVar3 = (double)FUN_019b9740(param_2);
        if (dVar3 == 1.0) {
          FUN_00416ba0(&local_10,&DAT_014482f8,*(undefined8 *)(param_1 + 0x58));
          FUN_019b6e50(param_1 + 0x68,local_10,param_2);
        }
        else {
          dVar3 = (double)FUN_019b9740(param_2);
          if (dVar3 == -1.0) {
            FUN_00416ba0(&local_18,&DAT_01448308,*(undefined8 *)(param_1 + 0x58));
            FUN_019b6e50(param_1 + 0x68,local_18,param_2);
          }
          else {
            dVar3 = (double)FUN_019b9740(param_2);
            if (0.0 < dVar3) {
              FUN_019b6e50(param_1 + 0x68,&DAT_014482f8,param_2);
            }
            uVar4 = FUN_019b9740(param_2);
            FUN_00efa6e0(&local_28,uVar4,*(undefined1 *)(param_2 + 0xe98));
            FUN_00416cd0(&local_20,3,local_28,&DAT_01448318,*(undefined8 *)(param_1 + 0x58));
            FUN_019b6e50(param_1 + 0x68,local_20,param_2);
          }
        }
      }
      dVar3 = (double)FUN_019b9740(param_2);
      if (dVar3 * *(double *)(param_1 + 0x50) == 1.0) {
        FUN_019b6e50(param_1 + 0x60,&DAT_01448328,param_2);
      }
      else {
        dVar3 = (double)FUN_019b9740(param_2);
        if (dVar3 * *(double *)(param_1 + 0x50) == -1.0) {
          FUN_019b6e50(param_1 + 0x60,&DAT_01448338,param_2);
        }
        else {
          dVar3 = (double)FUN_019b9740(param_2);
          if ((0.0 < dVar3 * *(double *)(param_1 + 0x50)) &&
             (iVar2 = FUN_019b5ce0(*(undefined8 *)(param_1 + 0x60),param_2), 0 < iVar2)) {
            FUN_019b6e50(param_1 + 0x60,&DAT_014482f8,param_2);
          }
          dVar3 = (double)FUN_019b9740(param_2);
          FUN_00efa6e0(&local_30,dVar3 * *(double *)(param_1 + 0x50),
                       *(undefined1 *)(param_2 + 0xe98));
          FUN_019b6e50(param_1 + 0x60,local_30,param_2);
        }
      }
    }
  }
  FUN_00414560(&local_90,0x11);
  return;
}

