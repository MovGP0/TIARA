/* Ghidra address: 00d2a480 */
/* Ghidra symbol: FUN_00d2a480 */


undefined8 FUN_00d2a480(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + -4);
  }
  uVar1 = FUN_00415ab0(*(undefined8 *)(param_1 + 0x88));
  FUN_00cd7480(param_2,uVar1,uVar2,param_3);
  return param_2;
}

