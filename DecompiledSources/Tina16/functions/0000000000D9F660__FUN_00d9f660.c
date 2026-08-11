/* Ghidra address: 00d9f660 */
/* Ghidra symbol: FUN_00d9f660 */


void FUN_00d9f660(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined4 param_7,longlong param_8,
                 undefined8 param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_24 [12];
  
  uVar1 = (**(code **)(param_1 + 0x58))(param_1);
  FUN_00787870(local_24,uVar1,param_4,param_5);
  if (param_8 == 0) {
    uVar2 = FUN_007810f0();
    FUN_007793e0(uVar2,param_3,local_24,param_6,param_7,param_9);
  }
  else {
    uVar2 = FUN_007810f0();
    FUN_00779440(uVar2,param_3,local_24,param_6,param_7,param_8,param_9);
  }
  return;
}

