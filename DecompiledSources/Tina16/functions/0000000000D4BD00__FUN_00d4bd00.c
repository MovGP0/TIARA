/* Ghidra address: 00d4bd00 */
/* Ghidra symbol: FUN_00d4bd00 */


void FUN_00d4bd00(longlong *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 local_28 [16];
  
  iVar1 = *param_2;
  if (iVar1 < 0x202) {
    if (iVar1 == 0x201) {
      uVar2 = thunk_FUN_04118143(param_1[1],0xfffffff0);
      if ((uVar2 & 0x80) != 0) {
        return;
      }
      thunk_FUN_041b2403(param_1[1],0x419,0,local_28);
      iVar1 = thunk_FUN_03f16006(local_28,CONCAT44((int)*(short *)((longlong)param_2 + 0x12),
                                                   (int)(short)param_2[4]));
      if (iVar1 != 0) {
        *(undefined1 *)((longlong)param_1 + 0x61) = 1;
      }
      (**(code **)(*param_1 + 0x60))(param_1);
      return;
    }
    if (iVar1 - 0x114U < 2) {
LAB_00d4bd5d:
      (**(code **)(*param_1 + 0x60))(param_1);
      return;
    }
    if (iVar1 == 0x200) {
      uVar2 = thunk_FUN_04118143(param_1[1],0xfffffff0);
      if ((uVar2 & 0x80) != 0) {
        return;
      }
      thunk_FUN_041b2403(param_1[1],0x419,0,local_28);
      iVar1 = thunk_FUN_03f16006(local_28,CONCAT44((int)*(short *)((longlong)param_2 + 0x12),
                                                   (int)(short)param_2[4]));
      if ((iVar1 != 0) == (bool)(char)param_1[0xc]) {
        return;
      }
      *(bool *)(param_1 + 0xc) = iVar1 != 0;
      (**(code **)(*param_1 + 0x60))(param_1);
      return;
    }
  }
  else {
    if (iVar1 == 0x202) {
      uVar2 = thunk_FUN_04118143(param_1[1],0xfffffff0);
      if ((uVar2 & 0x80) != 0) {
        return;
      }
      *(undefined1 *)((longlong)param_1 + 0x61) = 0;
      (**(code **)(*param_1 + 0x60))(param_1);
      return;
    }
    if (iVar1 == 0x405) goto LAB_00d4bd5d;
  }
  FUN_007899d0(param_1,param_2);
  return;
}

