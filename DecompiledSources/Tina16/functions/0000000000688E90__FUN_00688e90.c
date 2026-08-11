/* Ghidra address: 00688e90 */
/* Ghidra symbol: FUN_00688e90 */


void FUN_00688e90(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 extraout_AL;
  char cVar2;
  undefined1 extraout_AL_00;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  
  if ((((*(short *)(param_2 + 8) == 0xd) && (*(char *)(param_1 + 0x498) != '\0')) ||
      ((*(short *)(param_2 + 8) == 0x1b && (*(char *)(param_1 + 0x499) != '\0')))) &&
     (uVar1 = FUN_007f9990(*(undefined4 *)(param_2 + 0x10)), CONCAT11(extraout_AH,uVar1) == 0)) {
    FUN_00411550(param_1,0xffb3);
    cVar2 = (*(code *)CONCAT62(extraout_var,CONCAT11(extraout_AH_00,extraout_AL)))(param_1);
    if (cVar2 != '\0') {
      FUN_00411550(param_1,0xffea);
      (*(code *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_01,extraout_AL_00)))(param_1);
      *(undefined8 *)(param_2 + 0x18) = 1;
      return;
    }
  }
  FUN_0065a1b0(param_1,param_2);
  return;
}

