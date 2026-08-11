/* Ghidra address: 004620f0 */
/* Ghidra symbol: FUN_004620f0 */


void FUN_004620f0(undefined8 param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  if (uVar1 == param_3) {
    FUN_00461840(param_1);
  }
  else if (uVar1 == 0x400c) {
    FUN_004620f0(param_1,*(undefined8 *)(param_2 + 4));
  }
  else {
    if ((int)param_3 < 0xc) {
      if (param_3 == 0xb) {
        uVar2 = FUN_00463f70(param_2);
        FUN_00468820(param_1,uVar2);
        return;
      }
      if ((int)param_3 < 6) {
        if (param_3 == 5) {
          uVar3 = FUN_00464710(param_2);
          FUN_00468770(param_1,uVar3);
          return;
        }
        if ((int)param_3 < 3) {
          if (param_3 == 2) {
            uVar2 = FUN_00462e80(param_2);
            FUN_004686d0(param_1,uVar2);
            return;
          }
          if (param_3 == 0) {
            if ((*param_2 == 1) && (DAT_01dc436a != '\0')) {
              FUN_00460110(0xffff0001,0);
              return;
            }
            FUN_00460b80(param_1);
            return;
          }
          if (param_3 == 1) {
            FUN_00460950(param_1);
            return;
          }
        }
        else {
          if (param_3 == 3) {
            uVar2 = FUN_00462650(param_2);
            FUN_00468580(param_1,uVar2);
            return;
          }
          if (param_3 == 4) {
            uVar3 = FUN_00464c70(param_2);
            FUN_00468730(param_1,uVar3);
            return;
          }
        }
      }
      else {
        if (param_3 == 6) {
          uVar3 = FUN_00465930(param_2);
          FUN_004687b0(param_1,uVar3);
          return;
        }
        if (param_3 == 7) {
          uVar3 = FUN_004651a0(param_2);
          FUN_004687e0(param_1,uVar3);
          return;
        }
        if (param_3 == 8) {
          FUN_00461d80(param_1);
          return;
        }
        if (param_3 == 9) {
          FUN_00461ed0(param_1);
          return;
        }
      }
    }
    else if ((int)param_3 < 0x15) {
      if (param_3 == 0x14) {
        uVar3 = FUN_004634b0(param_2);
        FUN_00468700(param_1,uVar3);
        return;
      }
      if ((int)param_3 < 0x12) {
        if (param_3 == 0x11) {
          uVar2 = FUN_00462db0(param_2);
          FUN_004685e0(param_1,uVar2);
          return;
        }
        if (param_3 == 0xd) {
          FUN_00461f40(param_1);
          return;
        }
        if (param_3 == 0x10) {
          uVar2 = FUN_00462cd0(param_2);
          FUN_004686a0(param_1,uVar2);
          return;
        }
      }
      else {
        if (param_3 == 0x12) {
          uVar2 = FUN_00462fa0(param_2);
          FUN_00468610(param_1,uVar2);
          return;
        }
        if (param_3 == 0x13) {
          uVar2 = FUN_004630a0(param_2);
          FUN_00468640(param_1,uVar2);
          return;
        }
      }
    }
    else {
      if (param_3 == 0x15) {
        uVar3 = FUN_00463a50(param_2);
        FUN_00468670(param_1,uVar3);
        return;
      }
      if (param_3 == 0x100) {
        FUN_00461df0(param_1);
        return;
      }
      if (param_3 == 0x101) {
        FUN_00460110(uVar1,0x101);
        return;
      }
      if (param_3 == 0x102) {
        FUN_00461e60(param_1);
        return;
      }
    }
    FUN_00462050(param_1);
  }
  return;
}

