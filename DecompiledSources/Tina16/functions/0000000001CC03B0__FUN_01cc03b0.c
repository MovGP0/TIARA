/* Ghidra address: 01cc03b0 */
/* Ghidra symbol: FUN_01cc03b0 */


void FUN_01cc03b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_01d34e90(param_1,param_2);
  uVar2 = FUN_01d326b0(*(undefined8 *)(param_1 + 0x438));
  FUN_01d31180(param_2,0x306,0x10,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x438);
  uVar2 = FUN_01d326b0(uVar1);
  FUN_01d326d0(param_2,uVar1,uVar2);
  return;
}

