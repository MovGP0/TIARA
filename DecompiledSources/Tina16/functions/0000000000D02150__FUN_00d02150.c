/* Ghidra address: 00d02150 */
/* Ghidra symbol: FUN_00d02150 */


void FUN_00d02150(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1d0);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x1ec) != '\0')) {
    uVar2 = FUN_00879070(*(undefined8 *)(param_2 + 0x10),L"HTTPS");
    FUN_00cea100(lVar1,param_2,uVar2,*(undefined8 *)(param_3 + 0x18));
  }
  return;
}

