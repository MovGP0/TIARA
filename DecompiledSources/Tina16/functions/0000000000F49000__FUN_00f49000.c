/* Ghidra address: 00f49000 */
/* Ghidra symbol: FUN_00f49000 */


void FUN_00f49000(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  short local_40;
  short sStack_3e;
  short local_3c;
  short sStack_3a;
  
  if (((param_2 != (longlong *)0x0) && ((undefined **)*param_2 == &PTR_FUN_017c0190)) &&
     (param_2[0x7e] != 0)) {
    cVar1 = FUN_017c50e0(param_2[0x7e],*(undefined4 *)(param_1 + 0x88));
    if (cVar1 != '\0') {
      iVar2 = FUN_017c2b70();
      iVar6 = 0;
      if (-1 < iVar2 + -2) {
        iVar2 = iVar2 + -1;
        do {
          uVar5 = FUN_00f48c60(&DAT_00f452b0,1,param_2,*(undefined8 *)(param_1 + 0x48));
          *(undefined8 *)(param_1 + 0x48) = uVar5;
          uVar3 = FUN_017c2c60(param_2,iVar6);
          uVar4 = FUN_017c2c60(param_2,iVar6 + 1);
          local_3c = (short)uVar3;
          *(int *)(*(longlong *)(param_1 + 0x48) + 0x10) = (int)local_3c;
          sStack_3a = (short)((uint)uVar3 >> 0x10);
          *(int *)(*(longlong *)(param_1 + 0x48) + 0x14) = (int)sStack_3a;
          local_40 = (short)uVar4;
          *(int *)(*(longlong *)(param_1 + 0x48) + 0x18) = (int)local_40;
          sStack_3e = (short)((uint)uVar4 >> 0x10);
          *(int *)(*(longlong *)(param_1 + 0x48) + 0x1c) = (int)sStack_3e;
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}

