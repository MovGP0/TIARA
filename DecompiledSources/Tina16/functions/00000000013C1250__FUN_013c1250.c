/* Ghidra address: 013c1250 */
/* Ghidra symbol: FUN_013c1250 */


undefined8 FUN_013c1250(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 unaff_R13;
  
  *param_2 = 0;
  *param_3 = 0;
  cVar1 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02001288,param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02001dd8,param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_00f1e290(*(undefined8 *)PTR_DAT_020059d8,param_1);
      if (cVar1 == '\0') {
        cVar1 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02005188,param_1);
        if (cVar1 == '\0') {
          cVar1 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02004fb8,param_1);
          if (cVar1 == '\0') {
            cVar1 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02001d00,param_1);
            if (cVar1 == '\0') {
              cVar1 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02005118,param_1);
              if (cVar1 == '\0') {
                cVar1 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02001630,param_1);
                if (cVar1 == '\0') {
                  cVar1 = FUN_00f1e290(*(undefined8 *)PTR_DAT_02003118,param_1);
                  if (cVar1 != '\0') {
                    *param_3 = 1;
                    unaff_R13 = *(undefined8 *)PTR_DAT_02003118;
                  }
                }
                else {
                  unaff_R13 = *(undefined8 *)PTR_DAT_02001630;
                }
              }
              else {
                unaff_R13 = *(undefined8 *)PTR_DAT_02005118;
              }
            }
            else {
              unaff_R13 = *(undefined8 *)PTR_DAT_02001d00;
            }
          }
          else {
            *param_2 = 1;
            unaff_R13 = *(undefined8 *)PTR_DAT_02004fb8;
          }
        }
        else {
          *param_2 = 1;
          unaff_R13 = *(undefined8 *)PTR_DAT_02005188;
        }
      }
      else {
        unaff_R13 = *(undefined8 *)PTR_DAT_020059d8;
      }
    }
    else {
      unaff_R13 = *(undefined8 *)PTR_DAT_02001dd8;
    }
  }
  else {
    unaff_R13 = *(undefined8 *)PTR_DAT_02001288;
  }
  return unaff_R13;
}

