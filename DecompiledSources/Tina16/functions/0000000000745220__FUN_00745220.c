/* Ghidra address: 00745220 */
/* Ghidra symbol: FUN_00745220 */


undefined8 FUN_00745220(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b8));
  uVar1 = *(undefined4 *)(lVar2 + 0x28);
  lVar2 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b0),param_3);
  return CONCAT44(*(undefined4 *)(lVar2 + 0x28),uVar1);
}

