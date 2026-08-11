/* Ghidra address: 0161df70 */
/* Ghidra symbol: FUN_0161df70 */


void FUN_0161df70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_01698500(param_2,param_3,10);
  lVar2 = FUN_01698500(param_1,uVar1,9);
  *(undefined4 *)(lVar2 + 0x4c) = 0x1a;
  return;
}

