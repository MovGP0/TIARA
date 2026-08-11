/* Ghidra address: 01819400 */
/* Ghidra symbol: FUN_01819400 */


void FUN_01819400(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_0065f000(param_1,param_2);
  if (((*(ushort *)(param_1 + 0x34) & 8) == 0) && (param_2 != 0)) {
    cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0x78),&PTR_FUN_00733e50);
    if (cVar1 != '\0') {
      uVar2 = FUN_018192c0(*(undefined1 *)(*(longlong *)(param_2 + 0x78) + 0xad));
      FUN_0064c650(param_1,uVar2);
    }
  }
  return;
}

