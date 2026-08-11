/* Ghidra address: 008088b0 */
/* Ghidra symbol: FUN_008088b0 */


void FUN_008088b0(longlong param_1,short param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint local_38;
  int iStack_34;
  undefined8 local_30;
  
  if (param_2 != *(short *)(param_1 + 0x9c)) {
    *(short *)(param_1 + 0x9c) = param_2;
    if (param_2 == 0) {
      thunk_FUN_03cc0d62(&local_30);
      lVar4 = thunk_FUN_04129e10(local_30);
      if (lVar4 != 0) {
        iVar2 = thunk_FUN_039b6ab1(lVar4,0);
        iVar3 = FUN_00427ab0();
        if (iVar2 == iVar3) {
          local_38 = (uint)local_30;
          iStack_34 = (int)((ulonglong)local_30 >> 0x20);
          uVar1 = thunk_FUN_041b2403(lVar4,0x84,0,
                                     (longlong)(int)(local_38 & 0xffff | iStack_34 << 0x10));
          thunk_FUN_041b2403(lVar4,0x20,lVar4,uVar1 | 0x2000000);
          return;
        }
      }
    }
    uVar5 = FUN_00808880(param_1,(longlong)param_2);
    thunk_FUN_04176eb1(uVar5);
  }
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  return;
}

