/* Ghidra address: 0043f210 */
/* Ghidra symbol: FUN_0043f210 */


undefined8 FUN_0043f210(short *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  short local_2e;
  short local_2c;
  short local_2a [5];
  
  uVar4 = 0;
  iVar5 = 0;
  if (param_1 != (short *)0x0) {
    iVar5 = *(int *)(param_1 + -2);
  }
  if (iVar5 == 0) {
    bVar1 = true;
  }
  else {
    local_2a[0] = *param_1;
    cVar2 = FUN_00432150(local_2a);
    if ((cVar2 == '\0') && (local_2a[0] != 0x5f)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (!bVar1) {
    if (param_2 == '\0') {
      iVar5 = 0;
      if (param_1 != (short *)0x0) {
        iVar5 = *(int *)(param_1 + -2);
      }
      iVar3 = 2;
      if (1 < iVar5) {
        iVar5 = iVar5 + -1;
        do {
          local_2e = param_1[(longlong)iVar3 + -1];
          cVar2 = FUN_004321f0(&local_2e);
          if ((cVar2 == '\0') && (local_2e != 0x5f)) {
            return 0;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      iVar5 = 0;
      if (param_1 != (short *)0x0) {
        iVar5 = *(int *)(param_1 + -2);
      }
      iVar3 = 2;
      if (1 < iVar5) {
        iVar5 = iVar5 + -1;
        do {
          local_2c = param_1[(longlong)iVar3 + -1];
          cVar2 = FUN_004321f0(&local_2c);
          if (((cVar2 == '\0') && (local_2c != 0x5f)) && (local_2c != 0x2e)) {
            return 0;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

