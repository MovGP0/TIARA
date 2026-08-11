/* Ghidra address: 006516f0 */
/* Ghidra symbol: FUN_006516f0 */


void FUN_006516f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_0064fca0(*(longlong *)(param_1 + 0x78),0xb014,0,param_1);
  }
  if (*(longlong *)(param_2 + 0x10) == 0) {
    if (*(longlong *)(param_1 + 0x238) != 0) {
      (**(code **)(param_1 + 0x238))(*(undefined8 *)(param_1 + 0x240),param_1);
    }
    if ((*(char *)(param_1 + 0xfd) != '\0') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
      lVar1 = FUN_0064fd00(param_1);
      if (lVar1 != 0) {
        uVar2 = FUN_0064fd00(param_1);
        FUN_00666780(uVar2,param_1);
      }
    }
  }
  return;
}

