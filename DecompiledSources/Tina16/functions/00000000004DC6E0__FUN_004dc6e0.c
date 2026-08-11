/* Ghidra address: 004dc6e0 */
/* Ghidra symbol: FUN_004dc6e0 */


void FUN_004dc6e0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  DAT_02011614 = DAT_02011614 + 1;
  if (DAT_02011614 == 0) {
    FUN_004a0bd0(PTR_IMAGE_DOS_HEADER_0200c280);
    (**(code **)(*DAT_020115f0 + 0x28))(DAT_020115f0);
    FUN_004d56b0();
    FUN_004bdcb0(0,0);
    uVar1 = DAT_02011648;
    DAT_02011648 = 0;
    FUN_00410f20(uVar1);
    lVar2 = FUN_0041f930();
    uVar1 = *(undefined8 *)(lVar2 + 0x240);
    lVar2 = FUN_0041f930();
    *(undefined8 *)(lVar2 + 0x240) = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_02011618;
    DAT_02011618 = 0;
    FUN_00410f20(uVar1);
    if (DAT_02011638 == 0) {
      FUN_004aa220();
    }
    if (DAT_02011638 != 0) {
      if (DAT_02011638 == 0) {
        FUN_004aa220();
      }
      FUN_004aa3e0(DAT_02011638);
      FUN_0041b5b0(FUN_004aa1e0);
    }
    uVar1 = DAT_02011620;
    DAT_02011620 = 0;
    FUN_00410f20(uVar1);
    FUN_0041b800(&DAT_020115f0);
    FUN_0041b5b0(FUN_004d5770);
    uVar1 = DAT_02011630;
    DAT_02011630 = 0;
    FUN_00410f20(uVar1);
    FUN_004d63a0();
    FUN_0041b800(&DAT_020115f0);
  }
  return;
}

