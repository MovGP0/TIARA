/* Ghidra address: 006ea8d0 */
/* Ghidra symbol: FUN_006ea8d0 */


void FUN_006ea8d0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint local_40;
  int iStack_3c;
  int local_38;
  int local_34;
  short *local_30;
  
  iVar1 = FUN_0044f080();
  if (iVar1 < 5) {
    uVar2 = FUN_0065b870(param_1);
    local_30 = (short *)(param_2 + 0x10);
    local_38 = (int)*local_30;
    local_34 = (int)*(short *)(param_2 + 0x12);
    uVar3 = FUN_0064d1f0(param_1,&local_38);
    local_40 = (uint)uVar3;
    iStack_3c = (int)((ulonglong)uVar3 >> 0x20);
    FUN_0064fca0(param_1,0x7b,uVar2,(longlong)(int)(local_40 & 0xffff | iStack_3c << 0x10));
  }
  FUN_00651040(param_1,param_2);
  return;
}

