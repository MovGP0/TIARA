/* Ghidra address: 00a9cf10 */
/* Ghidra symbol: FUN_00a9cf10 */


void FUN_00a9cf10(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
  FUN_00a57400(param_1 + 0x16,param_2,param_3,*(undefined4 *)((longlong)param_1 + 0x44),
               (int)param_1[9],uVar1,param_4,param_1 + 0x8a);
  return;
}

