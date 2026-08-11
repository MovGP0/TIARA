/* Ghidra address: 00452370 */
/* Ghidra symbol: FUN_00452370 */


undefined1 FUN_00452370(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_1 == 0) {
LAB_004523e0:
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_0041b800(&local_10);
    cVar1 = FUN_00411110(param_1,&DAT_00452418,uVar3);
    if (cVar1 == '\0') {
LAB_004523cb:
      cVar1 = FUN_00411110(param_1,param_2,param_3);
      if (cVar1 == '\0') goto LAB_004523e0;
    }
    else {
      cVar1 = FUN_00452340(local_10,param_2,param_3);
      if (cVar1 == '\0') goto LAB_004523cb;
    }
    uVar2 = 1;
  }
  FUN_0041b800(&local_10);
  return uVar2;
}

