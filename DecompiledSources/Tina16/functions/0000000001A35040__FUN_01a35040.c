/* Ghidra address: 01a35040 */
/* Ghidra symbol: FUN_01a35040 */


undefined4 FUN_01a35040(longlong param_1,longlong param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_168 [32];
  longlong local_148;
  wchar_t *local_140;
  undefined1 *local_130;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  int local_88;
  longlong *local_38;
  undefined4 local_24;
  longlong local_20;
  
  local_130 = auStack_168;
  local_c8 = 0;
  local_d0 = 0;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_bc = 0;
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x10) = param_2;
  }
  FUN_01995600(*(undefined8 *)(param_1 + 0x10),0,0);
  uVar3 = FUN_019954d0(*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  local_38 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x10),0,0);
  while (local_38 != (longlong *)0x0) {
    uVar2 = FUN_01d03160(local_38);
    local_a0 = (uint)uVar2;
    (**(code **)(*local_38 + 0x288))(local_38,&local_c8);
    cVar1 = FUN_01a32a70(local_a0,1);
    if (cVar1 != '\0') {
      (**(code **)(*local_38 + 0x210))(local_38,0);
      (**(code **)(*local_38 + 0x210))(local_38,1);
      local_148 = local_20;
      local_140 = L"_gen";
      FUN_01a34530(param_1,local_38,local_a0,0);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x30),local_38);
    }
    FUN_01995800(*(undefined8 *)(param_1 + 0x10),0,0);
    local_38 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x10),0);
  }
  iVar4 = *(int *)(local_20 + 0x10);
  local_88 = 0;
  local_38 = (longlong *)0x0;
  if (-1 < iVar4 + -1) {
    do {
      local_120 = FUN_00f33100(&LAB_00f256b8,1);
      local_108 = FUN_004aeac0(local_20,local_88);
      local_118 = FUN_01a32c20(local_108);
      local_a4 = (**(code **)(**(longlong **)(local_108 + 0x30) + 0x210))
                           (*(longlong **)(local_108 + 0x30),0);
      local_b8 = (**(code **)(**(longlong **)(local_108 + 0x30) + 0x210))
                           (*(longlong **)(local_108 + 0x30),1);
      local_a8 = local_b8;
      FUN_00f33660(local_120,local_a4);
      FUN_00f33660(local_120,local_b8);
      local_110 = FUN_00f309b0(&LAB_00f23b78,1);
      FUN_00f30e70(local_110,L"nodes",local_120);
      FUN_00f30e70(local_110,L"prop",local_118);
      FUN_00f33710(*(undefined8 *)(param_1 + 0x80),local_110);
      local_88 = local_88 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_24 = local_bc;
  FUN_00410f20(local_20);
  FUN_00414560(&local_d0,2);
  return local_24;
}

