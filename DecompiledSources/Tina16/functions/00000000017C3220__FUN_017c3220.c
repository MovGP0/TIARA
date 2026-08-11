/* Ghidra address: 017c3220 */
/* Ghidra symbol: FUN_017c3220 */


undefined8 FUN_017c3220(undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined2 local_3c;
  undefined2 uStack_3a;
  
  uVar5 = 0;
  param_3 = param_3 + 1;
  if (*PTR_DAT_020052b8 == '\0') {
LAB_017c327c:
    if (-1 < param_3) {
      iVar1 = FUN_017c2b70(param_1);
      if (param_3 < iVar1 * 2 + -1) {
        uVar5 = 1;
        uVar2 = FUN_017c2c60(param_1,(longlong)param_3 / 2 & 0xffffffff);
        if (param_3 % 2 == 0) {
          uVar4 = FUN_0042a2c0(uVar2);
          *param_4 = uVar4;
        }
        else {
          uVar3 = FUN_017c2c60(param_1,(int)((longlong)param_3 / 2) + 1);
          local_3c = (short)uVar2;
          local_40 = (short)uVar3;
          uStack_3a = (short)((uint)uVar2 >> 0x10);
          uStack_3e = (short)((uint)uVar3 >> 0x10);
          uVar4 = FUN_00498310((longlong)((int)local_3c + (int)local_40) / 2 & 0xffffffff,
                               (longlong)((int)uStack_3a + (int)uStack_3e) / 2 & 0xffffffff);
          *param_4 = uVar4;
        }
      }
    }
  }
  else {
    if (param_3 != 0) {
      iVar1 = FUN_017c2b70(param_1);
      if (param_3 != iVar1 * 2 + -2) goto LAB_017c327c;
    }
    uVar5 = 1;
    uVar4 = FUN_00498310(0xfffffc18,0xfffffc18);
    *param_4 = uVar4;
  }
  return uVar5;
}

