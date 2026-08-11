/* Ghidra address: 006e6f00 */
/* Ghidra symbol: FUN_006e6f00 */


void FUN_006e6f00(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar1 = *(char *)(param_1 + 0x10);
  cVar3 = FUN_0065be20(*(undefined8 *)(param_1 + 8));
  if (cVar3 != '\0') {
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
    FUN_004701a0(uVar2,0x444,cVar1 == '\0',param_2);
  }
  return;
}

