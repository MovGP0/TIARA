/* Ghidra address: 01656ea0 */
/* Ghidra symbol: FUN_01656ea0 */


undefined8 FUN_01656ea0(double param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [32];
  
  if (param_2 == '\0') {
    cVar1 = FUN_01656e70(auStack_28,param_1 - 1.0);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    cVar1 = FUN_01656e70(auStack_28,param_1 - DAT_01f7d5f0);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

