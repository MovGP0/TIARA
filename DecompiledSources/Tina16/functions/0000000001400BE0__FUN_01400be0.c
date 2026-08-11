/* Ghidra address: 01400be0 */
/* Ghidra symbol: FUN_01400be0 */


undefined8 FUN_01400be0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(*(longlong *)(param_1 + 0xe0) + 0x88a) == '\0') {
LAB_01400c0f:
    if (*(char *)(*(longlong *)(param_1 + 0xe0) + 0x88a) == '\0') {
      cVar1 = FUN_01400ae0(param_1,param_2);
      if (cVar1 != '\0') goto LAB_01400c32;
    }
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_01400b40(param_1,param_2);
    if (cVar1 == '\0') goto LAB_01400c0f;
LAB_01400c32:
    uVar2 = 1;
  }
  return uVar2;
}

