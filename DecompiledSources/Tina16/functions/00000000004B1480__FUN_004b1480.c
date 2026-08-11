/* Ghidra address: 004b1480 */
/* Ghidra symbol: FUN_004b1480 */


void FUN_004b1480(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  FUN_0041b800(param_2);
  if ((param_1 != (longlong *)0x0) && ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0)) {
    uVar1 = FUN_0041b800(param_2);
    (**(code **)(*param_1 + 0x70))(param_1,&DAT_004b14d4,uVar1);
  }
  return;
}

