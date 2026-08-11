/* Ghidra address: 010c0200 */
/* Ghidra symbol: FUN_010c0200 */


void FUN_010c0200(longlong param_1,int *param_2,ulonglong param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined2 local_128 [4];
  undefined8 local_120 [2];
  undefined1 local_10c;
  byte local_10b;
  int local_c;
  
  cVar2 = (char)param_3;
  local_120[0] = 0;
  local_c = *param_2;
  if (*param_2 < 0) {
    if (cVar2 == '\0') {
      local_128[0] = 0x3001;
      FUN_004152c0(local_128,param_1,0xff,1);
      local_c = local_c + 1;
      FUN_010c0200(param_1,&local_c,param_3 & 0xff,param_4);
      *param_2 = local_c;
    }
  }
  else {
    local_10c = 1;
    local_10b = *(byte *)(param_1 + (*param_2 + 1));
    if ((byte)(local_10b - 0x30) < 0x10) {
      uVar3 = (int)CONCAT62((int6)(param_3 >> 0x10),1) << (local_10b - 0x30 & 0x1f);
      bVar5 = (uVar3 & 0x3ff) != 0;
      uVar4 = (ulonglong)uVar3;
    }
    else {
      bVar5 = false;
      uVar4 = param_3;
    }
    if (bVar5) {
      FUN_004169a0(local_120,&local_10c);
      iVar1 = FUN_00b91560(local_120[0]);
      local_c = local_c + -1;
      if (cVar2 == '\0') {
        iVar1 = iVar1 + 1;
        if (iVar1 == 10) {
          FUN_010c0200(param_1,&local_c,param_3 & 0xff,param_4);
          iVar1 = 0;
        }
      }
      else {
        iVar1 = iVar1 + -1;
        if (iVar1 == -1) {
          if (*param_2 == 0) {
            iVar1 = 0;
            *param_4 = '\x01';
          }
          else {
            FUN_010c0200(param_1,&local_c,param_3 & 0xff,param_4);
            if (*param_4 == '\0') {
              iVar1 = 9;
            }
            else {
              iVar1 = 0;
            }
          }
        }
      }
      FUN_0040e840(&local_10c,iVar1);
      *param_2 = local_c + 1;
      FUN_00415260(param_1,0xff,*param_2 + 1,local_10c);
      FUN_004152c0(&local_10c,param_1,0xff,*param_2 + 1);
    }
    else {
      if ((byte)(local_10b - 0x28) < 8) {
        bVar5 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (local_10b - 0x28 & 0x1f) & 0x28U) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        if (cVar2 == '\0') {
          local_10b = 0x2b;
        }
        else {
          local_10b = 0x2d;
        }
        FUN_00415260(param_1,0xff,*param_2 + 1,1);
        FUN_004152c0(&local_10c,param_1,0xff,*param_2 + 1);
      }
      else {
        local_c = local_c + -1;
        if (local_10b == DAT_0202f960) {
          FUN_010c0200(param_1,&local_c,param_3 & 0xff,param_4);
        }
        *param_2 = local_c + 1;
      }
    }
  }
  FUN_00414480(local_120);
  return;
}

