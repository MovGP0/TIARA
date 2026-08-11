/* Ghidra address: 00ccdc50 */
/* Ghidra symbol: FUN_00ccdc50 */


void FUN_00ccdc50(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  
  local_60 = auStack_88;
  puVar2 = auStack_88;
  if (*(longlong *)PTR_DAT_02004a60 != 0) {
    (**(code **)PTR_DAT_02004a60)(0);
    puVar2 = local_60;
  }
  local_60 = puVar2;
  FUN_00ca53b0();
  FUN_00ca4ec0();
  uVar3 = DAT_01eadbb8;
  local_38 = DAT_01eadbb8;
  DAT_01eadbb8 = 0;
  FUN_00410f20(uVar3);
  uVar3 = DAT_01eadbc0;
  local_40 = DAT_01eadbc0;
  DAT_01eadbc0 = 0;
  FUN_00410f20(uVar3);
  uVar3 = DAT_01eadbc8;
  local_48 = DAT_01eadbc8;
  DAT_01eadbc8 = 0;
  FUN_00410f20(uVar3);
  if (DAT_01eadbd0 != 0) {
    local_28 = (longlong *)FUN_004afa30(DAT_01eadbd0);
    iVar4 = (int)local_28[2];
    local_1c = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar3 = FUN_004aeac0(local_28,local_1c);
        FUN_00410f20(uVar3);
        local_1c = local_1c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    (**(code **)(*local_28 + 0x10))(local_28);
    FUN_00412130(*(undefined8 *)(DAT_01eadbd0 + 0x10));
    lVar1 = DAT_01eadbd0;
    local_50 = DAT_01eadbd0;
    DAT_01eadbd0 = 0;
    FUN_00410f20(lVar1);
  }
  FUN_00cbfc80(DAT_01eadbb0,0);
  return;
}

