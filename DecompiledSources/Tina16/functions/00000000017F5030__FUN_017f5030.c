/* Ghidra address: 017f5030 */
/* Ghidra symbol: FUN_017f5030 */


void FUN_017f5030(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x1c8))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x1f0))
                (*(longlong **)(param_1 + 0xa8),iVar4,&local_4c,&local_50);
      uVar3 = FUN_0198d430(*(undefined8 *)(param_1 + 0xa0));
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x50))
                (*(longlong **)(param_1 + 0xa8),uVar3,&local_38);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x1e0))
                        (*(longlong **)(param_1 + 0xa8),iVar4);
      if (cVar1 == '\0') {
        if (local_4c < (local_38 + local_30) / 2) {
          local_48 = local_4c + -10;
        }
        else {
          local_48 = local_4c + 6;
        }
        local_44 = local_50 + -2;
      }
      else if (cVar1 == '\x01') {
        local_48 = local_4c + -2;
        if (local_50 < (local_34 + local_2c) / 2) {
          local_44 = local_50 + -10;
        }
        else {
          local_44 = local_50 + 6;
        }
      }
      local_40 = local_48 + 4;
      local_3c = local_44 + 4;
      FUN_00b957c0(param_1 + 0x50,&local_48);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

