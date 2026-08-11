/* Ghidra address: 0181f230 */
/* Ghidra symbol: FUN_0181f230 */


void FUN_0181f230(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [2];
  
  local_50[0] = 0;
  local_58 = 0;
  local_40[0] = 0;
  FUN_00414480(param_3);
  iVar7 = 0;
  cVar6 = '\0';
  iVar5 = 0;
  iVar3 = 0x1000;
  FUN_00415d10(local_40,0x1000,0);
  lVar4 = FUN_00414df0(local_40);
LAB_0181f3b1:
  do {
    if (*(longlong *)(param_1 + 0x20) <= *(longlong *)(param_1 + 0x18)) {
code_r0x0181f3c4:
      FUN_00415d10(local_40,iVar5,0);
      if (cVar6 == '\x01') {
        FUN_0181f120(param_1);
      }
      if ((local_40[0] != 0) && (*(char *)(local_40[0] + -1 + (longlong)iVar5) == ' ')) {
        FUN_00415d10(local_40,iVar5 + -1,0);
      }
      iVar3 = FUN_00417250(&LAB_0181f4ec,local_40[0],1);
      if (iVar3 != 0) {
        FUN_00415ad0(&local_58,local_40[0],iVar3 + 1,iVar5 - iVar3);
        FUN_0041d9e0(local_50,local_58);
        FUN_004168b0(param_3,local_50[0]);
        FUN_00415b50(local_40,iVar3,(iVar5 - iVar3) + 1);
      }
      FUN_00416880(param_2,local_40[0]);
      FUN_004144d0(&local_58);
      FUN_00414520(local_50);
      FUN_004144d0(local_40);
      return;
    }
    if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
      FUN_0181f0c0(param_1);
    }
    cVar1 = *(char *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x10));
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
    if (cVar6 == '\0') {
      if (cVar1 == '<') {
        cVar6 = '\x01';
      }
      goto LAB_0181f3b1;
    }
    if (cVar6 == '\x01') {
      if (cVar1 == '>') {
        cVar6 = '\x03';
        goto code_r0x0181f3c4;
      }
      if (cVar1 == '<') {
        FUN_0181f120(param_1);
      }
      else {
        *(char *)(lVar4 + iVar5) = cVar1;
        iVar5 = iVar5 + 1;
        if (iVar5 == 3) {
          iVar2 = FUN_00417250(&DAT_0181f4dc,local_40[0],1);
          if (iVar2 == 1) {
            cVar6 = '\x02';
            iVar7 = 0;
            iVar5 = 0;
          }
        }
        if (iVar3 + -1 <= iVar5) {
          iVar3 = iVar3 + 0x1000;
          FUN_00415d10(local_40,iVar3,0);
          lVar4 = FUN_00414df0(local_40);
        }
      }
    }
    else if (cVar6 == '\x02') {
      if (iVar7 == 2) {
        if (cVar1 == '>') {
          cVar6 = '\0';
        }
        else {
          iVar7 = 0;
        }
      }
      else if (cVar1 == '-') {
        iVar7 = iVar7 + 1;
      }
      else {
        iVar7 = 0;
      }
    }
  } while( true );
}

