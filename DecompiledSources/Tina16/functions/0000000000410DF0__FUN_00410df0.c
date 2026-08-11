/* Ghidra address: 00410df0 */
/* Ghidra symbol: FUN_00410df0 */


undefined8 FUN_00410df0(ulonglong *param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[1];
  if ((uVar2 < param_2[1]) || ((param_1[1] == param_2[1] && (uVar2 = *param_1, uVar2 < *param_2))))
  {
    uVar1 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

