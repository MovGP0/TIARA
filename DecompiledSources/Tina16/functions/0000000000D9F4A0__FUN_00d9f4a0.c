/* Ghidra address: 00d9f4a0 */
/* Ghidra symbol: FUN_00d9f4a0 */


void FUN_00d9f4a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,longlong param_6,undefined1 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffc0;
  uint uVar3;
  undefined1 local_24 [12];
  
  uVar3 = (uint)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar1 = (**(code **)(param_1 + 0x58))(param_1);
  FUN_00787870(local_24,uVar1,param_4,param_5);
  if (param_6 == 0) {
    uVar2 = FUN_007810f0();
    FUN_00779130(uVar2,param_3,local_24,param_7,param_8,(ulonglong)uVar3 << 0x20);
  }
  else {
    uVar2 = FUN_007810f0();
    FUN_00779190(uVar2,param_3,local_24,param_6,param_7,param_8,0);
  }
  return;
}

