/* Ghidra address: 00469f40 */
/* Ghidra symbol: FUN_00469f40 */


void FUN_00469f40(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar6 = FUN_00469470(*param_1);
  bVar3 = (&DAT_01dc437b)[uVar6 & 0xffff];
  uVar6 = FUN_00469470(*param_2);
  bVar4 = (&DAT_01dc437b)[uVar6 & 0xffff];
  bVar1 = (&DAT_01dc4622)[(ulonglong)bVar4 + (ulonglong)bVar3 * 0xc];
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      if (param_3 == 0) {
        FUN_00468ea0(param_1,param_2);
        return;
      }
      if (3 < param_3) {
        FUN_00469670(param_1,param_2,param_3);
        return;
      }
      FUN_00469560(param_1,param_2,param_3);
      return;
    }
    if (bVar1 < 4) {
      if (bVar1 == 3) {
        if (param_3 == 3) {
          FUN_00469560(param_1,param_2,3);
          return;
        }
        FUN_00469670(param_1,param_2,param_3);
        return;
      }
      if (bVar1 == 0) {
        FUN_00460210();
        return;
      }
      if (bVar1 == 1) {
        FUN_00469c90(param_1,param_2,param_3);
        return;
      }
      if (bVar1 == 2) {
        FUN_00469bc0(param_1,param_2,param_3);
        return;
      }
    }
    else {
      if (bVar1 == 4) {
        if (3 < param_3) {
          FUN_00469670(param_1,param_2,param_3);
          return;
        }
        FUN_00469560(param_1,param_2,param_3);
        return;
      }
      if (bVar1 == 5) {
        FUN_00469d60(param_1,param_2,param_3,bVar3,bVar4);
        return;
      }
    }
  }
  else if (bVar1 < 10) {
    if (bVar1 == 9) {
      if (param_3 == 3) {
        FUN_00469560(param_1,param_2,3);
        return;
      }
      FUN_00469800(param_1,param_2,param_3);
      return;
    }
    if (bVar1 == 7) {
      if (param_3 < 8) {
        if (3 < param_3) {
          FUN_00469670(param_1,param_2,param_3);
          return;
        }
        FUN_00469560(param_1,param_2,param_3);
        return;
      }
      if (param_3 == 8) {
        cVar2 = FUN_00463f70(param_1);
        if ((cVar2 == '\0') || (uVar7 = FUN_00463f70(param_2), (char)uVar7 == '\0')) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        }
        FUN_00468820(param_1,uVar5);
        return;
      }
      if (param_3 == 9) {
        uVar7 = FUN_00463f70(param_1);
        if (((char)uVar7 == '\0') && (uVar7 = FUN_00463f70(param_2), (char)uVar7 == '\0')) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        }
        FUN_00468820(param_1,uVar5);
        return;
      }
      if (param_3 != 10) {
        return;
      }
      bVar3 = FUN_00463f70(param_1);
      bVar4 = FUN_00463f70(param_2);
      FUN_00468820(param_1,bVar3 ^ bVar4);
      return;
    }
    if (bVar1 == 8) {
      if (param_3 == 0) {
        FUN_004695f0(param_1,param_2,0);
        return;
      }
      if (param_3 != 1) {
        if (param_3 - 2U < 2) {
          FUN_00469560(param_1,param_2,param_3);
          return;
        }
        FUN_00469670(param_1,param_2,param_3);
        return;
      }
      FUN_004695f0(param_1,param_2,1);
      if (bVar3 != 8) {
        return;
      }
      if (bVar4 != 8) {
        return;
      }
      *param_1 = 5;
      return;
    }
  }
  else {
    if (bVar1 == 10) {
      if (param_3 == 3) {
        FUN_00469560(param_1,param_2,3);
        return;
      }
      FUN_004699e0(param_1,param_2,param_3);
      return;
    }
    if (bVar1 == 0xb) {
      FUN_004694b0(param_1,param_2,param_3);
      return;
    }
  }
  FUN_00460210();
  return;
}

