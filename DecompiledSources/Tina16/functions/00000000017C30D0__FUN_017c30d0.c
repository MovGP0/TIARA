/* Ghidra address: 017c30d0 */
/* Ghidra symbol: FUN_017c30d0 */


void FUN_017c30d0(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined2 local_34;
  undefined2 uStack_32;
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  
  iVar6 = 0;
  bVar1 = false;
  while( true ) {
    iVar5 = FUN_017c2b70(param_1);
    if (iVar5 + -1 <= iVar6) break;
    uVar2 = FUN_017c2c60(param_1,iVar6);
    uVar3 = FUN_017c2c60(param_1,iVar6 + 1);
    uVar4 = FUN_017c2c60(param_1,iVar6 + 2);
    iVar5 = FUN_017c2b70(param_1);
    if ((iVar6 < iVar5 + -2) &&
       (((local_2c = (short)uVar2, local_30 = (short)uVar3, local_2c == local_30 &&
         (local_34 = (short)uVar4, local_2c == local_34)) ||
        ((uStack_2a = (short)((uint)uVar2 >> 0x10), uStack_2e = (short)((uint)uVar3 >> 0x10),
         uStack_2a == uStack_2e &&
         (uStack_32 = (short)((uint)uVar4 >> 0x10), uStack_2a == uStack_32)))))) {
      FUN_017c2da0(param_1,iVar6 + 1);
      bVar1 = true;
    }
    else {
      if ((bVar1) && (0 < iVar6)) {
        iVar6 = iVar6 + -1;
      }
      else {
        iVar6 = iVar6 + 1;
      }
      bVar1 = false;
    }
  }
  return;
}

