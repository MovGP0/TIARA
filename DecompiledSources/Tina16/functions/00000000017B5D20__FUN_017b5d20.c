/* Ghidra address: 017b5d20 */
/* Ghidra symbol: FUN_017b5d20 */


void FUN_017b5d20(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_50 [2];
  undefined8 local_40;
  
  uVar1 = *param_3;
  local_40._0_4_ = (int)uVar1;
  iVar2 = *(short *)(param_2 + 0xc) + (int)local_40;
  local_40._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  iVar3 = *(short *)(param_2 + 0xe) + local_40._4_4_;
  local_40 = uVar1;
  uVar1 = FUN_00498310(iVar2,iVar3);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_00498310(*(short *)(param_2 + 0x10) + (int)local_40,
                       *(short *)(param_2 + 0x12) + local_40._4_4_);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x18);
  *(int *)(param_1 + 0x6c) = (int)*(short *)(param_2 + 0x1c);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x58),(longlong)(*(int *)(param_1 + 0x60) * 8));
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (0 < *(short *)(param_2 + 0x1e)) {
    iVar3 = (int)*(short *)(param_2 + 0x1e);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_50[0] = FUN_00498310((int)*(short *)(param_2 + 0xc) +
                                   (int)*(short *)(param_2 + 0x20 + (longlong)iVar2 * 4) +
                                   (int)local_40,
                                   (int)*(short *)(param_2 + 0xe) +
                                   (int)*(short *)(param_2 + 0x22 + (longlong)iVar2 * 4) +
                                   local_40._4_4_);
        FUN_017b5040(param_1,local_50);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

