/* Ghidra address: 006fa3b0 */
/* Ghidra symbol: FUN_006fa3b0 */


void FUN_006fa3b0(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 != *(char *)(param_1 + 0x31a)) {
    *(char *)(param_1 + 0x31a) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x340);
    if (lVar1 != 0) {
      iVar2 = FUN_006fa830(param_1);
      FUN_0064fca0(lVar1,*(undefined4 *)
                          (&DAT_01e023d8 + (ulonglong)(*(char *)(param_1 + 0x33a) == '\x01') * 4),
                   (longlong)iVar2,param_2);
      FUN_006fc900(*(undefined8 *)(param_1 + 0x340));
    }
  }
  return;
}

