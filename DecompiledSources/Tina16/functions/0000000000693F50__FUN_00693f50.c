/* Ghidra address: 00693f50 */
/* Ghidra symbol: FUN_00693f50 */


void FUN_00693f50(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00777cd0();
  uVar2 = FUN_007793c0(uVar1,0xff000006);
  FUN_005fdab0(param_2[0x10],uVar2);
  (**(code **)(*param_2 + 0xa8))(param_2,param_3);
  return;
}

