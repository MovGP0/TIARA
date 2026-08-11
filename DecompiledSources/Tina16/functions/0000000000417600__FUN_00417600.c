/* Ghidra address: 00417600 */
/* Ghidra symbol: FUN_00417600 */


void FUN_00417600(undefined8 *param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_3 == 0) {
    return;
  }
  uVar3 = (ulonglong)*param_2;
  if (uVar3 < 0xf) {
    if (uVar3 == 0xe) {
      bVar1 = param_2[1];
      for (; param_3 != 0; param_3 = param_3 + -1) {
        FUN_00417580(param_1,param_2);
        param_1 = (undefined8 *)
                  ((longlong)param_1 + (ulonglong)*(uint *)(param_2 + (ulonglong)bVar1 + 2));
      }
      return;
    }
    if (1 < uVar3 - 10) {
      if (uVar3 == 0xc) {
        for (; param_3 != 0; param_3 = param_3 + -1) {
          uVar3 = 0;
          do {
            *(undefined4 *)((longlong)param_1 + uVar3 * 4) = 0;
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
          } while (uVar2 != 6);
          param_1 = param_1 + 3;
        }
        return;
      }
      uVar3 = uVar3 - 0xd;
      if (uVar3 == 0) {
        bVar1 = param_2[1];
        for (; param_3 != 0; param_3 = param_3 + -1) {
          FUN_00417600(param_1,**(undefined8 **)(param_2 + (ulonglong)bVar1 + 10),
                       *(undefined4 *)(param_2 + (ulonglong)bVar1 + 6));
          param_1 = (undefined8 *)
                    ((longlong)param_1 + (ulonglong)*(uint *)(param_2 + (ulonglong)bVar1 + 2));
        }
        return;
      }
LAB_00417704:
      FUN_004098e0(CONCAT71((int7)(uVar3 >> 8),2));
      return;
    }
  }
  else if ((uVar3 != 0xf) && (uVar3 = uVar3 - 0x11, 1 < uVar3)) goto LAB_00417704;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

