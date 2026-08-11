/* Ghidra address: 00423340 */
/* Ghidra symbol: FUN_00423340 */


undefined8 * FUN_00423340(undefined8 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_3 + 1 < 1) {
    FUN_00423010(&local_48,0,0,0,0);
    *param_1 = local_48;
    param_1[1] = uStack_40;
  }
  else {
    local_30 = *(undefined8 *)param_2;
    local_38 = *(undefined8 *)param_2;
    if ((1 < param_3 + 1) && (0 < param_3)) {
      do {
        iVar1 = param_2[2];
        if (iVar1 < (int)local_30) {
          local_30 = CONCAT44(local_30._4_4_,iVar1);
        }
        if ((int)local_38 < iVar1) {
          local_38 = CONCAT44(local_38._4_4_,iVar1);
        }
        iVar1 = param_2[3];
        if (iVar1 < local_30._4_4_) {
          local_30 = CONCAT44(iVar1,(int)local_30);
        }
        if (local_38._4_4_ < iVar1) {
          local_38 = CONCAT44(iVar1,(int)local_38);
        }
        param_3 = param_3 + -1;
        param_2 = param_2 + 2;
      } while (param_3 != 0);
    }
    FUN_00423030(param_1,&local_30,&local_38,0);
  }
  return param_1;
}

