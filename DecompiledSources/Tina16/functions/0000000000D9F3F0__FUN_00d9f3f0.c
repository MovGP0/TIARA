/* Ghidra address: 00d9f3f0 */
/* Ghidra symbol: FUN_00d9f3f0 */


void FUN_00d9f3f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_24 [12];
  
  uVar1 = (**(code **)(param_1 + 0x58))(param_1);
  FUN_00787870(local_24,uVar1,param_3,param_4);
  uVar2 = FUN_007810f0();
  FUN_007790b0(uVar2,local_24,param_5,param_6);
  return;
}

