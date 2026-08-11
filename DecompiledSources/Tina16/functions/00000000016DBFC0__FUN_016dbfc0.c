/* Ghidra address: 016dbfc0 */
/* Ghidra symbol: FUN_016dbfc0 */


undefined8 FUN_016dbfc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_017e3230(param_2,param_1);
  cVar1 = FUN_017e28e0(param_2);
  if (cVar1 != '\0') {
    FUN_01b05000(L"User def. signal error.",0);
  }
  return uVar2;
}

