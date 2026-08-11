/* Ghidra address: 010cbf20 */
/* Ghidra symbol: FUN_010cbf20 */


void FUN_010cbf20(undefined8 *param_1,undefined8 param_2,short *param_3,char param_4,
                 undefined8 param_5)

{
  undefined8 unaff_RBX;
  undefined6 uVar2;
  ulonglong uVar1;
  undefined8 local_res10;
  short *local_res18 [2];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_20 = *param_1;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  uVar2 = (undefined6)((ulonglong)unaff_RBX >> 0x10);
  if (local_20._3_1_ == '\0') {
    uVar1 = CONCAT62(uVar2,0x69);
  }
  else {
    uVar1 = CONCAT62(uVar2,0x6a);
  }
  if (param_4 == '\0') {
    if (*local_res18[0] != 0x2d) {
      FUN_00416ba0(local_res18,&DAT_010cc0b0,local_res18[0]);
    }
    FUN_00416780(local_30,uVar1 & 0xffffffff);
    FUN_00416cd0(param_5,4,local_res10,local_res18[0],&DAT_010cc0c0,local_30[0]);
  }
  else {
    FUN_00416780(&local_38,uVar1 & 0xffffffff);
    FUN_00416cd0(param_5,6,local_res10,L"*exp(",local_res18[0],&DAT_010cc0c0,local_38,&LAB_010cc0e8)
    ;
  }
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_res10,2);
  return;
}

