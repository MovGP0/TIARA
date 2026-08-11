/* Ghidra address: 00c1ed90 */
/* Ghidra symbol: FUN_00c1ed90 */


undefined4
FUN_00c1ed90(longlong *param_1,uint param_2,uint param_3,uint param_4,byte *param_5,byte *param_6,
            byte *param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)((longlong)param_1 + 0x8ac);
  iVar5 = iVar4 / 2;
  iVar2 = (param_2 & 0xff) +
          *(int *)((longlong)param_1 +
                  (longlong)((*(int *)param_1[0x10c] + iVar5) / iVar4) * 4 + 0x418);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  iVar3 = (param_3 & 0xff) +
          *(int *)((longlong)param_1 +
                  (longlong)((*(int *)param_1[0x10d] + iVar5) / iVar4) * 4 + 0x418);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  iVar4 = (param_4 & 0xff) +
          *(int *)((longlong)param_1 +
                  (longlong)((*(int *)param_1[0x10e] + iVar5) / iVar4) * 4 + 0x418);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  uVar1 = FUN_00c1e220(param_1,iVar2,iVar3,iVar4,param_5,param_6,param_7);
  (**(code **)(*param_1 + 0x20))
            (param_1,param_1[0x10c],param_1[0x10f],param_1[0x112],iVar2 - (uint)*param_5);
  (**(code **)(*param_1 + 0x20))
            (param_1,param_1[0x10d],param_1[0x110],param_1[0x113],iVar3 - (uint)*param_6);
  (**(code **)(*param_1 + 0x20))
            (param_1,param_1[0x10e],param_1[0x111],param_1[0x114],iVar4 - (uint)*param_7);
  if ((int)param_1[1] == 1) {
    param_1[0x10c] = param_1[0x10c] + 4;
    param_1[0x10d] = param_1[0x10d] + 4;
    param_1[0x10e] = param_1[0x10e] + 4;
    param_1[0x10f] = param_1[0x10f] + 4;
    param_1[0x110] = param_1[0x110] + 4;
    param_1[0x111] = param_1[0x111] + 4;
    param_1[0x112] = param_1[0x112] + 4;
    param_1[0x113] = param_1[0x113] + 4;
    param_1[0x114] = param_1[0x114] + 4;
  }
  else {
    param_1[0x10c] = param_1[0x10c] + -4;
    param_1[0x10d] = param_1[0x10d] + -4;
    param_1[0x10e] = param_1[0x10e] + -4;
    param_1[0x10f] = param_1[0x10f] + -4;
    param_1[0x110] = param_1[0x110] + -4;
    param_1[0x111] = param_1[0x111] + -4;
    param_1[0x112] = param_1[0x112] + -4;
    param_1[0x113] = param_1[0x113] + -4;
    param_1[0x114] = param_1[0x114] + -4;
  }
  return uVar1;
}

