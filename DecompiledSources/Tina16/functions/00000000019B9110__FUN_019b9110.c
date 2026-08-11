/* Ghidra address: 019b9110 */
/* Ghidra symbol: FUN_019b9110 */


void FUN_019b9110(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20[0] = 0;
  if (*(char *)(param_1 + 0x92) == '\0') {
    local_28 = 0;
    local_30 = 0;
    local_38 = 0;
    if (*(char *)(param_1 + 0xb1) == '\0') {
      FUN_00416cd0(&local_40,5,L"\\i(W,",*(undefined8 *)(param_1 + 0x68),&DAT_019b9648,&DAT_019b965c
                   ,&DAT_019b966c);
      FUN_019b6e50(&local_38,local_40,param_1);
    }
    else {
      if (*(longlong *)(param_1 + 0x68) == 0) {
        if (*(char *)(param_1 + 0xb4) == '\x01') {
          FUN_019b6e50(&local_38,&DAT_019b95e8,param_1);
        }
        else if ((*PTR_DAT_020052b8 == '\0') || (*(char *)(param_1 + 0xb2) == '\0')) {
          FUN_019b6e50(&local_38,&DAT_019b95f8,param_1);
        }
        else {
          FUN_019b6e50(&local_38,&DAT_019b95e8,param_1);
        }
      }
      else {
        FUN_019b6e50(&local_38,*(undefined8 *)(param_1 + 0x68),param_1);
      }
      if (*(char *)(param_1 + 0xb2) == '\0') {
        FUN_019b6e50(&local_38,L"(s)=",param_1);
      }
      else {
        FUN_019b6e50(&local_38,&DAT_019b9608,param_1);
      }
    }
    FUN_019b8560(param_1);
    FUN_019b87b0(*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x45),local_20,&local_28,
                 param_1);
    FUN_019b87b0(*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x44),local_20,&local_30,
                 param_1);
    if ((*(char *)(param_1 + 0x44) == '\0') &&
       (dVar4 = (double)FUN_019b9700(*(undefined8 *)(param_1 + 0x20),0,param_1), dVar4 == 1.0)) {
      *(undefined1 *)(param_1 + 0xb3) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xb3) = 0;
    }
    iVar3 = FUN_019b5ce0(local_28,param_1);
    if (iVar3 == 0) {
      FUN_019b6e50(&local_28,&DAT_019b9680,param_1);
    }
    iVar3 = FUN_019b5ce0(local_30,param_1);
    if (iVar3 == 0) {
      FUN_019b6e50(&local_30,&DAT_019b9680,param_1);
    }
    if (*(char *)(param_1 + 0xb3) == '\0') {
      if (*(double *)(param_1 + 0xa0) != 1.0) {
        FUN_00efa6e0(&local_50,*(undefined8 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0xe98));
        FUN_00416ad0(&local_50,&DAT_019b9690);
        FUN_019b6e50(&local_38,local_50,param_1);
      }
      FUN_019b6e50(&local_38,&DAT_019b96e0,param_1);
      FUN_019b6f10(&local_38,local_28,param_1);
      FUN_019b6e50(&local_38,&LAB_019b96f4,param_1);
      FUN_019b6f10(&local_38,local_30,param_1);
      FUN_019b6e50(&local_38,&DAT_019b96d0,param_1);
      FUN_019b9050(local_38,param_1);
    }
    else {
      FUN_00efa6e0(local_20,*(undefined8 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0xe98));
      iVar3 = FUN_019b5ce0(local_28,param_1);
      if ((iVar3 < 1) || (cVar2 = FUN_019b6120(local_28,&DAT_019b9680,param_1), cVar2 != '\0')) {
        FUN_019b6e50(&local_38,local_20[0],param_1);
      }
      else {
        FUN_00416ba0(&local_48,local_20[0],&DAT_019b9690);
        FUN_019b6e50(&local_38,local_48,param_1);
        bVar1 = false;
        if (((*(short *)(local_28 + 2) == 0x2d) ||
            (iVar3 = FUN_019b5d30(&DAT_019b96a0,local_28,param_1), -1 < iVar3)) ||
           (iVar3 = FUN_019b5d30(&DAT_019b96b0,local_28,param_1), 0 < iVar3)) {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_019b6e50(&local_38,&DAT_019b96c0,param_1);
        }
        FUN_019b6f10(&local_38,local_28,param_1);
        if (bVar1) {
          FUN_019b6e50(&local_38,&DAT_019b96d0,param_1);
        }
      }
      FUN_019b9050(local_38,param_1);
    }
    FUN_019b6320(&local_28);
    FUN_019b6320(&local_30);
    FUN_019b6320(&local_38);
  }
  FUN_00414560(&local_50,3);
  FUN_00414480(local_20);
  return;
}

