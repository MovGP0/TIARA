/* Ghidra address: 019d0d20 */
/* Ghidra symbol: FUN_019d0d20 */


void FUN_019d0d20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  int local_4dc;
  undefined1 local_4d8 [16];
  double adStack_4c8 [17];
  undefined8 local_440;
  undefined8 local_438;
  undefined8 auStack_430 [101];
  undefined8 auStack_108 [17];
  double local_80;
  undefined8 local_78;
  undefined8 local_48;
  undefined8 local_40;
  
  local_438 = 0;
  local_440 = 0;
  FUN_004238d0(local_4d8,0,0,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0xa8))(*(longlong **)(param_1 + 0x30),local_4d8);
  local_40 = FUN_019cfd00(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c));
  local_48 = FUN_019cfd00(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x44),
                          *(undefined4 *)(param_1 + 0x4c));
  FUN_019d04e0(param_1,&local_40,&local_48,0);
  local_40 = FUN_019cfd00(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  local_48 = FUN_019cfd00(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x44),
                          *(undefined4 *)(param_1 + 0x48));
  FUN_019d04e0(param_1,&local_40,&local_48,0);
  local_40 = FUN_019cfd00(0x69,*(int *)(param_1 + 0x4c) + 0x14);
  FUN_019d01b0(param_1,&local_40,L"Frequency (Hz)");
  FUN_0123b360(param_2);
  uVar3 = FUN_0123b3b0();
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),0x808080);
  FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),2);
  iVar1 = (*(int *)(param_1 + 100) - (*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44))) /
          (*(int *)(param_1 + 0x74) + -1);
  dVar4 = *(double *)(param_1 + 0x78);
  for (local_4dc = 0; local_4dc <= *(int *)(param_1 + 0x74) + -1; local_4dc = local_4dc + 1) {
    iVar2 = local_4dc * iVar1;
    uVar3 = FUN_019cfd00(*(int *)(param_1 + 0x40) + iVar2,*(int *)(param_1 + 0x4c) + 5);
    auStack_430[local_4dc] = uVar3;
    FUN_00b8fd60(&local_438,dVar4,1,0,1);
    FUN_019d01b0(param_1,auStack_430 + local_4dc,local_438);
    local_40 = FUN_019cfd00(*(int *)(param_1 + 0x40) + iVar2,*(undefined4 *)(param_1 + 0x48));
    local_48 = FUN_019cfd00(*(int *)(param_1 + 0x40) + iVar2,*(undefined4 *)(param_1 + 0x4c));
    FUN_019d04e0(param_1,&local_40,&local_48);
    if (local_4dc < *(int *)(param_1 + 0x74) + -1) {
      iVar2 = 2;
      do {
        local_80 = dVar4 * (double)iVar2;
        local_78 = 0x3ff0000000000000;
        FUN_019d00d0(param_1,local_80,dVar4,dVar4 * 10.0,
                     *(int *)(param_1 + 0x40) + local_4dc * iVar1,iVar1,&local_40);
        local_40 = CONCAT44(*(undefined4 *)(param_1 + 0x94),(undefined4)local_40);
        local_48 = CONCAT44(*(undefined4 *)(param_1 + 0x9c),(undefined4)local_40);
        FUN_019d04e0(param_1,&local_40,&local_48);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xb);
    }
    dVar4 = dVar4 * 10.0;
  }
  FUN_019d0af0(param_1,param_2,0);
  FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),0);
  local_40 = FUN_019cfd00(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  local_48 = FUN_019cfd00(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c));
  FUN_019d04e0(param_1,&local_40,&local_48,0);
  local_40 = FUN_019cfd00(10,0x96);
  FUN_019d0290(param_1,&local_40,L"Gain (dB)");
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),0x808080);
  FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),2);
  local_4dc = 0;
  iVar1 = FUN_0040c840((double)(*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48)) /
                       (double)*(int *)(param_1 + 0x58));
  while( true ) {
    if (*(int *)(param_1 + 0x58) < local_4dc) break;
    adStack_4c8[local_4dc] =
         (*(double *)(param_1 + 0x88) * (double)local_4dc) / (double)*(int *)(param_1 + 0x58);
    uVar3 = FUN_019cfd00(0x19,*(int *)(param_1 + 0x48) + local_4dc * iVar1);
    auStack_108[local_4dc] = uVar3;
    local_4dc = local_4dc + 1;
  }
  for (local_4dc = 0; local_4dc <= *(int *)(param_1 + 0x58); local_4dc = local_4dc + 1) {
    FUN_00b8fd60(&local_440,adStack_4c8[local_4dc],1,0,1);
    FUN_019d01b0(param_1,auStack_108 + local_4dc,local_440);
    local_40 = FUN_019cfd00(*(undefined4 *)(param_1 + 0x90),
                            *(int *)(param_1 + 0x48) + local_4dc * iVar1);
    local_48 = FUN_019cfd00(*(undefined4 *)(param_1 + 0x98),
                            *(int *)(param_1 + 0x48) + local_4dc * iVar1);
    FUN_019d04e0(param_1,&local_40,&local_48);
  }
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),0);
  FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),0);
  FUN_00414560(&local_440,2);
  return;
}

