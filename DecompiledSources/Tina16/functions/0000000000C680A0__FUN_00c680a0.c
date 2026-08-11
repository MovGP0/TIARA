/* Ghidra address: 00c680a0 */
/* Ghidra symbol: FUN_00c680a0 */


void FUN_00c680a0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined1 local_d [5];
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_d[0] = 7;
  local_d[1] = 9;
  local_d[2] = 0xd;
  local_d[3] = 0xe;
  local_d[4] = 0xc;
  if (*(longlong *)(param_1 + 0x770) != 0) {
    if (*(longlong *)(param_1 + 0x778) == 0) {
      uVar3 = FUN_00c6fda0(*(longlong *)(param_1 + 0x770));
      *(undefined8 *)(param_1 + 0x778) = uVar3;
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),local_20);
    FUN_00c6fcb0(*(undefined8 *)(param_1 + 0x778),local_20[0]);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760))
    ;
    if (iVar1 == 1) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                        (*(longlong **)(param_1 + 0x748));
      FUN_00c6fd10(*(undefined8 *)(param_1 + 0x778),local_d[iVar1]);
      FUN_00c6fcf0(*(undefined8 *)(param_1 + 0x778),0);
      FUN_00c6fcd0(*(undefined8 *)(param_1 + 0x778),0);
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))
                        (*(longlong **)(param_1 + 0x760));
      if (iVar1 == 2) {
        FUN_00c6fd10(*(undefined8 *)(param_1 + 0x778),0);
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x748),&local_28);
        FUN_00c6fcf0(*(undefined8 *)(param_1 + 0x778),local_28);
        FUN_00c6fcd0(*(undefined8 *)(param_1 + 0x778),0);
      }
      else {
        FUN_00c6fd10(*(undefined8 *)(param_1 + 0x778),0);
        FUN_00c6fcf0(*(undefined8 *)(param_1 + 0x778),0);
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x748),&local_30);
        FUN_00c6fcd0(*(undefined8 *)(param_1 + 0x778),local_30);
      }
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_38);
    FUN_00c6fc90(*(undefined8 *)(param_1 + 0x778),local_38);
    FUN_00c6fc80(*(undefined8 *)(param_1 + 0x778),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4a8));
    FUN_00c6fc70(*(undefined8 *)(param_1 + 0x778),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x710) + 0x4a8));
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_40);
    FUN_00c6fc50(*(undefined8 *)(param_1 + 0x778),local_40);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750))
    ;
    FUN_00c6fc40(*(undefined8 *)(param_1 + 0x778),uVar2);
    *(undefined4 *)(param_1 + 0x508) = 1;
  }
  FUN_00414560(&local_40,5);
  return;
}

