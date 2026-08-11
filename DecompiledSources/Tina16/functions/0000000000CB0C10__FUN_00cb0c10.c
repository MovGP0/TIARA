/* Ghidra address: 00cb0c10 */
/* Ghidra symbol: FUN_00cb0c10 */


void FUN_00cb0c10(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong local_40 [2];
  
  local_40[0] = 0;
  (**(code **)(*param_1 + 0x110))(param_1,1,1);
  plVar1 = (longlong *)param_1[0x22];
  if (plVar1 == (longlong *)0x0) {
    FUN_004194b0(local_40,param_2,&DAT_0086e978);
    uVar4 = FUN_00876b00(local_40[0],param_3,param_4);
    uVar5 = (ulonglong)uVar4;
  }
  else {
    FUN_00878280(local_40,param_2,param_3,param_4);
    (**(code **)(*plVar1 + 0xa8))(plVar1,local_40);
    uVar5 = 0;
    if (local_40[0] != 0) {
      uVar5 = *(ulonglong *)(local_40[0] + -8);
    }
    param_4 = 0;
  }
  uVar4 = (uint)uVar5;
  while (0 < (int)uVar4) {
    iVar2 = (**(code **)(*param_1 + 0xe0))(param_1,local_40[0],param_4,uVar5 & 0xffffffff);
    if (iVar2 < 0) {
      iVar3 = (**(code **)(*param_1 + 0xf0))(param_1,iVar2);
      if (iVar3 != 0x274c) {
        *(undefined1 *)((longlong)param_1 + 0xf1) = 1;
        (**(code **)(*param_1 + 0x120))(param_1);
      }
      (**(code **)(*param_1 + 0xf8))(param_1,iVar3);
    }
    FUN_00c8c8a0(&PTR_FUN_00c8c438,0,0);
    if (iVar2 == 0) {
      *(undefined1 *)((longlong)param_1 + 0xf1) = 1;
    }
    (**(code **)(*param_1 + 0x110))(param_1,1,0);
    (**(code **)(*param_1 + 0x98))(param_1,1,(longlong)iVar2);
    param_4 = param_4 + iVar2;
    uVar4 = (int)uVar5 - iVar2;
    uVar5 = (ulonglong)uVar4;
  }
  FUN_00419430(local_40,&DAT_0086e978);
  return;
}

