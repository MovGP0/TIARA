/* Ghidra address: 00c625e0 */
/* Ghidra symbol: FUN_00c625e0 */


void FUN_00c625e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_007f0370,1,param_1);
  (**(code **)(*local_20 + 0x50))(local_20,L"PreviewForm");
  FUN_007fdf50(local_20,0);
  FUN_0041ddd0(&local_58,PTR_PTR_02001460);
  FUN_0064de00(local_20,local_58);
  FUN_007ff680(local_20,5);
  *(undefined1 *)((longlong)local_20 + 0x4d4) = 1;
  FUN_00800470(local_20,4);
  local_20[0x80] = param_1;
  local_20[0x7f] = (longlong)FUN_00c629c0;
  local_28 = (longlong *)FUN_00742f60(&PTR_FUN_00733e50,1,local_20);
  (**(code **)(*local_28 + 0x50))(local_28,L"Panel");
  FUN_0064de00(local_28,0);
  FUN_0064c650(local_28,5);
  cVar1 = FUN_00781870();
  if ((cVar1 == '\0') || ((*PTR_DAT_02002b98 & 2) == 0)) {
    FUN_00743880(local_28,0);
    FUN_00743910(local_28,1);
    FUN_007438e0(local_28,5);
  }
  FUN_0064e030(local_28,0xff000005);
  (**(code **)(*local_28 + 0x130))(local_28,local_20);
  FUN_00659460(local_28,1);
  local_30 = (longlong *)FUN_007416c0(&PTR_FUN_00732068,1,local_20);
  (**(code **)(*local_30 + 0x50))(local_30,L"Image");
  FUN_0064c650(local_30,5);
  FUN_00742030(local_30,1);
  FUN_00742090(local_30,1);
  FUN_00741fe0(local_30,1);
  (**(code **)(*(longlong *)local_30[99] + 0x10))
            ((longlong *)local_30[99],*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x318));
  (**(code **)(*local_30 + 0x130))(local_30,local_28);
  iVar2 = FUN_00605610(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x318));
  if (0 < iVar2) {
    uVar5 = FUN_007ffaf0(local_20);
    iVar2 = FUN_008077f0(uVar5);
    local_34 = (iVar2 * 3) / 4;
    iVar2 = FUN_00605610(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x318),
                         (longlong)(iVar2 * 3) % 4 & 0xffffffff);
    iVar3 = FUN_0064d0b0(local_20);
    iVar4 = FUN_0064d0b0(local_28);
    local_38 = iVar2 + (iVar3 - iVar4) + 10;
    local_3c = local_38;
    if (local_34 < local_38) {
      local_3c = local_34;
    }
    FUN_007fded0(local_20,local_3c);
    uVar5 = FUN_007ffaf0(local_20);
    iVar2 = FUN_008077b0(uVar5);
    local_40 = (iVar2 * 3) / 4;
    iVar2 = FUN_00605640(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x318),
                         (longlong)(iVar2 * 3) % 4 & 0xffffffff);
    iVar3 = FUN_0064d120(local_20);
    iVar4 = FUN_0064d120(local_28);
    local_44 = iVar2 + (iVar3 - iVar4) + 10;
    local_48 = local_44;
    if (local_40 < local_44) {
      local_48 = local_40;
    }
    FUN_007fdf10(local_20,local_48);
  }
  (**(code **)(*local_20 + 0x2d0))(local_20);
  FUN_00410f20(local_20);
  FUN_00414480(&local_58);
  return;
}

