/* Ghidra address: 01b9a420 */
/* Ghidra symbol: FUN_01b9a420 */


void FUN_01b9a420(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_30 [2];
  int local_28;
  undefined8 local_20;
  
  local_50 = 0;
  local_40[0] = 0;
  uVar1 = *param_3 - 0x20;
  if (uVar1 < 0x60) {
    bVar6 = ((byte)(&DAT_01b9a608)[(longlong)(int)(uVar1 & 0x7f) >> 3] >> (uVar1 & 7) & 1) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    *param_3 = 0;
    uVar4 = FUN_007ffaf0(param_1);
    uVar2 = FUN_008077f0(uVar4);
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,local_40,0x80e);
    FUN_00416ad0(local_40,L" \\ / ? \" < > |");
    (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x290))
              (*(longlong **)(param_1 + 0x8b0),local_30,uVar2,local_40[0],0);
    FUN_0064e030(*(undefined8 *)(param_1 + 0x8b0),0xff000018);
    local_48 = FUN_00498310(*(undefined4 *)(*(longlong *)(param_1 + 0x818) + 0x90),
                            *(undefined4 *)(*(longlong *)(param_1 + 0x818) + 0x94));
    uVar4 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x6e8),&local_48);
    local_20._0_4_ = (int)uVar4;
    iVar5 = (int)local_20 +
            (*(int *)(*(longlong *)(param_1 + 0x818) + 0x98) - (local_28 - local_30[0])) / 2;
    local_20._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
    iVar3 = local_20._4_4_ + *(int *)(*(longlong *)(param_1 + 0x818) + 0x9c);
    local_20 = uVar4;
    FUN_00429ca0(local_30,iVar5,iVar3 + 10);
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_50,0x80e);
    FUN_00416ad0(&local_50,L" \\ / ? \" < > |");
    (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x270))
              (*(longlong **)(param_1 + 0x8b0),local_30,local_50);
  }
  FUN_00414480(&local_50);
  FUN_00414480(local_40);
  return;
}

