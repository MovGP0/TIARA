/* Ghidra address: 00411870 */
/* Ghidra symbol: FUN_00411870 */


undefined8 FUN_00411870(longlong param_1,undefined8 param_2,longlong param_3)

{
  short *psVar1;
  ushort *puVar2;
  short sVar3;
  
  FUN_00414480();
  do {
    psVar1 = *(short **)(param_1 + -0x98);
    if (psVar1 == (short *)0x0) {
      sVar3 = 0;
      puVar2 = (ushort *)0x0;
    }
    else {
      sVar3 = *psVar1;
      puVar2 = (ushort *)(psVar1 + 1);
    }
    if (sVar3 != 0) {
      for (; sVar3 != 0; sVar3 = sVar3 + -1) {
        if (*(longlong *)(puVar2 + 1) == param_3) {
          FUN_00411800(param_2,puVar2 + 5);
          return param_2;
        }
        puVar2 = (ushort *)((longlong)puVar2 + (ulonglong)*puVar2);
      }
    }
    param_1 = FUN_00410ca0();
  } while (param_1 != 0);
  return param_2;
}

