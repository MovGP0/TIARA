/* Ghidra address: 00843e20 */
/* Ghidra symbol: FUN_00843e20 */


void FUN_00843e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  FUN_00844b60(param_1);
  FUN_00848f80(param_1);
  pcVar1 = (code *)FUN_00411550(param_1,0xffea,param_3,param_4,uVar2);
  (*pcVar1)(param_1);
  return;
}

