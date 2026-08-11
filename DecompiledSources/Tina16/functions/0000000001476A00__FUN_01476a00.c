/* Ghidra address: 01476a00 */
/* Ghidra symbol: FUN_01476a00 */


void FUN_01476a00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(longlong *)(param_1 + 0x760) = param_2;
  *(undefined8 *)(param_1 + 0x738) = *(undefined8 *)(param_2 + 0x628);
  lVar1 = *(longlong *)(param_1 + 0x760);
  *(undefined8 *)(param_1 + 0x740) = *(undefined8 *)(lVar1 + 0x630);
  *(undefined8 *)(param_1 + 0x748) = *(undefined8 *)(lVar1 + 0x638);
  *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(lVar1 + 0x640);
  *(undefined8 *)(param_1 + 0x758) = *(undefined8 *)(lVar1 + 0x648);
  FUN_01476690();
  return;
}

