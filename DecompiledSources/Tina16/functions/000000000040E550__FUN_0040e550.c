/* Ghidra address: 0040e550 */
/* Ghidra symbol: FUN_0040e550 */


int FUN_0040e550(longlong *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  uVar1 = *(ushort *)(param_1 + 1);
  if ((uVar1 < 0xd7b0) || (0xd7b3 < uVar1)) {
    FUN_00409930(0x66);
  }
  else {
    if ((uVar1 != 0xd7b0) && (iVar3 = (*(code *)param_1[7])(param_1), iVar3 != 0)) {
      FUN_00409930(iVar3);
      return iVar3;
    }
    if (param_2 < 1) {
      FUN_00409930(0x6a);
    }
    else {
      *(int *)((longlong)param_1 + 0xc) = param_2;
      param_1[5] = (longlong)FUN_0040ca90;
      if ((short)param_1[0xc] == 0) {
        param_1[7] = (longlong)FUN_0040ca90;
        if (param_3 == 3) {
          lVar5 = thunk_FUN_0415ef6d(0xfffffff5);
          *param_1 = lVar5;
        }
        else {
          lVar5 = thunk_FUN_0415ef6d(0xfffffff6);
          *param_1 = lVar5;
        }
      }
      else {
        param_1[7] = (longlong)FUN_0040e520;
        uVar2 = *(undefined4 *)(&DAT_01dbae74 + (ulonglong)((DAT_01db9014 & 0x70) >> 4) * 4);
        if (param_3 == 1) {
          uVar6 = 3;
          uVar4 = 0x40000000;
          *(undefined2 *)(param_1 + 1) = 0xd7b2;
        }
        else if (param_3 == 2) {
          uVar6 = 3;
          uVar4 = 0xc0000000;
          *(undefined2 *)(param_1 + 1) = 0xd7b3;
        }
        else if (param_3 == 3) {
          uVar4 = 0xc0000000;
          uVar6 = 2;
          *(undefined2 *)(param_1 + 1) = 0xd7b3;
        }
        else {
          uVar6 = 3;
          uVar4 = 0x80000000;
          *(undefined2 *)(param_1 + 1) = 0xd7b1;
        }
        lVar5 = thunk_FUN_041ac412(param_1 + 0xc,uVar4,uVar2,0,uVar6,0x80,0);
        *param_1 = lVar5;
      }
      if (*param_1 == -1) {
        *(undefined2 *)(param_1 + 1) = 0xd7b0;
        FUN_00409950();
      }
    }
  }
  return 0;
}

