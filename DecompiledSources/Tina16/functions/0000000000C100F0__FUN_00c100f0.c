/* Ghidra address: 00c100f0 */
/* Ghidra symbol: FUN_00c100f0 */


void FUN_00c100f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  int local_3c;
  longlong local_38;
  int local_2c;
  longlong *local_28;
  undefined8 local_20;
  
  local_50 = auStack_78;
  local_28 = (longlong *)FUN_00bd73a0(&PTR_FUN_00bd5550,1,0);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    FUN_00bd77a0(local_28);
  }
  else {
    (**(code **)(*local_28 + 0x10))(local_28,*(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x5d8))
    ;
  }
  local_20 = FUN_00bd73a0(&PTR_FUN_00bd5550,1,0);
  local_48 = *(longlong *)(param_1 + 0x5d8);
  iVar5 = *(int *)(*(longlong *)(local_48 + 0x10) + 0x10);
  local_2c = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_38 = FUN_00bd7720(*(undefined8 *)(param_1 + 0x5d8),local_2c);
      uVar1 = FUN_00bd6e90(local_38);
      uVar2 = FUN_00bd7120(local_38);
      local_3c = FUN_00bd7690(local_28,uVar1,uVar2);
      if ((local_3c < 0) ||
         (lVar3 = FUN_00bd7720(local_28,local_3c),
         *(short *)(lVar3 + 0x20) != *(short *)(local_38 + 0x20))) {
        plVar4 = (longlong *)FUN_00bd7240(local_20);
        (**(code **)(*plVar4 + 0x10))(plVar4,local_38);
      }
      local_2c = local_2c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_004c48b0(param_2,local_20);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  return;
}

