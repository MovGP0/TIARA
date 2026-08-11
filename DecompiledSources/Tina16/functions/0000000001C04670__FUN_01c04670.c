/* Ghidra address: 01c04670 */
/* Ghidra symbol: FUN_01c04670 */


undefined8 FUN_01c04670(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = *param_2;
  if (iVar1 < 0x204) {
    if (iVar1 == 0x7b) {
LAB_01c046c2:
      if (param_1[100] == 0) {
        return 0;
      }
      if (*(longlong *)(param_1[100] + 0x38) == 0) {
        return 0;
      }
      return 1;
    }
    if (2 < iVar1 - 0x200U) {
      if (iVar1 != 0x203) {
        return 0;
      }
      if ((param_1[100] != 0) && (lVar2 = FUN_01bfd980(param_1[100]), lVar2 != 0)) {
        uVar3 = FUN_01bfd980(param_1[100]);
        (**(code **)(*DAT_01fe2178 + 0x20))(DAT_01fe2178,uVar3);
      }
      return 1;
    }
  }
  else {
    if (iVar1 - 0x204U < 2) goto LAB_01c046c2;
    if ((1 < iVar1 - 0xb013U) && (iVar1 != 0xb02f)) {
      return 0;
    }
  }
  (**(code **)(*param_1 + -0x40))(param_1);
  return 1;
}

