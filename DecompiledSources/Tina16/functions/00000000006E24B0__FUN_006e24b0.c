/* Ghidra address: 006e24b0 */
/* Ghidra symbol: FUN_006e24b0 */


void FUN_006e24b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(param_1);
  if ((cVar2 != '\0') && (param_2 != 0)) {
    uVar1 = FUN_0065b870(param_1);
    FUN_006120d0(uVar1,*(undefined8 *)(param_2 + 0x20));
  }
  return;
}

