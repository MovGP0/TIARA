/* Ghidra address: 00dd9470 */
/* Ghidra symbol: FUN_00dd9470 */


void FUN_00dd9470(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  longlong local_20;
  undefined2 local_18;
  ushort local_16;
  int local_14;
  int local_10;
  int local_c;
  
  local_50[0] = 0;
  local_38 = 0;
  local_40 = 0;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_005fccd0(*(undefined8 *)(param_1 + 0x38),local_50);
    FUN_004168e0(&local_38,local_50[0]);
    local_30[0] = 0x28;
    local_28 = FUN_00415f70(local_38);
    iVar3 = FUN_005fce00(*(undefined8 *)(param_1 + 0x38));
    local_20 = (longlong)iVar3 * 10000;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18) + 0x31) & 1) == 0) {
      local_18 = 400;
    }
    else {
      local_18 = 700;
    }
    bVar2 = FUN_005fcf90();
    local_16 = (ushort)bVar2;
    lVar1 = *(longlong *)(param_1 + 0x38);
    local_14 = -(uint)((*(byte *)(*(longlong *)(lVar1 + 0x18) + 0x31) & 2) != 0);
    local_10 = -(uint)((*(byte *)(*(longlong *)(lVar1 + 0x18) + 0x31) & 4) != 0);
    local_c = -(uint)((*(byte *)(*(longlong *)(lVar1 + 0x18) + 0x31) & 8) != 0);
    uVar5 = FUN_0041b800(&local_40);
    uVar4 = FUN_00dda490(local_30,&DAT_00dd9620,uVar5);
    FUN_006245b0(uVar4);
    FUN_00dd8c50(param_1,local_40);
  }
  FUN_0041b890(param_2,*(undefined8 *)(param_1 + 0x18),&DAT_00dd9630);
  FUN_00414480(local_50);
  FUN_0041b800(&local_40);
  FUN_00414520(&local_38);
  return;
}

