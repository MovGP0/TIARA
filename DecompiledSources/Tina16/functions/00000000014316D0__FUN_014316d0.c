/* Ghidra address: 014316d0 */
/* Ghidra symbol: FUN_014316d0 */


void FUN_014316d0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*PTR_DAT_020039a8 != '\0') {
    uVar1 = FUN_013ec890(&PTR_FUN_013eb788,
                         CONCAT71((int7)((ulonglong)PTR_DAT_020039a8 >> 8),1) & 0xffffffff,
                         *(undefined8 *)PTR_DAT_02004030,*(undefined8 *)(param_1 + 0x10),param_2);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    lVar2 = FUN_019a4600();
    if ((*(int *)(*(longlong *)(lVar2 + 0x478) + 0x10) < 1) &&
       (lVar2 = FUN_019a4600(), *(int *)(*(longlong *)(lVar2 + 0x468) + 0x10) < 1)) {
      FUN_013ecad0(*(undefined8 *)(param_1 + 0x30),0,0);
      return;
    }
    FUN_013ecad0(*(undefined8 *)(param_1 + 0x30),1,0);
  }
  return;
}

