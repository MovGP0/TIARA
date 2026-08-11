/* Ghidra address: 00d4a3d0 */
/* Ghidra symbol: FUN_00d4a3d0 */


undefined8 FUN_00d4a3d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00787ad0(*(undefined8 *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    FUN_004238d0(param_2,2,2,2,2);
  }
  return param_2;
}

