/* Ghidra address: 00658fe0 */
/* Ghidra symbol: FUN_00658fe0 */


void FUN_00658fe0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_00411550(param_1,0xffd0);
  (*pcVar1)(param_1,param_2);
  pcVar1 = (code *)FUN_00411550(param_1,0xffc0);
  (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

