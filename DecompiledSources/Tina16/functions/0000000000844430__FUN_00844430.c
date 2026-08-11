/* Ghidra address: 00844430 */
/* Ghidra symbol: FUN_00844430 */


int FUN_00844430(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
  iVar3 = *(int *)(param_1 + 0xe0);
  if (iVar3 < 4) {
    if (iVar3 == 3) {
      iVar3 = FUN_008443c0(param_1);
      param_2 = param_2 + iVar3 * param_3;
    }
    else if (iVar3 == 0) {
      param_2 = param_2 - param_3;
    }
    else if (iVar3 == 1) {
      param_2 = param_2 + param_3;
    }
    else if (iVar3 == 2) {
      iVar3 = FUN_00844350(param_1);
      param_2 = param_2 - iVar3 * param_3;
    }
  }
  else if (iVar3 - 4U < 2) {
    if (((*(uint *)(*(longlong *)(param_1 + 0xd0) + 0x4d4) & 0x4000) != 0) ||
       (*(int *)(param_1 + 0xe0) == 4)) {
      uVar1 = *(undefined8 *)(param_1 + 0xd0);
      pcVar5 = (code *)FUN_00411550(uVar1,0xffc5);
      cVar2 = (*pcVar5)(uVar1);
      if ((cVar2 == '\0') || (param_3 == 1)) {
        param_2 = FUN_00844300(param_1);
        iVar3 = FUN_00844330(param_1);
        iVar4 = FUN_00844300(param_1);
        iVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0xe8),iVar3 - iVar4,0x7f);
        param_2 = param_2 + iVar3;
      }
      else {
        param_2 = FUN_00844330(param_1);
        iVar3 = FUN_00844330(param_1);
        iVar4 = FUN_00844300(param_1);
        iVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0xe8),iVar3 - iVar4,0x7f);
        param_2 = param_2 - iVar3;
      }
    }
  }
  else if (iVar3 == 6) {
    param_2 = FUN_00844300(param_1);
  }
  else if (iVar3 == 7) {
    param_2 = FUN_00844330(param_1);
  }
  return param_2;
}

