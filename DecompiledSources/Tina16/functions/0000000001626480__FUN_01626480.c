/* Ghidra address: 01626480 */
/* Ghidra symbol: FUN_01626480 */


undefined8 FUN_01626480(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) ||
     ((((iVar1 = *param_1, iVar1 != 6 && (iVar1 != 7)) && (iVar1 != 4)) && (iVar1 != 5)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

