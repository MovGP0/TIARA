/* Ghidra address: 017f4e60 */
/* Ghidra symbol: FUN_017f4e60 */


void FUN_017f4e60(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  short local_3c;
  short sStack_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar4 = FUN_0198a580(param_2);
  if ((byte)uVar4 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x3aU) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x05') {
      iVar2 = FUN_017c2b70();
      iVar5 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar3 = FUN_017c2c60(param_2,iVar5);
          local_3c = (short)uVar3;
          FUN_017f3eb0(*(undefined8 *)(param_1 + 0x48),(longlong)local_3c);
          sStack_3a = (short)((uint)uVar3 >> 0x10);
          FUN_017f3eb0(*(undefined8 *)(param_1 + 0x40),(longlong)sStack_3a);
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      uVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0xa0));
      (**(code **)(*param_2 + 0x68))(param_2,uVar4,&local_38);
      cVar1 = FUN_00b958f0(param_1 + 0x60);
      if (cVar1 != '\0') {
        FUN_00b95710(param_1 + 0x60,&local_38);
      }
      FUN_017f3eb0(*(undefined8 *)(param_1 + 0x48),local_38);
      FUN_017f3eb0(*(undefined8 *)(param_1 + 0x40),local_34);
      FUN_017f3eb0(*(undefined8 *)(param_1 + 0x48),local_30);
      FUN_017f3eb0(*(undefined8 *)(param_1 + 0x40),local_2c);
      FUN_00b957c0(param_1 + 0x60,&local_38);
    }
  }
  return;
}

