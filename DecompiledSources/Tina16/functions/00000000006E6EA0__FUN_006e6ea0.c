/* Ghidra address: 006e6ea0 */
/* Ghidra symbol: FUN_006e6ea0 */


void FUN_006e6ea0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_006e6d80(param_1,param_2);
  cVar2 = FUN_0065be20(*(undefined8 *)(param_1 + 8));
  if (cVar2 != '\0') {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
    FUN_004701b0(uVar1,0x43a,*(char *)(param_1 + 0x10) == '\0',param_2,1);
  }
  return;
}

