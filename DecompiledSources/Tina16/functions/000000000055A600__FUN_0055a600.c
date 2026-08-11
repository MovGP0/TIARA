/* Ghidra address: 0055a600 */
/* Ghidra symbol: FUN_0055a600 */


undefined8 FUN_0055a600(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_0055aa90(param_1);
  uVar1 = FUN_005466a0(param_3);
  uVar2 = FUN_00414480(param_2);
  FUN_00561e30(*(undefined8 *)(param_1 + 0x50),uVar1,uVar2);
  return param_2;
}

