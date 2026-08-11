/* Ghidra address: 00cd19a0 */
/* Ghidra symbol: FUN_00cd19a0 */


int FUN_00cd19a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  while( true ) {
    uVar3 = 0;
    if (*param_2 != 0) {
      uVar3 = *(ulonglong *)(*param_2 + -8);
    }
    iVar1 = (**(code **)PTR_DAT_020021d8)
                      (*(undefined8 *)(param_1 + 0x18),*param_2,uVar3 & 0xffffffff);
    if (0 < iVar1) break;
    iVar2 = FUN_00cd1040(param_1,iVar1);
    if ((iVar2 != 2) && (iVar2 != 3)) {
      if (iVar2 == 6) {
        iVar1 = 0;
      }
      return iVar1;
    }
  }
  return iVar1;
}

