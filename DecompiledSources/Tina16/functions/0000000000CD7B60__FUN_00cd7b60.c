/* Ghidra address: 00cd7b60 */
/* Ghidra symbol: FUN_00cd7b60 */


void FUN_00cd7b60(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **local_38;
  undefined **local_30;
  undefined **local_28;
  undefined **local_20;
  undefined **local_18;
  undefined **local_10;
  
  DAT_02019f90 = DAT_02019f90 + -1;
  if (DAT_02019f90 == -1) {
    FUN_0041b5a0(FUN_00cd7a20);
    DAT_01eaf038 = FUN_00cd79f0();
    if (DAT_01eaf038 < 4) {
      PTR_FUN_01eaf018 = FUN_00cd7290;
      PTR_FUN_01eaf020 = FUN_00cd7310;
    }
    else {
      PTR_FUN_01eaf018 = FUN_00cd72d0;
      PTR_FUN_01eaf020 = FUN_00cd7320;
    }
    local_38 = &PTR_FUN_00cd4540;
    local_30 = &PTR_FUN_00cd4868;
    local_28 = &PTR_FUN_00cd4bd8;
    local_20 = &PTR_FUN_00cd4df8;
    local_18 = &PTR_FUN_00cd50f8;
    local_10 = &PTR_FUN_00cd5468;
    FUN_00cd77c0(&local_38,5);
    uVar1 = FUN_00cd79d0(0x29524828,0xcd79f9,0x434);
    uVar3 = FUN_00cd79e0();
    iVar2 = FUN_00cd79d0(uVar1,uVar3,0x20);
    DAT_01eaf010 = iVar2 == -0x7b74a69c;
  }
  return;
}

