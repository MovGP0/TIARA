/* Ghidra address: 01cfb180 */
/* Ghidra symbol: FUN_01cfb180 */


void FUN_01cfb180(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9)

{
  undefined1 uVar1;
  
  FUN_01cf0980(param_1,param_2);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x98))(param_2,param_1,param_3,param_8);
  }
  FUN_01cfb0b0(param_1,param_2);
  FUN_01d04360(param_1,param_2);
  if (*(char *)(param_1 + 0x533) == '\0') {
    uVar1 = FUN_01d0a350(param_1);
    FUN_017bead0(param_1,param_2,param_4,param_5,param_6,param_7,param_9,uVar1);
  }
  return;
}

