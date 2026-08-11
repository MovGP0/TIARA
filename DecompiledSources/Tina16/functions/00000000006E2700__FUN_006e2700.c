/* Ghidra address: 006e2700 */
/* Ghidra symbol: FUN_006e2700 */


undefined8 FUN_006e2700(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x550) != 0) {
    if ((*(uint *)(param_2 + 0x10) & 4) == 0) {
      uVar1 = FUN_006df650(*(longlong *)(param_1 + 0x550),*(undefined8 *)(param_2 + 8));
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0x30);
    }
  }
  return uVar1;
}

