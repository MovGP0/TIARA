/* Ghidra address: 00417a80 */
/* Ghidra symbol: FUN_00417a80 */


void FUN_00417a80(undefined8 *param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return;
  }
  uVar2 = (ulonglong)*param_2;
  if (uVar2 < 0xf) {
    if (uVar2 == 0xe) {
      bVar1 = param_2[1];
      for (; param_3 != 0; param_3 = param_3 + -1) {
        FUN_004179d0(param_1,param_2);
        param_1 = (undefined8 *)
                  ((longlong)param_1 + (ulonglong)*(uint *)(param_2 + (ulonglong)bVar1 + 2));
      }
      return;
    }
    if (uVar2 == 10) {
      for (; param_3 != 0; param_3 = param_3 + -1) {
        FUN_00414630(*param_1);
        param_1 = param_1 + 1;
      }
      return;
    }
    if (uVar2 == 0xb) {
      for (; param_3 != 0; param_3 = param_3 + -1) {
        FUN_00414650(param_1);
        param_1 = param_1 + 1;
      }
      return;
    }
    if (uVar2 == 0xc) {
      for (; param_3 != 0; param_3 = param_3 + -1) {
        FUN_00417a50(param_1);
        param_1 = param_1 + 3;
      }
      return;
    }
    lVar3 = uVar2 - 0xd;
    if (lVar3 == 0) {
      bVar1 = param_2[1];
      for (; param_3 != 0; param_3 = param_3 + -1) {
        FUN_00417a80(param_1,**(undefined8 **)(param_2 + (ulonglong)bVar1 + 10),
                     *(undefined4 *)(param_2 + (ulonglong)bVar1 + 6));
        param_1 = (undefined8 *)
                  ((longlong)param_1 + (ulonglong)*(uint *)(param_2 + (ulonglong)bVar1 + 2));
      }
      return;
    }
  }
  else {
    if (uVar2 == 0xf) {
      for (; param_3 != 0; param_3 = param_3 + -1) {
        FUN_0041b910(*param_1);
        param_1 = param_1 + 1;
      }
      return;
    }
    if (uVar2 == 0x11) {
      for (; param_3 != 0; param_3 = param_3 + -1) {
        FUN_00419500(*param_1);
        param_1 = param_1 + 1;
      }
      return;
    }
    lVar3 = uVar2 - 0x12;
    if (lVar3 == 0) {
      for (; param_3 != 0; param_3 = param_3 + -1) {
        FUN_00414610(*param_1);
        param_1 = param_1 + 1;
      }
      return;
    }
  }
  FUN_004098e0(CONCAT71((int7)((ulonglong)lVar3 >> 8),2));
  return;
}

