/* Ghidra address: 019512f0 */
/* Ghidra symbol: FUN_019512f0 */


void FUN_019512f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0xb8) = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x80) + 0x20))
                         (*(longlong **)(param_1 + 0x80),iVar3);
      if ((char)plVar2[0x17] != '\0') {
        (**(code **)(*plVar2 + 0xf0))(plVar2,1);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

