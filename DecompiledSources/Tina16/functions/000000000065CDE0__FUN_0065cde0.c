/* Ghidra address: 0065cde0 */
/* Ghidra symbol: FUN_0065cde0 */


void FUN_0065cde0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  ushort local_2a;
  longlong local_28;
  longlong local_20;
  
  local_80 = auStack_c8;
  local_88 = 0;
  local_2a = *(ushort *)(param_1 + 0x34);
  local_20 = param_1;
  while ((local_20 != 0 && (cVar1 = FUN_0065be20(local_20), cVar1 == '\0'))) {
    local_20 = *(longlong *)(local_20 + 0x78);
  }
  if (local_20 == 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_00472870,1,PTR_LAB_020026f8);
    FUN_004134c0(uVar3);
  }
  local_2a = local_2a | *(ushort *)(local_20 + 0x34);
  if ((local_2a & 8) != 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_00472870,1,PTR_PTR_02003218);
    FUN_004134c0(uVar3);
  }
  iVar2 = thunk_FUN_039b6ab1(*(undefined8 *)(param_1 + 0x468),0);
  lVar4 = FUN_004d11f0();
  if (iVar2 == *(int *)(lVar4 + 8)) {
    FUN_004dc430(param_2);
  }
  else {
    if (*(longlong *)(param_1 + 0x488) == 0) {
      local_58 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      local_68 = (longlong *)(param_1 + 0x488);
      local_48 = 0;
      local_60 = 0;
      LOCK();
      local_50 = *local_68;
      if (local_50 == 0) {
        *local_68 = local_58;
        local_50 = 0;
      }
      UNLOCK();
      local_40 = local_58;
      local_38 = local_68;
      local_28 = local_58;
      if (local_50 != 0) {
        FUN_00410f20(local_58);
      }
    }
    local_70 = *(undefined8 *)(param_1 + 0x488);
    if (*(longlong *)PTR_PTR_02002ff8 == 0) {
      FUN_004098e0(0x1a);
    }
    uVar3 = FUN_004121f0(local_70);
    FUN_00411f00(uVar3,0xffffffff);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x488),param_2);
    FUN_00412130(*(undefined8 *)(param_1 + 0x488));
    if (DAT_020122b0 == 0) {
      local_a0 = 0x21;
      local_98 = &local_a0;
      local_90 = 0x10;
      FUN_00442f70(&local_88,L"%d_AsyncMessage",&local_98,0);
      uVar3 = FUN_00416740(local_88);
      DAT_020122b0 = thunk_FUN_03ce67dd(uVar3);
    }
    thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x468),DAT_020122b0,0,0);
  }
  FUN_00414480(&local_88);
  return;
}

