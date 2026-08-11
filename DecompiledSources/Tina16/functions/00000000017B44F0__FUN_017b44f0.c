/* Ghidra address: 017b44f0 */
/* Ghidra symbol: FUN_017b44f0 */


void FUN_017b44f0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_50 [2];
  undefined8 local_40;
  
  param_3 = param_3 & 0xffffffff;
  if (param_2 != 0) {
    uVar1 = FUN_017ad600(*(undefined4 *)((longlong)param_1 + 0x6c));
    FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),uVar1);
    FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)((longlong)param_1 + 100));
    FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),(int)param_1[0xd]);
    if ((int)param_1[0xd] == -2) {
      FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
    }
    else {
      FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),0);
    }
    FUN_005fd640(*(undefined8 *)(param_2 + 0x78),param_3);
    lVar2 = FUN_017ae270(&DAT_017ad878,1,param_2);
    *(longlong *)(lVar2 + 0x14) = param_1[3];
    *(undefined1 *)(lVar2 + 0x1c) = 0;
    *(undefined1 *)(lVar2 + 0x1d) = 0;
    uVar3 = FUN_004095c0((longlong)((int)param_1[0xc] * 8));
    FUN_00409a70(param_1[0xb],uVar3,(longlong)((int)param_1[0xc] * 8));
    FUN_017aeae0(lVar2,uVar3,(int)param_1[0xc]);
    FUN_004095f0(uVar3,(longlong)((int)param_1[0xc] * 8));
    if (*(char *)((longlong)param_1 + 0x21) != '\0') {
      if ((char)param_3 != '\x01') {
        param_3 = CONCAT71((int7)(param_3 >> 8),0xf);
      }
      FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0x808080);
      uVar1 = FUN_017ad600(0);
      FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),uVar1);
      FUN_005fd640(*(undefined8 *)(param_2 + 0x78),param_3);
      FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),0x808080);
      FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),0);
      iVar4 = -1;
      local_40 = (**(code **)(*param_1 + 0x88))(param_1,0xffffffff);
      while ((int)local_40 != -0x2b67) {
        local_50[0] = FUN_00498310((int)local_40 - (int)param_1[3],
                                   local_40._4_4_ - *(int *)((longlong)param_1 + 0x1c));
        FUN_017afa90(lVar2,local_50);
        iVar4 = iVar4 + 1;
        local_40 = (**(code **)(*param_1 + 0x88))(param_1,iVar4);
      }
    }
    FUN_00410f20(lVar2);
  }
  return;
}

