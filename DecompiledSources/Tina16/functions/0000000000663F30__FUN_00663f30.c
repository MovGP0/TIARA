/* Ghidra address: 00663f30 */
/* Ghidra symbol: FUN_00663f30 */


ulonglong FUN_00663f30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined7 uVar2;
  
  uVar2 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar1 = CONCAT71(uVar2,4);
  if (param_3 != 0) {
    FUN_0064d000(param_2,&local_28);
    FUN_0064d000(param_3,&local_38);
    if (((local_34 < local_24) || (local_2c <= local_1c)) || (local_20 < local_30)) {
      if (((local_38 < local_28) || (local_30 <= local_20)) || (local_1c < local_2c)) {
        if ((local_34 + local_2c) / 2 <= local_24) {
          uVar1 = CONCAT71(uVar2,2);
        }
      }
      else {
        uVar1 = CONCAT71(uVar2,3);
      }
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1 & 0xffffffff;
}

