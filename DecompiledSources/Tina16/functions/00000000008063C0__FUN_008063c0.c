/* Ghidra address: 008063c0 */
/* Ghidra symbol: FUN_008063c0 */


void FUN_008063c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_38 [40];
  
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && (*(char *)(param_1 + 0x391) != '\0')) {
    cVar1 = FUN_008062c0(auStack_38,*(undefined8 *)(param_1 + 0x4c0));
    if ((cVar1 == '\0') &&
       ((cVar1 = FUN_008062c0(auStack_38,param_1), cVar1 == '\0' &&
        (cVar1 = FUN_00806300(auStack_38,param_1), cVar1 == '\0')))) {
      return;
    }
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

