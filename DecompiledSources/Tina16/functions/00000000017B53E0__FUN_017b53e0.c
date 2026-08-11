/* Ghidra address: 017b53e0 */
/* Ghidra symbol: FUN_017b53e0 */


void FUN_017b53e0(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_50 [2];
  undefined8 local_40;
  
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  if (*(int *)((longlong)param_1 + 0x24) == -1) {
    local_50[0] = FUN_00498310((int)param_1[2] + param_3,
                               *(int *)((longlong)param_1 + 0x14) + param_4);
    (**(code **)*param_1)(param_1,local_50);
  }
  else if (*(int *)((longlong)param_1 + 0x24) == 0) {
    lVar1 = FUN_017ae270(&DAT_017ad878,1,0);
    uVar2 = FUN_00498310(0,0);
    *(undefined8 *)(lVar1 + 0x14) = uVar2;
    *(undefined1 *)(lVar1 + 0x1c) = *(undefined1 *)((longlong)param_1 + 0x147);
    *(undefined1 *)(lVar1 + 0x1d) = 0;
    local_40 = FUN_00498310(param_3,param_4);
    local_40 = FUN_017ae580(lVar1,&local_40);
    FUN_00410f20(lVar1);
    uVar2 = FUN_00498310(*(int *)((longlong)param_1 + 0x14c) + (int)local_40,
                         (int)param_1[0x2a] + local_40._4_4_);
    *(undefined8 *)((longlong)param_1 + 0x154) = uVar2;
  }
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  return;
}

