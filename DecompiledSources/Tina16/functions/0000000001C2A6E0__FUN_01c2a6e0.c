/* Ghidra address: 01c2a6e0 */
/* Ghidra symbol: FUN_01c2a6e0 */


undefined8 FUN_01c2a6e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01c29db0(param_1,&local_40);
  iVar3 = FUN_00416db0(local_40,L"[Ref]");
  if (iVar3 == 0) {
    FUN_01c2bdb0(param_1);
    FUN_00414480(&local_30);
    iVar3 = (**(code **)(*param_1 + 0x28))();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(*param_1 + 0x18))(param_1,local_50,iVar5);
        FUN_00416cd0(&local_30,3,local_30,local_50[0],&DAT_01c2b404);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar3 == 3) {
      cVar1 = FUN_01c29d30(param_1,L"VOUT");
      if (cVar1 != '\0') {
        FUN_00416cd0(param_2,3,param_1[0xf],local_30,L"TinaICs:<Ref3> [Ref]");
      }
      cVar1 = FUN_01c29d30(param_1,L"10.0V");
      if (cVar1 != '\0') {
        FUN_00416cd0(param_2,3,param_1[0xf],local_30,L"TinaICs:<Ref3V10.0> [Ref]");
      }
      cVar1 = FUN_01c29d30(param_1,L"5.0V");
      if (cVar1 != '\0') {
        FUN_00416cd0(param_2,3,param_1[0xf],local_30,L"TinaICs:<Ref3V5.0> [Ref]");
      }
      cVar1 = FUN_01c29d30(param_1,L"2.5V");
      if (cVar1 != '\0') {
        FUN_00416cd0(param_2,3,param_1[0xf],local_30,L"TinaICs:<Ref3V2.5> [Ref]");
      }
    }
    else {
      FUN_00416cd0(param_2,3,param_1[0xf],local_30,L"<AutoShape> [Ref]");
    }
  }
  else {
    iVar3 = FUN_00416db0(local_40,L"[Buffer]");
    if (iVar3 == 0) {
      FUN_01c2bdb0(param_1);
      FUN_00414480(&local_30);
      iVar3 = (**(code **)(*param_1 + 0x28))();
      iVar5 = 0;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(*param_1 + 0x18))(param_1,&local_58,iVar5);
          FUN_00416cd0(&local_30,3,local_30,local_58,&DAT_01c2b404);
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      if (iVar3 == 4) {
        FUN_00416cd0(param_2,3,param_1[0xf],local_30,L"TinaICs:<Buffer4> [Buffer]");
      }
      else {
        FUN_00416cd0(param_2,3,param_1[0xf],local_30,L"<AutoShape> [Misc]");
      }
    }
    else {
      iVar3 = FUN_00416db0(local_40,L"[OpAmp]");
      if (iVar3 == 0) {
        bVar2 = FUN_01c2a160(param_1);
        FUN_01c2bdb0(param_1);
        FUN_00414480(&local_30);
        iVar3 = (**(code **)(*param_1 + 0x28))();
        iVar5 = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(*param_1 + 0x18))(param_1,&local_60,iVar5);
            FUN_00416cd0(&local_30,3,local_30,local_60,&DAT_01c2b404);
            iVar5 = iVar5 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
        if ((bVar2 & iVar3 < 10) == 0) {
          FUN_00416cd0(param_2,3,param_1[0xf],local_30,L" <AutoShape>  [OpAmp]");
        }
        else {
          uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
          FUN_0043f750(&local_68,uVar4);
          FUN_00416cd0(param_2,5,param_1[0xf],local_30,L" TinaICs:<Amplifier",local_68,L"> [OpAmp]")
          ;
        }
      }
      else {
        iVar3 = FUN_00416db0(local_40,L"[Comparator]");
        if (iVar3 == 0) {
          bVar2 = FUN_01c2a160(param_1);
          FUN_01c2bdb0(param_1);
          FUN_00414480(&local_30);
          iVar3 = (**(code **)(*param_1 + 0x28))();
          iVar5 = 0;
          if (-1 < iVar3 + -1) {
            do {
              (**(code **)(*param_1 + 0x18))(param_1,&local_70,iVar5);
              FUN_00416cd0(&local_30,3,local_30,local_70,&DAT_01c2b404);
              iVar5 = iVar5 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
          if (((bVar2 & iVar3 < 10) != 0) ||
             (((iVar3 = (**(code **)(*param_1 + 0x28))(param_1), iVar3 < 0xb &&
               (cVar1 = FUN_01c29d30(param_1,&DAT_01c2b704), cVar1 == '\0')) && (bVar2 != 0)))) {
            cVar1 = FUN_01c29d30(param_1,L"OpenCollOut");
            if ((cVar1 == '\0') || (cVar1 = FUN_01c29d30(param_1,L"OutGnd"), cVar1 == '\0')) {
              cVar1 = FUN_01c29d30(param_1,L"OpenCollOut");
              if ((cVar1 == '\0') || (cVar1 = FUN_01c29d30(param_1,L"OutGnd"), cVar1 != '\0')) {
                cVar1 = FUN_01c29d30(param_1,L"Out+");
                if ((cVar1 == '\0') || (cVar1 = FUN_01c29d30(param_1,L"Out-"), cVar1 == '\0')) {
                  cVar1 = FUN_01c29d30(param_1,&DAT_01c2b704);
                  if (cVar1 == '\0') {
                    FUN_00416cd0(param_2,3,param_1[0xf],local_30,L" <AutoShape> [Comparator]");
                  }
                  else {
                    uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
                    FUN_0043f750(&local_90,uVar4);
                    FUN_00416cd0(param_2,5,param_1[0xf],local_30,L" TinaICs:<Amplifier",local_90,
                                 L"> [Comparator]");
                  }
                }
                else {
                  uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
                  FUN_0043f750(&local_88,uVar4);
                  FUN_00416cd0(param_2,5,param_1[0xf],local_30,L" TinaICs:<Comparator",local_88,
                               L"DO> [Comparator]");
                }
              }
              else {
                uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
                FUN_0043f750(&local_80,uVar4);
                FUN_00416cd0(param_2,5,param_1[0xf],local_30,L" TinaICs:<Comparator",local_80,
                             L"CO> [Comparator]");
              }
            }
            else {
              uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
              FUN_0043f750(&local_78,uVar4);
              FUN_00416cd0(param_2,5,param_1[0xf],local_30,L" TinaICs:<Comparator",local_78,
                           L"COG> [Comparator]");
            }
          }
        }
        else {
          iVar3 = FUN_00416db0(local_40,L"[InstAmp]");
          if (iVar3 == 0) {
            bVar2 = FUN_01c2a160(param_1);
            FUN_01c2bdb0(param_1);
            FUN_00414480(&local_30);
            iVar3 = (**(code **)(*param_1 + 0x28))();
            iVar5 = 0;
            if (-1 < iVar3 + -1) {
              do {
                (**(code **)(*param_1 + 0x18))(param_1,&local_98,iVar5);
                FUN_00416cd0(&local_30,3,local_30,local_98,&DAT_01c2b404);
                iVar5 = iVar5 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
            if ((bVar2 & iVar3 < 10) == 0) {
              FUN_00416cd0(param_2,3,param_1[0xf],local_30,L" <AutoShape>  [InstAmp]");
            }
            else {
              uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
              FUN_0043f750(&local_a0,uVar4);
              FUN_00416cd0(param_2,5,param_1[0xf],local_30,L" TinaICs:<Amplifier",local_a0,
                           L"> [InstAmp]");
            }
          }
          else {
            iVar3 = FUN_00416db0(local_40,L"[NPN]");
            if ((iVar3 == 0) || (iVar3 = FUN_00416db0(local_40,L"[NMOS]"), iVar3 == 0)) {
              FUN_01c2bdb0(param_1);
              FUN_00414480(&local_30);
              iVar3 = (**(code **)(*param_1 + 0x28))();
              iVar5 = 0;
              if (-1 < iVar3 + -1) {
                do {
                  (**(code **)(*param_1 + 0x18))(param_1,&local_a8,iVar5);
                  FUN_00416cd0(&local_30,3,local_30,local_a8,&DAT_01c2b404);
                  iVar5 = iVar5 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              iVar3 = FUN_00416db0(local_40,L"[NPN]");
              if (iVar3 == 0) {
                FUN_00416cd0(param_2,3,param_1[0xf],local_30,L"TinaICs:<NPN> [NPN]");
              }
              else {
                FUN_00416cd0(param_2,3,param_1[0xf],local_30,L"TinaICs:<NMOSE> [NMOS]");
              }
            }
            else {
              cVar1 = FUN_01c29d30(param_1,&DAT_01c2b9e0);
              if ((cVar1 != '\0') &&
                 ((((cVar1 = FUN_01c29d30(param_1,&DAT_01c2b9f4), cVar1 != '\0' &&
                    (cVar1 = FUN_01c29d30(param_1,&DAT_01c2ba08), cVar1 != '\0')) &&
                   (cVar1 = FUN_01c29d30(param_1,&DAT_01c2ba1c), cVar1 != '\0')) &&
                  ((cVar1 = FUN_01c29d30(param_1,&DAT_01c2b704), cVar1 != '\0' &&
                   (iVar3 = (**(code **)(*param_1 + 0x28))(param_1), iVar3 == 5)))))) {
                FUN_00414b50(&local_40,local_res18[0]);
              }
              bVar2 = FUN_01c2a160(param_1);
              FUN_01c2bdb0(param_1);
              FUN_00414480(&local_30);
              iVar3 = (**(code **)(*param_1 + 0x28))();
              iVar5 = 0;
              if (-1 < iVar3 + -1) {
                do {
                  (**(code **)(*param_1 + 0x18))(param_1,&local_b0,iVar5);
                  FUN_00416cd0(&local_30,3,local_30,local_b0,&DAT_01c2b404);
                  iVar5 = iVar5 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
              if ((bVar2 & iVar3 < 6) == 0) {
                FUN_00416cd0(param_2,4,param_1[0xf],local_30,L" <AutoShape>  ",local_40);
              }
              else {
                uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
                FUN_0043f750(&local_b8,uVar4);
                FUN_00416cd0(param_2,6,param_1[0xf],local_30,L" TinaICs:<Amplifier",local_b8,
                             &DAT_01c2ba30,local_40);
              }
            }
          }
        }
      }
    }
  }
  FUN_00414560(&local_b8,0xe);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res18);
  return param_2;
}

