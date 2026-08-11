/* Ghidra address: 01822920 */
/* Ghidra symbol: FUN_01822920 */


undefined4 FUN_01822920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  lVar2 = FUN_0184eb50(param_3,param_1);
  lVar3 = FUN_0184eb50(param_3,param_2);
  if ((lVar2 != 0) && (lVar3 != 0)) {
    uVar1 = FUN_00411580(*(undefined8 *)(lVar3 + 0x90),*(undefined8 *)(lVar2 + 0x90));
  }
  return uVar1;
}

