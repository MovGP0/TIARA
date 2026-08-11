/* Ghidra address: 00553840 */
/* Ghidra symbol: FUN_00553840 */


longlong * FUN_00553840(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  byte local_29;
  int local_28;
  int local_24;
  ushort *local_20 [2];
  
  local_40 = auStack_68;
  local_48 = 0;
  lVar1 = FUN_00547190(param_1);
  local_20[0] = (ushort *)(lVar1 + 4);
  local_24 = FUN_0053c4a0(local_20);
  local_20[0] = (ushort *)((longlong)local_20[0] + (longlong)(local_24 << 4));
  local_29 = FUN_0053c520(local_20);
  local_20[0] = local_20[0] + (ulonglong)local_29 * 4;
  local_24 = FUN_0053c4a0(local_20);
  FUN_00419260(param_2,&DAT_0052f6a0,1,(longlong)local_24);
  local_28 = 0;
  iVar3 = local_24;
  if (-1 < local_24 + -1) {
    do {
      uVar2 = FUN_00545f10(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_005528d8,param_1,local_20);
      uVar2 = FUN_004113f0(uVar2,&PTR_FUN_005528d8);
      *(undefined8 *)(*param_2 + (longlong)local_28 * 8) = uVar2;
      local_28 = local_28 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30);
    if (*(longlong *)PTR_PTR_02002ff8 == 0) {
      FUN_004098e0(0x1a);
    }
    uVar2 = FUN_004121f0(local_38);
    FUN_00411f00(uVar2,0xffffffff);
    FUN_00545c40(&local_48,local_20);
    FUN_0041b840(param_1 + 0x28,local_48);
    FUN_00412130(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30));
  }
  else {
    local_20[0] = (ushort *)((longlong)local_20[0] + (ulonglong)*local_20[0]);
  }
  *(ushort **)(param_1 + 0x30) = local_20[0];
  FUN_0041b800(&local_48);
  return param_2;
}

