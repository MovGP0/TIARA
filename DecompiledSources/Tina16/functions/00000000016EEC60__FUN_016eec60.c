/* Ghidra address: 016eec60 */
/* Ghidra symbol: FUN_016eec60 */


undefined8 FUN_016eec60(undefined8 param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    iVar1 = FUN_01b057d0(param_1,param_3);
    uVar2 = *(undefined8 *)(param_2 + (longlong)iVar1 * 8);
  }
  else {
    iVar1 = FUN_01b057d0(param_4,param_3);
    uVar2 = *(undefined8 *)(param_2 + (longlong)iVar1 * 8);
  }
  return uVar2;
}

