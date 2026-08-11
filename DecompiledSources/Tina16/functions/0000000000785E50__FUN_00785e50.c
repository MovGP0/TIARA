/* Ghidra address: 00785e50 */
/* Ghidra symbol: FUN_00785e50 */


undefined1 FUN_00785e50(longlong *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  cVar2 = (**(code **)*param_1)(param_1,param_2);
  if (cVar2 != '\0') {
    if ((char)param_1[3] != '\0') {
      if (*(char *)((longlong)param_1 + 0x21) != '\0') {
        return 0;
      }
      iVar1 = *param_2;
      if (iVar1 < 0x86) {
        if (((iVar1 != 0x85) && (iVar1 != 0xf)) && (iVar1 != 0x14)) {
          return 0;
        }
      }
      else if ((6 < iVar1 - 0x132U) && (6 < iVar1 - 0xbd32U)) {
        return 0;
      }
    }
    *(undefined1 *)(param_1 + 4) = 0;
    plVar3 = (longlong *)FUN_00781840();
    cVar2 = (**(code **)(*plVar3 + 0x90))(plVar3);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x38))(param_1,param_2);
    }
    uVar4 = (undefined1)param_1[4];
  }
  return uVar4;
}

