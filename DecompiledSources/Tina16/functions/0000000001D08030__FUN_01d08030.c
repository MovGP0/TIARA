/* Ghidra address: 01d08030 */
/* Ghidra symbol: FUN_01d08030 */


ulonglong FUN_01d08030(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 local_2c [12];
  
  uVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  if ((param_1 == *(longlong *)(PTR_DAT_02004010 + 0x431)) ||
     (cVar1 = FUN_01d07fe0(param_1,*(undefined8 *)(param_2 + 0x470),local_2c), cVar1 != '\0')) {
    uVar2 = 2;
  }
  if ((param_1 == *(longlong *)(PTR_DAT_02004010 + 0x57f)) ||
     (cVar1 = FUN_01d07fe0(param_1,*(undefined8 *)(param_2 + 0x468),local_2c), cVar1 != '\0')) {
    uVar2 = uVar2 | 4;
  }
  if ((param_1 != *(longlong *)(PTR_DAT_02004010 + 0x56e)) &&
     (cVar1 = FUN_01d07fe0(param_1,*(undefined8 *)(param_2 + 0x478),local_2c), cVar1 == '\0')) {
    return uVar2;
  }
  return uVar2 | 8;
}

