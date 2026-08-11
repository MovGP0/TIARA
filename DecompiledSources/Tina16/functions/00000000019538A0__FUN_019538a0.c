/* Ghidra address: 019538a0 */
/* Ghidra symbol: FUN_019538a0 */


longlong FUN_019538a0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(*param_1 + 0x118))(param_1);
  if (lVar3 == 0) {
    for (lVar1 = param_1[0x1e]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xf0)) {
      cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01934910);
      if (cVar2 != '\0') {
        return *(longlong *)(lVar1 + 0x218);
      }
    }
  }
  return lVar3;
}

