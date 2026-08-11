/* Ghidra address: 00701d00 */
/* Ghidra symbol: FUN_00701d00 */


void FUN_00701d00(int param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    if (*(int *)(param_3 + 1) == 0xb001) {
      pcVar2 = (code *)FUN_00411550(DAT_02012488,0xffac);
      (*pcVar2)(DAT_02012488);
    }
    else if (*(int *)(param_3 + 1) == 0x111) {
      FUN_00701df0();
    }
    else if ((DAT_02012478 == 0) &&
            ((((iVar1 = *(int *)(param_3 + 1), iVar1 == 0x102 || (iVar1 == 0x100)) ||
              (iVar1 == 0x101)) || ((iVar1 == 0x104 || (iVar1 == 0x105)))))) {
      uVar3 = FUN_0065b870(DAT_02012488);
      *param_3 = uVar3;
    }
  }
  thunk_FUN_04186711(DAT_020124b0,param_1,(longlong)param_2,param_3);
  return;
}

