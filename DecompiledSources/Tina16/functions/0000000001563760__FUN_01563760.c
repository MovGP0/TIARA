/* Ghidra address: 01563760 */
/* Ghidra symbol: FUN_01563760 */


undefined8 FUN_01563760(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  
  if (*(longlong *)(param_1 + 0x9c8) == 0) {
    return 0;
  }
  cVar1 = FUN_00e14e00(*(longlong *)(param_1 + 0x9c8),param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_00e14cc0(*(undefined8 *)(param_1 + 0x9c8),param_2,2,local_38,local_2c,0);
    if (((cVar1 == '\0') ||
        (cVar1 = FUN_00e14d70(*(undefined8 *)(param_1 + 0x9c8),param_2,1), cVar1 != '\0')) &&
       (cVar1 = FUN_00e14d70(*(undefined8 *)(param_1 + 0x9c8),param_2,2), cVar1 == '\0')) {
      return 1;
    }
    return 0;
  }
  return 0;
}

