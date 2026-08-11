/* Ghidra address: 00786d00 */
/* Ghidra symbol: FUN_00786d00 */


void FUN_00786d00(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  DAT_02012530 = DAT_02012530 + 1;
  if (DAT_02012530 == 0) {
    local_20 = (longlong *)FUN_0078e780(DAT_02012520);
    while( true ) {
      cVar1 = thunk_FUN_0078f033(local_20);
      if (cVar1 == '\0') break;
      FUN_0078eee0(local_20,local_38);
      FUN_00410f20(local_30);
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
    uVar2 = DAT_02012520;
    local_48 = DAT_02012520;
    DAT_02012520 = 0;
    FUN_00410f20(uVar2);
    FUN_00410f20(DAT_02012538);
    uVar2 = FUN_00792810(DAT_02012540);
    local_28 = (longlong *)FUN_00793060(uVar2);
    while( true ) {
      cVar1 = thunk_FUN_007931d3(local_28);
      if (cVar1 == '\0') break;
      local_40 = FUN_007930b0(local_28);
      if (local_40 != 0) {
        FUN_00410f20(local_40);
      }
    }
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + -0x20))(local_28,1);
    }
    FUN_00410f20(DAT_02012540);
    FUN_00410f20(DAT_02012548);
  }
  return;
}

