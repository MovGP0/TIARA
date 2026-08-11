/* Ghidra address: 00d9f2e0 */
/* Ghidra symbol: FUN_00d9f2e0 */


void FUN_00d9f2e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_24 [12];
  
  uVar1 = (**(code **)(param_1 + 0x58))(param_1);
  FUN_00787870(local_24,uVar1,param_4,param_5);
  uVar2 = FUN_007810f0();
  FUN_00778e10(uVar2,param_3,local_24,param_6,param_7,param_8);
  return;
}

