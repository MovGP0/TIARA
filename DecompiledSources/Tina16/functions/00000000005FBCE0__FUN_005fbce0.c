/* Ghidra address: 005fbce0 */
/* Ghidra symbol: FUN_005fbce0 */


void FUN_005fbce0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x39) != '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

