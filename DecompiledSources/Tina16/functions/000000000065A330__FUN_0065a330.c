/* Ghidra address: 0065a330 */
/* Ghidra symbol: FUN_0065a330 */


void FUN_0065a330(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_006512e0(param_1);
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_005fc8c0(*(undefined8 *)(param_1 + 0xb8));
    FUN_0064fca0(param_1,0x30,uVar1,0);
  }
  FUN_00654ce0(param_1,0xb008);
  return;
}

