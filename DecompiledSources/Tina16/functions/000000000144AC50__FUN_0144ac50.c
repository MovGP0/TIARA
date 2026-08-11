/* Ghidra address: 0144ac50 */
/* Ghidra symbol: FUN_0144ac50 */


undefined8
FUN_0144ac50(undefined8 param_1,double *param_2,double *param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined8 local_res20;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  short *local_50;
  double local_48;
  double local_40;
  double local_38;
  double dStack_30;
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_50 = (short *)0x0;
  local_38 = *param_2;
  dStack_30 = param_2[1];
  local_48 = *param_3;
  local_40 = param_3[1];
  local_res20 = param_4;
  FUN_00414610(param_4);
  if (*(char *)(param_5 + 0x92) == '\0') {
    if (local_40 == 0.0) {
      if (local_38 == 0.0) {
        FUN_00414480(&local_50);
      }
      else {
        dVar2 = (double)FUN_0040c850(local_38 - 1.0);
        if (1e-100 <= dVar2) {
          dVar2 = (double)FUN_0040c850(local_38 + 1.0);
          if (1e-100 <= dVar2) {
            FUN_00efa6e0(&local_50,local_38,*(undefined1 *)(param_5 + 0xe98));
          }
          else {
            FUN_00414b50(&local_50,&DAT_0144b648);
          }
        }
        else {
          FUN_00414480(&local_50);
        }
        if (local_48 == 0.0) {
          dVar2 = (double)FUN_0040c850(local_38);
          dVar2 = (double)FUN_0040c850(dVar2 - 1.0);
          if (dVar2 < 1e-100) {
            FUN_00416ad0(&local_50,&DAT_0144b658);
          }
        }
        else {
          dVar2 = (double)FUN_0040c850(local_48 - 1.0);
          if (1e-100 <= dVar2) {
            dVar2 = (double)FUN_0040c850(local_48 + 1.0);
            if (1e-100 <= dVar2) {
              dVar2 = (double)FUN_0040c850(local_38);
              dVar2 = (double)FUN_0040c850(dVar2 - 1.0);
              if (1e-100 <= dVar2) {
                FUN_00efa6e0(&local_68,local_48,*(undefined1 *)(param_5 + 0xe98));
                FUN_00416cd0(&local_50,6,local_50,L"*\\e(e,",local_68,&DAT_0144b6e4,local_res20,
                             &DAT_0144b680);
              }
              else {
                FUN_00efa6e0(local_60,local_48,*(undefined1 *)(param_5 + 0xe98));
                FUN_00416cd0(&local_50,6,local_50,L"\\e(e,",local_60[0],&DAT_0144b6e4,local_res20,
                             &DAT_0144b680);
              }
            }
            else {
              dVar2 = (double)FUN_0040c850(local_38);
              dVar2 = (double)FUN_0040c850(dVar2 - 1.0);
              if (1e-100 <= dVar2) {
                FUN_00416cd0(&local_50,4,local_50,L"*\\e(e,-",local_res20,&DAT_0144b680);
              }
              else {
                FUN_00416cd0(&local_50,4,local_50,L"\\e(e,-",local_res20,&DAT_0144b680);
              }
            }
          }
          else {
            dVar2 = (double)FUN_0040c850(local_38);
            dVar2 = (double)FUN_0040c850(dVar2 - 1.0);
            if (1e-100 <= dVar2) {
              FUN_00416cd0(&local_50,4,local_50,L"*\\e(e,",local_res20,&DAT_0144b680);
            }
            else {
              FUN_00416cd0(&local_50,4,local_50,L"\\e(e,",local_res20,&DAT_0144b680);
            }
          }
        }
      }
    }
    else {
      dVar2 = (double)FUN_00c44590(&local_38);
      dVar2 = dVar2 * 2.0;
      if (dVar2 == 0.0) {
        FUN_00414480(&local_50);
      }
      else {
        dVar3 = (double)FUN_0040c850(dVar2 - 1.0);
        if (1e-100 <= dVar3) {
          dVar3 = (double)FUN_0040c850(dVar2 + 1.0);
          if (1e-100 <= dVar3) {
            FUN_00efa6e0(&local_50,dVar2,*(undefined1 *)(param_5 + 0xe98));
          }
          else {
            FUN_00414b50(&local_50,&DAT_0144b648);
          }
        }
        else {
          FUN_00414480(&local_50);
        }
        if (local_48 != 0.0) {
          dVar3 = (double)FUN_0040c850(local_48 - 1.0);
          if (1e-100 <= dVar3) {
            dVar3 = (double)FUN_0040c850(local_48 + 1.0);
            if (1e-100 <= dVar3) {
              dVar2 = (double)FUN_0040c850(dVar2);
              dVar2 = (double)FUN_0040c850(dVar2 - 1.0);
              if (1e-100 <= dVar2) {
                FUN_00efa6e0(&local_78,local_48,*(undefined1 *)(param_5 + 0xe98));
                FUN_00416cd0(&local_50,6,local_50,L"*\\e(e,",local_78,&DAT_0144b6e4,local_res20,
                             &DAT_0144b680);
              }
              else {
                FUN_00efa6e0(&local_70,local_48,*(undefined1 *)(param_5 + 0xe98));
                FUN_00416cd0(&local_50,6,local_50,L"\\e(e,",local_70,&DAT_0144b6e4,local_res20,
                             &DAT_0144b680);
              }
            }
            else {
              dVar2 = (double)FUN_0040c850(dVar2);
              dVar2 = (double)FUN_0040c850(dVar2 - 1.0);
              if (1e-100 <= dVar2) {
                FUN_00416cd0(&local_50,4,local_50,L"*\\e(e,-",local_res20,&DAT_0144b680);
              }
              else {
                FUN_00416cd0(&local_50,4,local_50,L"\\e(e,-",local_res20,&DAT_0144b680);
              }
            }
          }
          else {
            dVar2 = (double)FUN_0040c850(dVar2);
            dVar2 = (double)FUN_0040c850(dVar2 - 1.0);
            if (1e-100 <= dVar2) {
              FUN_00416cd0(&local_50,4,local_50,L"*\\e(e,",local_res20,&DAT_0144b680);
            }
            else {
              FUN_00416cd0(&local_50,4,local_50,L"\\e(e,",local_res20,&DAT_0144b680);
            }
          }
        }
        dVar2 = (double)FUN_00c445d0(&local_38);
        if (dVar2 == 0.0) {
          FUN_00416ad0(&local_50,L"*cos(");
        }
        else {
          FUN_00efa6e0(&local_80,dVar2,*(undefined1 *)(param_5 + 0xe98));
          FUN_00416cd0(&local_50,3,local_50,L"*cos(",local_80);
        }
        if (local_40 <= 0.0) {
          FUN_00efa6e0(&local_90,local_40,*(undefined1 *)(param_5 + 0xe98));
          FUN_00416cd0(&local_50,5,local_50,local_90,&DAT_0144b6e4,local_res20,&DAT_0144b680);
        }
        else {
          FUN_00efa6e0(&local_88,local_40,*(undefined1 *)(param_5 + 0xe98));
          FUN_00416cd0(&local_50,6,local_50,&DAT_0144b70c,local_88,&DAT_0144b6e4,local_res20,
                       &DAT_0144b680);
        }
      }
    }
    iVar1 = 0;
    if (local_50 != (short *)0x0) {
      iVar1 = *(int *)(local_50 + -2);
    }
    if ((iVar1 < 1) || (*local_50 == 0x2d)) {
      FUN_00414ad0(param_1,local_50);
    }
    else {
      FUN_00416ba0(param_1,&DAT_0144b70c,local_50);
    }
  }
  FUN_00414560(&local_90,7);
  FUN_00414480(&local_50);
  FUN_00414480(&local_res20);
  return param_1;
}

