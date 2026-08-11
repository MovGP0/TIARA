/* Ghidra address: 00536df0 */
/* Ghidra symbol: FUN_00536df0 */


undefined8 FUN_00536df0(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)*param_1;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 != '\a')) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)pcVar1 >> 8),1);
  }
  return uVar2;
}

