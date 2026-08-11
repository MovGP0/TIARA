/* Ghidra address: 00452cd0 */
/* Ghidra symbol: FUN_00452cd0 */


int FUN_00452cd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      iVar1 = FUN_0043e420(*(undefined8 *)
                            (*(longlong *)(param_1 + 8) + 0x14 + (longlong)iVar2 * 0x1c),param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return -1;
}

