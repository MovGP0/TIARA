/* Ghidra address: 016dc0e0 */
/* Ghidra symbol: FUN_016dc0e0 */


uint FUN_016dc0e0(undefined8 param_1,int param_2)

{
  int iVar1;
  double dVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  
  iVar1 = 1;
  do {
    local_1c = (uint)(iVar1 + param_2) >> 1;
    dVar2 = (double)FUN_016dc0c0(auStack_48);
    if (dVar2 < 0.0) {
      param_2 = local_1c - 1;
    }
    else {
      iVar1 = local_1c + 1;
    }
  } while (iVar1 <= param_2);
  return (uint)(iVar1 + param_2) >> 1;
}

