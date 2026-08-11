/* Ghidra address: 00418240 */
/* Ghidra symbol: FUN_00418240 */


void FUN_00418240(longlong param_1,undefined8 *param_2,byte *param_3,longlong param_4)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_4 == 0) {
    return;
  }
  uVar2 = (ulonglong)*param_3;
  if (uVar2 < 0xf) {
    if (uVar2 == 0xe) {
      bVar1 = param_3[1];
      for (; param_4 != 0; param_4 = param_4 + -1) {
        FUN_00417c40(param_1,param_2,param_3);
        param_1 = param_1 + (ulonglong)*(uint *)(param_3 + (ulonglong)bVar1 + 2);
        param_2 = (undefined8 *)
                  ((longlong)param_2 + (ulonglong)*(uint *)(param_3 + (ulonglong)bVar1 + 2));
      }
      return;
    }
    if (uVar2 == 10) {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        FUN_00414bf0(param_1,*param_2);
        param_1 = param_1 + 8;
        param_2 = param_2 + 1;
      }
      return;
    }
    if (uVar2 == 0xb) {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        FUN_00414b90(param_1,*param_2);
        param_1 = param_1 + 8;
        param_2 = param_2 + 1;
      }
      return;
    }
    if (uVar2 == 0xc) {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        FUN_00417c10(param_1,param_2);
        param_1 = param_1 + 0x18;
        param_2 = param_2 + 3;
      }
      return;
    }
    lVar3 = uVar2 - 0xd;
    if (lVar3 == 0) {
      bVar1 = param_3[1];
      for (; param_4 != 0; param_4 = param_4 + -1) {
        FUN_00418240(param_1,param_2,**(undefined8 **)(param_3 + (ulonglong)bVar1 + 10),
                     *(undefined4 *)(param_3 + (ulonglong)bVar1 + 6));
        param_1 = param_1 + (ulonglong)*(uint *)(param_3 + (ulonglong)bVar1 + 2);
        param_2 = (undefined8 *)
                  ((longlong)param_2 + (ulonglong)*(uint *)(param_3 + (ulonglong)bVar1 + 2));
      }
      return;
    }
  }
  else {
    if (uVar2 == 0xf) {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        FUN_0041b840(param_1,*param_2);
        param_1 = param_1 + 8;
        param_2 = param_2 + 1;
      }
      return;
    }
    if (uVar2 == 0x11) {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        FUN_004194b0(param_1,*param_2,param_3);
        param_1 = param_1 + 8;
        param_2 = param_2 + 1;
      }
      return;
    }
    lVar3 = uVar2 - 0x12;
    if (lVar3 == 0) {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        FUN_00414ad0(param_1,*param_2);
        param_1 = param_1 + 8;
        param_2 = param_2 + 1;
      }
      return;
    }
  }
  FUN_004098e0(CONCAT71((int7)((ulonglong)lVar3 >> 8),2));
  return;
}

