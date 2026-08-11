/* Ghidra address: 0044fb90 */
/* Ghidra symbol: FUN_0044fb90 */


undefined8 FUN_0044fb90(longlong param_1,uint param_2,longlong param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  short local_48;
  short local_46;
  longlong local_40;
  short local_38;
  short local_36;
  longlong local_30;
  
  if (((param_1 == 0) || (param_3 == 0)) || ((param_5 != 0 && (param_5 != 1)))) {
    thunk_FUN_041931fb(0x57);
    uVar2 = 0;
  }
  else {
    if (0x7fffffff < param_2) {
      param_2 = FUN_00414d00(param_1);
    }
    if (0x7fffffff < param_4) {
      param_4 = FUN_00414d00(param_3);
    }
    local_40 = param_3;
    local_30 = param_1;
    if (param_1 == param_3) {
      iVar1 = param_2 - param_4;
LAB_0044fc84:
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else if (iVar1 < 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      while( true ) {
        uVar3 = param_2;
        if ((int)param_4 < (int)param_2) {
          uVar3 = param_4;
        }
        if ((int)uVar3 < 1) {
          iVar1 = param_2 - param_4;
          goto LAB_0044fc84;
        }
        if (0x7ff0 < (int)uVar3) {
          uVar3 = 0x7ff0;
        }
        local_48 = (short)uVar3 * 2;
        local_46 = local_48;
        local_38 = local_48;
        local_36 = local_48;
        uVar2 = (*DAT_0200c8b8)(&local_38,&local_48,param_5 != 0);
        if ((int)uVar2 != 0) break;
        param_2 = param_2 - uVar3;
        param_4 = param_4 - uVar3;
        local_30 = local_30 + (longlong)(int)uVar3 * 2;
        local_40 = local_40 + (longlong)(int)uVar3 * 2;
      }
    }
  }
  return uVar2;
}

