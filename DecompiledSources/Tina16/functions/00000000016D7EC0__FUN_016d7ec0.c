/* Ghidra address: 016d7ec0 */
/* Ghidra symbol: FUN_016d7ec0 */


void FUN_016d7ec0(undefined8 *param_1,byte param_2,longlong *param_3)

{
  short sVar1;
  undefined8 uVar2;
  
  if (param_2 < 5) {
    if (param_2 != 4) {
      if (param_2 == 1) {
        uVar2 = FUN_016d7c10(1,1);
        *param_1 = uVar2;
        uVar2 = FUN_016d7c10(1,2);
        param_1[1] = uVar2;
        return;
      }
      if (param_2 != 2) {
        if (param_2 != 3) {
          return;
        }
        uVar2 = FUN_016d7c10(3,1);
        *param_1 = uVar2;
        uVar2 = FUN_016d7c10(3,2);
        param_1[1] = uVar2;
        uVar2 = FUN_016d7c10(3,3);
        param_1[2] = uVar2;
        uVar2 = FUN_016d7c10(3,4);
        param_1[3] = uVar2;
        uVar2 = FUN_016d7c10(3,5);
        param_1[4] = uVar2;
        uVar2 = FUN_016d7c10(3,6);
        param_1[5] = uVar2;
        uVar2 = FUN_016d7c10(3,7);
        param_1[6] = uVar2;
        uVar2 = FUN_016d7c10(3,8);
        param_1[7] = uVar2;
        uVar2 = FUN_016d7c10(3,9);
        param_1[8] = uVar2;
        return;
      }
      uVar2 = FUN_016d7c10(2,1);
      *param_1 = uVar2;
      uVar2 = FUN_016d7c10(2,2);
      param_1[1] = uVar2;
      return;
    }
  }
  else {
    if (param_2 == 5) {
      uVar2 = FUN_016d7c10(5,1);
      *param_1 = uVar2;
      uVar2 = FUN_016d7c10(5,2);
      param_1[1] = uVar2;
      uVar2 = FUN_016d7c10(5,3);
      param_1[2] = uVar2;
      return;
    }
    if (param_2 == 6) {
      uVar2 = FUN_016d7c10(6,1);
      *param_1 = uVar2;
      uVar2 = FUN_016d7c10(6,2);
      param_1[1] = uVar2;
      return;
    }
    if (param_2 != 7) {
      return;
    }
  }
  if ((param_3 == (longlong *)0x0) ||
     (sVar1 = (**(code **)(*param_3 + 0xf8))(param_3), sVar1 != 0xa6)) {
    if ((param_3 == (longlong *)0x0) ||
       (sVar1 = (**(code **)(*param_3 + 0xf8))(param_3), sVar1 != 0xa7)) {
      uVar2 = FUN_016d7c10(4,1);
      *param_1 = uVar2;
    }
    else {
      *param_1 = 0x3fe0000000000000;
    }
  }
  else {
    *param_1 = 0x3f847ae147ae147b;
  }
  uVar2 = FUN_016d7c10(4,2);
  param_1[1] = uVar2;
  uVar2 = FUN_016d7c10(4,3);
  param_1[2] = uVar2;
  if ((param_2 == 4) && (param_3 != (longlong *)0x0)) {
    param_1[2] = (double)param_1[2] - 90.0;
  }
  return;
}

