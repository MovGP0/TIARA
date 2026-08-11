/* Ghidra address: 01804ec0 */
/* Ghidra symbol: FUN_01804ec0 */


void FUN_01804ec0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  char *local_40 [2];
  
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_40[0] = (char *)0x0;
  FUN_00414480(param_3);
  iVar6 = 0;
  cVar5 = '\0';
  iVar4 = 0;
  iVar2 = 0x1000;
  FUN_00415d10(local_40,0x1000,0);
  lVar3 = FUN_00414df0(local_40);
LAB_0180503b:
  do {
    if (*(longlong *)(param_1 + 0x20) <= *(longlong *)(param_1 + 0x18)) {
code_r0x0180504e:
      FUN_00415d10(local_40,iVar4,0);
      if (cVar5 == '\x01') {
        FUN_01804cf0(param_1);
      }
      if ((local_40[0] != (char *)0x0) && (local_40[0][(longlong)iVar4 + -1] == ' ')) {
        FUN_00415d10(local_40,iVar4 + -1,0);
      }
      iVar2 = FUN_00417250(&LAB_018051b4,local_40[0],1);
      if (iVar2 != 0) {
        if (*(char *)(param_1 + 0x30) == '\0') {
          FUN_00415ad0(&local_60,local_40[0],iVar2 + 1,iVar4 - iVar2);
          FUN_0041d9e0(&local_58,local_60);
          FUN_004168b0(param_3,local_58);
        }
        else {
          FUN_00415ad0(local_50,local_40[0],iVar2 + 1,iVar4 - iVar2);
          FUN_00416880(param_3,local_50[0]);
        }
        FUN_00415b50(local_40,iVar2,(iVar4 - iVar2) + 1);
      }
      FUN_00416880(param_2,local_40[0]);
      FUN_004144d0(&local_60);
      FUN_00414520(&local_58);
      FUN_004144d0(local_50);
      FUN_004144d0(local_40);
      return;
    }
    if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
      FUN_01804c90(param_1);
    }
    cVar1 = *(char *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x10));
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
    if (cVar5 == '\0') {
      if (cVar1 == '<') {
        cVar5 = '\x01';
      }
      goto LAB_0180503b;
    }
    if (cVar5 == '\x01') {
      if (cVar1 == '>') {
        cVar5 = '\x03';
        goto code_r0x0180504e;
      }
      if (cVar1 == '<') {
        FUN_01804cf0(param_1);
      }
      else {
        *(char *)(lVar3 + iVar4) = cVar1;
        iVar4 = iVar4 + 1;
        if ((((iVar4 == 3) && (2 < iVar2)) && (*local_40[0] == '!')) &&
           ((local_40[0][1] == '-' && (local_40[0][2] == '-')))) {
          cVar5 = '\x02';
          iVar6 = 0;
          iVar4 = 0;
        }
        if (iVar2 + -1 <= iVar4) {
          iVar2 = iVar2 + 0x1000;
          FUN_00415d10(local_40,iVar2,0);
          lVar3 = FUN_00414df0(local_40);
        }
      }
    }
    else if (cVar5 == '\x02') {
      if (iVar6 == 2) {
        if (cVar1 == '>') {
          cVar5 = '\0';
        }
        else {
          iVar6 = 0;
        }
      }
      else if (cVar1 == '-') {
        iVar6 = iVar6 + 1;
      }
      else {
        iVar6 = 0;
      }
    }
  } while( true );
}

