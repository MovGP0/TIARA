/* Ghidra address: 008042b0 */
/* Ghidra symbol: FUN_008042b0 */


void FUN_008042b0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  
  if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
    return;
  }
  if ((*(short *)(param_2 + 8) == 0) || (cVar2 = FUN_008005a0(param_1), cVar2 == '\0')) {
    if (*(longlong *)(DAT_02012668 + 0xa8) == 0) {
      return;
    }
    cVar2 = FUN_008005a0(*(longlong *)(DAT_02012668 + 0xa8));
    if (cVar2 == '\0') {
      return;
    }
    uVar3 = FUN_008003b0(*(undefined8 *)(DAT_02012668 + 0xa8));
    *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  }
  if (((uint)*(ushort *)(param_2 + 8) != *(uint *)(param_1 + 0x2cc)) &&
     (cVar2 = FUN_008005a0(param_1), cVar2 != '\0')) {
    if (*(longlong *)(param_1 + 0x580) != 0) {
      (**(code **)(param_1 + 0x580))
                (*(undefined8 *)(param_1 + 0x588),param_1,*(undefined4 *)(param_1 + 0x2cc),
                 *(undefined2 *)(param_2 + 8));
    }
    uVar3 = *(undefined4 *)(param_1 + 0x2cc);
    FUN_007fd000(param_1,*(undefined2 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    uVar1 = *(ushort *)(param_2 + 8);
    *(uint *)(param_1 + 0x2cc) = (uint)uVar1;
    if (*(longlong *)(param_1 + 0x570) != 0) {
      (**(code **)(param_1 + 0x570))(*(undefined8 *)(param_1 + 0x578),param_1,uVar3,(uint)uVar1);
    }
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}

