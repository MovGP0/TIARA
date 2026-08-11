/* Ghidra address: 00649300 */
/* Ghidra symbol: FUN_00649300 */


void FUN_00649300(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5)

{
  longlong lVar1;
  code *pcVar2;
  
  if (param_5 == '\0') {
    lVar1 = param_1[10];
    pcVar2 = (code *)FUN_00411550(lVar1,0xffdf);
    (*pcVar2)(lVar1);
    param_2 = 0;
  }
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,param_4);
  return;
}

