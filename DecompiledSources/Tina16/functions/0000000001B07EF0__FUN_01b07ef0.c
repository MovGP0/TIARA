/* Ghidra address: 01b07ef0 */
/* Ghidra symbol: FUN_01b07ef0 */


undefined8 FUN_01b07ef0(longlong param_1,int param_2,short param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  while ((iVar1 = (int)uVar2, iVar1 <= param_2 &&
         (param_3 != *(short *)(param_1 + (longlong)iVar1 * 2)))) {
    uVar2 = (ulonglong)(iVar1 + 1);
  }
  return CONCAT71((int7)(uVar2 >> 8),iVar1 <= param_2);
}

