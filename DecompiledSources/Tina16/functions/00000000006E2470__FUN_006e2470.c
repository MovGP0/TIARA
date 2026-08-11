/* Ghidra address: 006e2470 */
/* Ghidra symbol: FUN_006e2470 */


undefined8 FUN_006e2470(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0065b870(param_1);
    uVar2 = FUN_00611fd0(uVar2);
    uVar2 = FUN_006df650(*(undefined8 *)(param_1 + 0x550),uVar2);
  }
  return uVar2;
}

