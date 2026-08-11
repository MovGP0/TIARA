/* Ghidra address: 00bcf0a0 */
/* Ghidra symbol: FUN_00bcf0a0 */


undefined4 FUN_00bcf0a0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_004b3260(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  FUN_00bcff90(param_1,uVar1,param_2);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    (**(code **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0xc0),param_1,uVar1,1);
  }
  FUN_004b3390(param_1);
  return uVar1;
}

