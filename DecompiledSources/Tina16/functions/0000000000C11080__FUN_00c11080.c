/* Ghidra address: 00c11080 */
/* Ghidra symbol: FUN_00c11080 */


ulonglong FUN_00c11080(longlong param_1,uint param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 local_20;
  uint local_1c;
  
  uVar2 = (ulonglong)param_2;
  cVar1 = FUN_00c10e70(param_1);
  if ((cVar1 != '\0') || (*(char *)(param_1 + 0x498) != '\0')) {
    local_20 = 1;
    local_1c = param_2;
    uVar2 = FUN_00c0ee50(param_1,&local_20);
    uVar2 = uVar2 >> 0x20;
  }
  return uVar2;
}

