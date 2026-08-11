/* Ghidra address: 013a4b40 */
/* Ghidra symbol: FUN_013a4b40 */


uint FUN_013a4b40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = *(int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x488) +
                    0x4f0) + 0x10);
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x488) + 0x4f0
               );
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      if (param_2 ==
          *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8) + 0x18))
      {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0xffffffff;
}

