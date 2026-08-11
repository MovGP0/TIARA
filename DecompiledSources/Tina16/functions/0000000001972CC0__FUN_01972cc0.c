/* Ghidra address: 01972cc0 */
/* Ghidra symbol: FUN_01972cc0 */


undefined8 FUN_01972cc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_01977c80(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_01977180(param_1,param_2,param_3,0);
  }
  else {
    lVar2 = FUN_01980e60(&PTR_FUN_0193f148,1,param_1,param_2,param_3);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + 0x10;
    }
    FUN_01980800(*(undefined8 *)(param_1 + 0x2b8),lVar2);
    uVar3 = 0;
  }
  return uVar3;
}

