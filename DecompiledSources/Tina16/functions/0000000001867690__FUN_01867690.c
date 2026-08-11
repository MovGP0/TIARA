/* Ghidra address: 01867690 */
/* Ghidra symbol: FUN_01867690 */


void FUN_01867690(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00410ad0(param_2);
  lVar2 = FUN_018671d0(param_1,uVar1,4);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x40))(lVar2,param_2,param_3,param_4);
  }
  return;
}

