/* Ghidra address: 017c2e60 */
/* Ghidra symbol: FUN_017c2e60 */


void FUN_017c2e60(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 local_res10;
  undefined2 uStackX_12;
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  
  uVar1 = FUN_017c2c60(param_1,0);
  iVar2 = FUN_017c2b70();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_017c2c60(param_1,iVar4);
      local_30 = (short)uVar3;
      local_2c = (short)uVar1;
      local_res10 = (short)param_2;
      uStack_2e = (short)((uint)uVar3 >> 0x10);
      uStack_2a = (short)((uint)uVar1 >> 0x10);
      uStackX_12 = (short)((uint)param_2 >> 0x10);
      uVar3 = FUN_00b92120(((int)local_30 - (int)local_2c) + (int)local_res10,
                           ((int)uStack_2e - (int)uStack_2a) + (int)uStackX_12);
      FUN_017c2cc0(param_1,iVar4,uVar3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

