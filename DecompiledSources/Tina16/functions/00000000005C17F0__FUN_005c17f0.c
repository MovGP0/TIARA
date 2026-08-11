/* Ghidra address: 005c17f0 */
/* Ghidra symbol: FUN_005c17f0 */


double FUN_005c17f0(double param_1,uint param_2,uint param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  undefined8 local_48;
  undefined8 local_40 [4];
  
  if (param_4 == '\0') {
    lVar1 = FUN_005c05d0(DAT_02011f30,param_1,0);
    local_40[0] = FUN_005ba6b0((double)lVar1);
    local_48 = FUN_005ba9c0(local_40);
    FUN_005ba7a0(&local_48);
    lVar1 = FUN_0040c840();
    lVar1 = lVar1 + (int)(param_2 * 0x3c + param_3);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      if (lVar1 < 0) {
        lVar2 = -lVar1;
      }
      dVar3 = (double)FUN_00448a90(lVar2 / 0x3c,lVar2 % 0x3c & 0xffffffff,0,0);
      if (lVar1 < 1) {
        param_1 = param_1 + dVar3;
      }
      else {
        param_1 = param_1 - dVar3;
      }
    }
  }
  else if ((param_2 != 0) || (param_3 != 0)) {
    dVar3 = (double)FUN_00448a90((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f),
                                 (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f),0,0);
    if ((int)(param_2 * 0x3c + param_3) < 1) {
      param_1 = param_1 + dVar3;
    }
    else {
      param_1 = param_1 - dVar3;
    }
  }
  return param_1;
}

