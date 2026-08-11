/* Ghidra address: 010f2ba0 */
/* Ghidra symbol: FUN_010f2ba0 */


void FUN_010f2ba0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (DAT_0202fd68 == 0) {
    DAT_0202fd68 = FUN_007fc180(&PTR_FUN_010f1758,1,*(undefined8 *)PTR_DAT_02004030);
  }
  *(undefined8 *)(DAT_0202fd68 + 0x6e0) = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10);
  *(longlong *)(DAT_0202fd68 + 0x6e8) = param_1;
  if (*(longlong *)(DAT_0202fd68 + 0x6e0) != 0) {
    if ((*(int *)(*(longlong *)(DAT_0202fd68 + 0x6e0) + 0x10) < 1) ||
       (*(char *)(param_1 + 8) != '\0')) {
      *(undefined1 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a8) = 0;
      plVar1 = (longlong *)FUN_0084e370(*(undefined8 *)(DAT_0202fd68 + 0x6d8),0);
      (**(code **)(*plVar1 + 0x90))(plVar1);
      plVar1 = (longlong *)FUN_0084e370(*(undefined8 *)(DAT_0202fd68 + 0x6d8),1);
      (**(code **)(*plVar1 + 0x90))(plVar1);
      (**(code **)(**(longlong **)(DAT_0202fd68 + 0x6d0) + 0x278))
                (*(longlong **)(DAT_0202fd68 + 0x6d0));
    }
    else {
      FUN_008059a0(DAT_0202fd68);
      FUN_010f27c0(DAT_0202fd68,*(undefined8 *)PTR_DAT_02004030);
    }
  }
  return;
}

