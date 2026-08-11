/* Ghidra address: 005b27f0 */
/* Ghidra symbol: FUN_005b27f0 */


void FUN_005b27f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_004d3060(param_1,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_005afd68);
  if (cVar2 != '\0') {
    FUN_005b2830(param_1,uVar1);
  }
  return;
}

