/* Ghidra address: 019b87b0 */
/* Ghidra symbol: FUN_019b87b0 */


void FUN_019b87b0(undefined8 param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                 longlong param_5)

{
  bool bVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [3];
  
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  FUN_00414480();
  *param_4 = 0;
  bVar1 = true;
  iVar2 = param_2;
  if (*(char *)(param_5 + 0xb0) == '\x01') {
    iVar2 = 0;
  }
  if (-1 < param_2) {
    param_2 = param_2 + 1;
    do {
      dVar3 = (double)FUN_019b9700(param_1,iVar2,param_5);
      if (dVar3 != 0.0) {
        dVar3 = (double)FUN_019b9700(param_1,iVar2,param_5);
        dVar4 = (double)FUN_0040c850(dVar3 - 1.0);
        if (1e-100 <= dVar4) {
          dVar4 = (double)FUN_0040c850(dVar3 + 1.0);
          if (1e-100 <= dVar4) {
            if ((0.0 < dVar3) && (!bVar1)) {
              FUN_00416ad0(param_3,&DAT_019b8edc);
              FUN_019b6e50(param_4,&DAT_019b8edc,param_5);
            }
            FUN_00efa6e0(&local_180,dVar3,*(undefined1 *)(param_5 + 0xe98));
            FUN_00416ad0(param_3,local_180);
            FUN_00efa6e0(&local_188,dVar3,*(undefined1 *)(param_5 + 0xe98));
            FUN_019b6e50(param_4,local_188,param_5);
            if (0 < iVar2) {
              FUN_00416ad0(param_3,&LAB_019b8f68);
              FUN_019b6e50(param_4,&LAB_019b8f68,param_5);
              if (1 < iVar2) {
                FUN_00416ad0(param_3,&DAT_019b8eec);
                FUN_019b6e50(param_4,&DAT_019b8eec,param_5);
              }
              FUN_004169a0(&local_190,&DAT_01fc13d4);
              FUN_00416ad0(param_3,local_190);
              FUN_004169a0(&local_198,&DAT_01fc13d4);
              FUN_019b6e50(param_4,local_198,param_5);
              FUN_0040e780(local_158,iVar2,1);
              FUN_004169a0(local_40,local_158);
              if (1 < iVar2) {
                FUN_00416cd0(param_3,4,*param_3,&DAT_019b8f00,local_40[0],&DAT_019b8f10);
                FUN_00416cd0(&local_1a0,3,&DAT_019b8f00,local_40[0],&DAT_019b8f10);
                FUN_019b6e50(param_4,local_1a0,param_5);
              }
            }
          }
          else if (iVar2 < 1) {
            FUN_00416ad0(param_3,&DAT_019b8f54);
            FUN_019b6e50(param_4,&DAT_019b8f54,param_5);
          }
          else {
            FUN_00416ad0(param_3,&DAT_019b8f44);
            FUN_019b6e50(param_4,&DAT_019b8f44,param_5);
            if (1 < iVar2) {
              FUN_00416ad0(param_3,&DAT_019b8eec);
              FUN_019b6e50(param_4,&DAT_019b8eec,param_5);
            }
            FUN_004169a0(&local_168,&DAT_01fc13d4);
            FUN_00416ad0(param_3,local_168);
            FUN_004169a0(&local_170,&DAT_01fc13d4);
            FUN_019b6e50(param_4,local_170,param_5);
            FUN_0040e780(local_158,iVar2,1);
            FUN_004169a0(local_40,local_158);
            if (1 < iVar2) {
              FUN_00416cd0(param_3,4,*param_3,&DAT_019b8f00,local_40[0],&DAT_019b8f10);
              FUN_00416cd0(&local_178,3,&DAT_019b8f00,local_40[0],&DAT_019b8f10);
              FUN_019b6e50(param_4,local_178,param_5);
            }
          }
        }
        else if (iVar2 < 1) {
          if (bVar1) {
            FUN_00416ad0(param_3,&DAT_019b8f20);
            FUN_019b6e50(param_4,&DAT_019b8f20,param_5);
          }
          else {
            FUN_00416ad0(param_3,&DAT_019b8f30);
            FUN_019b6e50(param_4,&DAT_019b8f30,param_5);
          }
        }
        else {
          if (!bVar1) {
            FUN_00416ad0(param_3,&DAT_019b8edc);
            FUN_019b6e50(param_4,&DAT_019b8edc,param_5);
          }
          if (1 < iVar2) {
            FUN_00416ad0(param_3,&DAT_019b8eec);
            FUN_019b6e50(param_4,&DAT_019b8eec,param_5);
          }
          FUN_004169a0(local_50,&DAT_01fc13d4);
          FUN_00416ad0(param_3,local_50[0]);
          FUN_004169a0(&local_58,&DAT_01fc13d4);
          FUN_019b6e50(param_4,local_58,param_5);
          FUN_0040e780(local_158,iVar2,1);
          FUN_004169a0(local_40,local_158);
          if (1 < iVar2) {
            FUN_00416cd0(param_3,4,*param_3,&DAT_019b8f00,local_40[0],&DAT_019b8f10);
            FUN_00416cd0(&local_160,3,&DAT_019b8f00,local_40[0],&DAT_019b8f10);
            FUN_019b6e50(param_4,local_160,param_5);
          }
        }
        bVar1 = false;
      }
      if (*(char *)(param_5 + 0xb0) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = iVar2 + -1;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_00414560(&local_1a0,9);
  FUN_00414560(&local_58,2);
  FUN_00414480(local_40);
  return;
}

