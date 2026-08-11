/* Ghidra address: 0161ad70 */
/* Ghidra symbol: FUN_0161ad70 */


undefined8 FUN_0161ad70(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 5)) {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

