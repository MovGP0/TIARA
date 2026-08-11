/* Ghidra address: 015fa560 */
/* Ghidra symbol: FUN_015fa560 */


void FUN_015fa560(void)

{
  int iVar1;
  
  do {
    if ((*(char *)(*(longlong *)PTR_DAT_02001d08 + 0x708) == '\0') ||
       (iVar1 = (**(code **)(**(longlong **)PTR_DAT_020014c0 + 0x28))
                          (*(longlong **)PTR_DAT_020014c0), iVar1 < 1)) {
      if (*(char *)(*(longlong *)PTR_DAT_02001d08 + 0x709) == '\0') {
        return;
      }
      iVar1 = (**(code **)(**(longlong **)PTR_DAT_02004df0 + 0x28))(*(longlong **)PTR_DAT_02004df0);
      if (iVar1 < 1) {
        return;
      }
    }
    FUN_017fb9f0();
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  } while( true );
}

