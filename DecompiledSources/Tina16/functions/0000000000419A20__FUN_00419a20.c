/* Ghidra address: 00419a20 */
/* Ghidra symbol: FUN_00419a20 */


undefined8 FUN_00419a20(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_1 != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + (ulonglong)*(byte *)(param_1 + 1) + 6),
     puVar1 != (undefined8 *)0x0)) {
    uVar2 = *puVar1;
  }
  return uVar2;
}

