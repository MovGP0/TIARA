/* Ghidra address: 006d7b40 */
/* Ghidra symbol: FUN_006d7b40 */


void FUN_006d7b40(undefined8 param_1,longlong param_2)

{
  undefined1 extraout_AL;
  char cVar1;
  undefined1 extraout_AL_00;
  undefined1 extraout_AL_01;
  undefined1 extraout_AL_02;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined1 extraout_AH_02;
  char extraout_AH_03;
  char extraout_AH_04;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  
  FUN_00411550(param_1,0xffb0);
  cVar1 = (*(code *)CONCAT44(extraout_var_03,
                             CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL))))(param_1);
  if (cVar1 == '\0') {
    FUN_0065b870(param_1);
    thunk_FUN_041da4fa();
    thunk_FUN_03ec68d2(CONCAT44(extraout_var_04,
                                CONCAT22(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00))),
                       CONCAT44(extraout_var_05,
                                CONCAT22(extraout_var_01,CONCAT11(extraout_AH_01,extraout_AL_01))));
    if ((CONCAT22(extraout_var_02,CONCAT11(extraout_AH_02,extraout_AL_02)) &
        CONCAT22(extraout_var_02,CONCAT11(extraout_AH_02,extraout_AL_02))) == 0) goto LAB_006d7bbc;
  }
  if ((*(short *)(param_2 + 8) == 9) && (thunk_FUN_040bd713(0x11), extraout_AH_03 < '\0')) {
    thunk_FUN_040bd713(0x10);
    FUN_006d7820(param_1,-1 < extraout_AH_04,1);
    *(undefined8 *)(param_2 + 0x18) = 1;
    return;
  }
LAB_006d7bbc:
  FUN_0065a1b0(param_1,param_2);
  return;
}

