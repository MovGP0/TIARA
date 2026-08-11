/* Ghidra address: 010d8b90 */
/* Ghidra symbol: FUN_010d8b90 */


void FUN_010d8b90(longlong param_1)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x9be) == '\0') && (*(char *)(param_1 + 0x9b8) != '\0')) {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x900),uVar1);
  if ((*(char *)(*(longlong *)(param_1 + 0x900) + 0xa9) == '\0') &&
     (*(char *)(param_1 + 0x9b8) != '\0')) {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x900) >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = FUN_0064dbe0(*(undefined8 *)(param_1 + 0x938),uVar1);
  if ((*(char *)(param_1 + 0x9be) == '\x01') && (*(char *)(param_1 + 0x9b9) != '\0')) {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x908),uVar1);
  if ((*(char *)(*(longlong *)(param_1 + 0x908) + 0xa9) == '\0') &&
     (*(char *)(param_1 + 0x9b9) != '\0')) {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x908) >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = FUN_0064dbe0(*(undefined8 *)(param_1 + 0x940),uVar1);
  if ((*(char *)(param_1 + 0x9be) == '\x02') && (*(char *)(param_1 + 0x9ba) != '\0')) {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x910),uVar1);
  if ((*(char *)(*(longlong *)(param_1 + 0x910) + 0xa9) == '\0') &&
     (*(char *)(param_1 + 0x9ba) != '\0')) {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x910) >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x948),uVar1);
  return;
}

