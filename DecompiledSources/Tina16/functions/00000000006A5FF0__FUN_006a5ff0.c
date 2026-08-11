/* Ghidra address: 006a5ff0 */
/* Ghidra symbol: FUN_006a5ff0 */


undefined8 FUN_006a5ff0(undefined8 param_1,short param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [40];
  
  iVar2 = thunk_FUN_03e49e8d(param_2);
  if (iVar2 == 0) {
    if (param_2 == DAT_020123f0) {
      cVar1 = FUN_006a5f30(auStack_38);
      if (cVar1 != '\0') goto LAB_006a6024;
    }
    uVar3 = 0;
  }
  else {
LAB_006a6024:
    uVar3 = 1;
  }
  return uVar3;
}

