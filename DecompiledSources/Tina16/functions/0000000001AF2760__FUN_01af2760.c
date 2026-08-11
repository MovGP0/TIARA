/* Ghidra address: 01af2760 */
/* Ghidra symbol: FUN_01af2760 */


undefined8 FUN_01af2760(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  undefined8 unaff_R13;
  
  FUN_00414480(param_2);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (param_3 < 5) {
      if (param_3 == 4) {
        unaff_R13 = *(undefined8 *)(lVar1 + 0x6e8);
      }
      else if (param_3 == 1) {
        unaff_R13 = *(undefined8 *)(lVar1 + 0x700);
      }
      else if (param_3 == 2) {
        unaff_R13 = *(undefined8 *)(lVar1 + 0x6f8);
      }
      else if (param_3 == 3) {
        unaff_R13 = *(undefined8 *)(lVar1 + 0x6f0);
      }
    }
    else if (param_3 == 5) {
      unaff_R13 = *(undefined8 *)(lVar1 + 0x6d8);
    }
    else if (param_3 == 6) {
      unaff_R13 = *(undefined8 *)(lVar1 + 0x6e0);
    }
    FUN_0064dd90(unaff_R13,param_2);
  }
  return param_2;
}

