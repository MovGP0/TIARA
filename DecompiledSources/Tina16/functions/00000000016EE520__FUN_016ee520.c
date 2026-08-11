/* Ghidra address: 016ee520 */
/* Ghidra symbol: FUN_016ee520 */


undefined8
FUN_016ee520(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
            longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_5 == 0) {
    iVar1 = FUN_01b05690(param_1,param_3,param_4);
    uVar2 = *(undefined8 *)(param_2 + (longlong)iVar1 * 8);
  }
  else {
    iVar1 = FUN_01b05690(param_5,param_3,param_4);
    uVar2 = *(undefined8 *)(param_2 + (longlong)iVar1 * 8);
  }
  return uVar2;
}

