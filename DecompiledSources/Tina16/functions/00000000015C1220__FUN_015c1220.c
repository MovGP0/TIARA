/* Ghidra address: 015c1220 */
/* Ghidra symbol: FUN_015c1220 */


undefined8 FUN_015c1220(undefined8 param_1,longlong param_2,short *param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong local_res10;
  short *local_res18;
  longlong local_res20;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  if (local_res20 == 0) {
    FUN_015bf890(&local_res20);
  }
  if (local_res10 == 0) {
    FUN_015bf040(&local_10,local_res20);
  }
  else {
    FUN_015bf040(&local_10,local_res10);
  }
  iVar2 = FUN_004170c0(&DAT_015c145c,local_res18,1);
  if (iVar2 == 0) {
    iVar2 = FUN_004170c0(&DAT_015c146c,local_res18,1);
    if (iVar2 != 1) {
      if (local_res18 == (short *)0x0) {
        iVar2 = FUN_004170c0(&DAT_015c145c,local_res10,1);
        if (iVar2 == 0) {
          FUN_00414b50(&local_18,local_res20);
          cVar1 = FUN_015bf150(local_10);
          if ((cVar1 == '\0') && (local_res10 != 0)) {
            FUN_00414ad0(param_1,local_res10);
          }
          else {
            iVar2 = FUN_00416db0(local_10,&DAT_015c1480);
            if (iVar2 == 0) {
              FUN_015bf770(&local_20,&LAB_015c1490);
              FUN_00416ad0(&local_20,&DAT_015c1480);
              FUN_015bf7d0(param_1,local_20);
            }
            else {
              FUN_015bf770(param_1,local_10);
            }
          }
          FUN_00414b50(&local_res20,local_18);
        }
        else {
          FUN_00414ad0(param_1,local_res10);
        }
      }
      else if (*local_res18 == 0x5c) {
        FUN_015bf770(param_1,local_res18);
      }
      else {
        FUN_00416ba0(&local_28,local_10,local_res18);
        FUN_015bf770(param_1,local_28);
      }
      goto code_r0x015c13ec;
    }
  }
  FUN_00414ad0(param_1,local_res18);
code_r0x015c13ec:
  FUN_00414560(&local_28,4);
  FUN_00414560(&local_res10,3);
  return param_1;
}

