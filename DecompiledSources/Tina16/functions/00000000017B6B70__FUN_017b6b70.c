/* Ghidra address: 017b6b70 */
/* Ghidra symbol: FUN_017b6b70 */


void FUN_017b6b70(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  param_3 = param_3 & 0xffffffff;
  if (param_2 != 0) {
    FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),0);
    FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0x800000);
    FUN_005fd670(*(undefined8 *)(param_2 + 0x78),2);
    FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
    FUN_005fd640(*(undefined8 *)(param_2 + 0x78),param_3);
    lVar2 = FUN_017ae270(&DAT_017ad878,1,param_2);
    *(longlong *)(lVar2 + 0x14) = param_1[3];
    *(undefined1 *)(lVar2 + 0x1c) = 0;
    *(undefined1 *)(lVar2 + 0x1d) = 0;
    FUN_017aecd0(lVar2,0,0,(int)param_1[9] - (int)param_1[3],
                 *(int *)((longlong)param_1 + 0x4c) - *(int *)((longlong)param_1 + 0x1c));
    if (*(char *)((longlong)param_1 + 0x21) != '\0') {
      if ((char)param_3 != '\x01') {
        param_3 = CONCAT71((int7)(param_3 >> 8),0xf);
      }
      FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0x808080);
      uVar1 = FUN_017ad600(0);
      FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),uVar1);
      FUN_005fd640(*(undefined8 *)(param_2 + 0x78),param_3);
      FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),0);
      FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),0x808080);
      iVar3 = -1;
      local_30 = (**(code **)(*param_1 + 0x88))(param_1,0xffffffff);
      while ((int)local_30 != -0x2b67) {
        local_40[0] = FUN_00498310((int)local_30 - (int)param_1[3],
                                   local_30._4_4_ - *(int *)((longlong)param_1 + 0x1c));
        FUN_017afa90(lVar2,local_40);
        iVar3 = iVar3 + 1;
        local_30 = (**(code **)(*param_1 + 0x88))(param_1,iVar3);
      }
    }
    FUN_00410f20(lVar2);
  }
  return;
}

