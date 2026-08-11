/* Ghidra address: 01888ba0 */
/* Ghidra symbol: FUN_01888ba0 */


undefined8 FUN_01888ba0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_2);
  uVar1 = *(undefined4 *)(lVar2 + 0xc);
  lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_2);
  return CONCAT44(*(undefined4 *)(lVar2 + 0x10),uVar1);
}

