/* Ghidra address: 004d17e0 */
/* Ghidra symbol: FUN_004d17e0 */


void FUN_004d17e0(undefined8 param_1,longlong param_2,byte param_3,byte param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [39];
  char local_41;
  undefined1 *local_40;
  longlong local_38 [3];
  longlong *local_20;
  
  local_40 = auStack_68;
  lVar1 = FUN_004d11f0();
  if ((*(int *)(lVar1 + 8) == *(int *)PTR_DAT_02005bd8) && ((param_4 & param_3) == 0)) {
    if (*(longlong *)(param_2 + 8) == 0) {
      if (*(longlong *)(param_2 + 0x18) != 0) {
        (**(code **)(**(longlong **)(param_2 + 0x18) + 0x18))(*(longlong **)(param_2 + 0x18));
      }
    }
    else {
      (**(code **)(param_2 + 8))(*(undefined8 *)(param_2 + 0x10));
    }
  }
  else {
    if (param_3 == 0) {
      local_20 = local_38;
    }
    else {
      local_20 = (longlong *)FUN_004095c0(0x18);
    }
    local_41 = param_3 == 0;
    if ((bool)local_41) {
      lVar1 = FUN_00410e60(&DAT_00401a88,1);
      local_20[2] = lVar1;
    }
    else {
      local_20[2] = 0;
    }
    if (*(longlong *)PTR_PTR_02002ff8 == 0) {
      FUN_004098e0(0x1a);
    }
    uVar2 = FUN_004121f0(DAT_02011650);
    FUN_00411f00(uVar2,0xffffffff);
    *(byte *)(local_20 + 1) = param_3;
    if (DAT_01dcb5c0 == 0) {
      DAT_01dcb5c0 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    }
    *local_20 = param_2;
    FUN_004ae7e0(DAT_01dcb5c0,local_20);
    FUN_004d06e0();
    if (PTR_FUN_01dc64f8 != (undefined *)0x0) {
      (*(code *)PTR_FUN_01dc64f8)(DAT_01dc6500,*(undefined8 *)*local_20);
    }
    if (local_41 != '\0') {
      FUN_004126d0(local_20[2],DAT_02011650,0xffffffff);
    }
    FUN_00412130(DAT_02011650);
    if ((param_3 == 0) && (FUN_00410f20(local_20[2]), *(longlong *)(param_2 + 0x20) != 0)) {
      FUN_004134c0(*(undefined8 *)(param_2 + 0x20));
    }
  }
  return;
}

