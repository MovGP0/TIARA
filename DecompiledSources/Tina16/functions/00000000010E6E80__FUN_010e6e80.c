/* Ghidra address: 010e6e80 */
/* Ghidra symbol: FUN_010e6e80 */


undefined4 FUN_010e6e80(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01cc7e10(param_1,param_2,param_3,0);
  uVar2 = FUN_010e6df0(*param_3,*(undefined8 *)(param_1 + 0x80),*(undefined1 *)(param_1 + 0x88));
  *param_3 = uVar2;
  return uVar1;
}

