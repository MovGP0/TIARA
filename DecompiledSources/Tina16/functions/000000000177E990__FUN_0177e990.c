/* Ghidra address: 0177e990 */
/* Ghidra symbol: FUN_0177e990 */


void FUN_0177e990(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_40 [2];
  int local_30 [2];
  int local_28;
  undefined8 local_20;
  
  if ((ushort)(*param_3 - 0x28U) < 0x20) {
    bVar5 = (1 << ((byte)(*param_3 - 0x28U) & 0x1f) & 0x40004U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    *param_3 = 0;
    uVar3 = FUN_007ffaf0(param_1);
    uVar1 = FUN_008077f0(uVar3);
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x290))
              (*(longlong **)(param_1 + 0x720),local_30,uVar1,*(undefined8 *)PTR_DAT_020030b0,0);
    FUN_0064e030(*(undefined8 *)(param_1 + 0x720),0xff000018);
    local_40[0] = FUN_00498310(*(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x90),
                               *(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x94));
    uVar3 = FUN_0064d1f0(param_1,local_40);
    local_20._0_4_ = (int)uVar3;
    iVar4 = (int)local_20 +
            (*(int *)(*(longlong *)(param_1 + 0x6d8) + 0x98) - (local_28 - local_30[0])) / 2;
    local_20._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
    iVar2 = local_20._4_4_ + *(int *)(*(longlong *)(param_1 + 0x6d8) + 0x9c);
    local_20 = uVar3;
    FUN_00429ca0(local_30,iVar4,iVar2 + 10);
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x270))
              (*(longlong **)(param_1 + 0x720),local_30,*(undefined8 *)PTR_DAT_020030b0);
  }
  return;
}

