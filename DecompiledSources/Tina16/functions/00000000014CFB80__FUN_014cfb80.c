/* Ghidra address: 014cfb80 */
/* Ghidra symbol: FUN_014cfb80 */


int FUN_014cfb80(undefined8 param_1,longlong param_2,double param_3,double param_4,double param_5,
                char param_6,byte *param_7,undefined1 param_8)

{
  int unaff_EBX;
  
  if (param_6 == '\0') {
    if (param_3 <= param_4 + param_5) {
      if (param_4 - param_5 <= param_3) {
        unaff_EBX = 0;
      }
      else {
        unaff_EBX = 0;
      }
    }
    else {
      unaff_EBX = 1;
    }
    *param_7 = unaff_EBX != 0;
  }
  FUN_016eeca0((double)*param_7,param_2 + 0x1b8,0,param_8,(double)*param_7,0);
  return unaff_EBX;
}

