/* Ghidra address: 01079c90 */
/* Ghidra symbol: FUN_01079c90 */


void FUN_01079c90(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  FUN_006df690(param_1);
  iVar2 = FUN_006decb0();
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_006df500(param_1,local_1c);
      iVar3 = FUN_006ddf30(uVar1);
      if (iVar3 < param_2) {
        uVar1 = FUN_006df500(param_1,local_1c);
        FUN_006dd070(uVar1,0);
      }
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_006df710(param_1);
  return;
}

