/* Ghidra address: 00465e60 */
/* Ghidra symbol: FUN_00465e60 */


undefined8 FUN_00465e60(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00414520(param_1);
  uVar1 = (**(code **)PTR_DAT_02001b88)(param_2,0x400,0,uVar2);
  FUN_00460800(uVar1,6,8);
  return param_1;
}

