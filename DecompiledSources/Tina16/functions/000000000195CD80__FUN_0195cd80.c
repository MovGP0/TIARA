/* Ghidra address: 0195cd80 */
/* Ghidra symbol: FUN_0195cd80 */


void FUN_0195cd80(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_0195ce10(param_1);
  if (cVar1 != (char)param_2) {
    FUN_00410f20(param_1[0x42]);
    lVar2 = FUN_0194e140(param_2);
    param_1[0x42] = lVar2;
    cVar1 = FUN_01953ba0(param_1);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*param_1 + 0x118))(param_1);
      if (lVar2 != 0) {
        lVar2 = (**(code **)(*param_1 + 0x118))(param_1);
        if (*(longlong *)(lVar2 + 0x178) != 0) {
          lVar2 = (**(code **)(*param_1 + 0x118))(param_1);
          (**(code **)(**(longlong **)(lVar2 + 0x178) + 0x3c8))(*(longlong **)(lVar2 + 0x178));
        }
      }
    }
  }
  return;
}

