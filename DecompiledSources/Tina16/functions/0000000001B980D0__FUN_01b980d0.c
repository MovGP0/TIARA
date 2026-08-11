/* Ghidra address: 01b980d0 */
/* Ghidra symbol: FUN_01b980d0 */


void FUN_01b980d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
  uVar2 = FUN_01b96a50(param_1,uVar1);
  *param_4 = uVar2;
  return;
}

