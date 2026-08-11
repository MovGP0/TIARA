/* Ghidra address: 00808880 */
/* Ghidra symbol: FUN_00808880 */


undefined8 FUN_00808880(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  if (param_2 != -1) {
    for (puVar2 = *(undefined8 **)(param_1 + 0x150);
        (puVar2 != (undefined8 *)0x0 && (*(int *)(puVar2 + 1) != param_2));
        puVar2 = (undefined8 *)*puVar2) {
    }
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 0x158);
    }
    else {
      uVar1 = puVar2[2];
    }
  }
  return uVar1;
}

