/* Ghidra address: 016602d0 */
/* Ghidra symbol: FUN_016602d0 */


void FUN_016602d0(longlong param_1,int param_2,undefined4 param_3,int param_4,undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong unaff_R13;
  undefined7 uVar2;
  
  uVar2 = (undefined7)(unaff_R13 >> 8);
  if (param_2 == 3) {
    unaff_R13 = CONCAT71(uVar2,0x58);
    uVar1 = 0;
  }
  else if (param_2 == 4) {
    unaff_R13 = CONCAT71(uVar2,0x5c);
    uVar1 = 0;
  }
  else if (param_2 == 5) {
    unaff_R13 = CONCAT71(uVar2,0x59);
    uVar1 = 0;
  }
  else {
    uVar1 = (ulonglong)(param_2 - 6U);
    if (param_2 - 6U == 0) {
      unaff_R13 = CONCAT71(uVar2,0x5e);
    }
  }
  uVar2 = (undefined7)(uVar1 >> 8);
  if (param_4 == -1) {
    FUN_0165fd30(param_1,CONCAT71(uVar2,0xf2),0xf,unaff_R13 & 0xffffffff,param_3,param_5);
  }
  else {
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),CONCAT71(uVar2,0xf2));
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),0xf);
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),unaff_R13 & 0xffffffff);
    uVar1 = CONCAT62((int6)((ulonglong)*(longlong *)(param_1 + 0x3c0) >> 0x10),(char)param_3 * 8) &
            0xffffffff;
    FUN_0165dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0),
                 CONCAT71((int7)(uVar1 >> 8),(char)uVar1 + (char)param_4 + -0x40));
  }
  return;
}

