/* Ghidra address: 00818480 */
/* Ghidra symbol: FUN_00818480 */


void FUN_00818480(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  *(undefined1 *)(param_1 + 0x118) = 1;
  FUN_008199e0(param_1);
  iVar1 = FUN_007ff9d0();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = FUN_008199e0(param_1);
      lVar4 = FUN_007ffa40(uVar3,local_1c);
      if (*(char *)(lVar4 + 0xa9) != '\0') {
        uVar3 = FUN_008199e0(param_1);
        uVar3 = FUN_007ffa40(uVar3,local_1c);
        uVar5 = FUN_008199e0(param_1);
        uVar5 = FUN_007ffa40(uVar5,local_1c);
        iVar2 = FUN_007fd7d0(uVar5);
        FUN_00806af0(uVar3,iVar2 + param_2);
      }
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined1 *)(param_1 + 0x118) = 0;
  FUN_00818770(param_1,0);
  return;
}

