/* Ghidra address: 019fea80 */
/* Ghidra symbol: FUN_019fea80 */


undefined1 FUN_019fea80(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if ((param_2 != (longlong *)0x0) && (cVar1 = FUN_0198a580(param_2), cVar1 == '\x04')) {
    lVar4 = FUN_017ff620(param_2);
    lVar5 = FUN_017ff620(*(undefined8 *)(param_1 + 0xa8));
    if (lVar4 == lVar5) {
      (**(code **)(*param_2 + 0x288))(param_2,&local_28);
      FUN_019fe910(param_1,local_20,local_28);
      lVar4 = *(longlong *)(param_1 + 0xb0);
      if (local_20[0] == lVar4) {
        bVar6 = true;
      }
      else if ((local_20[0] == 0) || (lVar4 == 0)) {
        bVar6 = false;
      }
      else {
        iVar3 = FUN_0043e420(local_20[0],lVar4);
        bVar6 = iVar3 == 0;
      }
      goto LAB_019feb43;
    }
  }
  bVar6 = false;
LAB_019feb43:
  if ((bVar6) &&
     ((cVar1 = FUN_019fe9c0(param_1,param_2), cVar1 != '\0' ||
      (cVar1 = FUN_019fea20(param_1,param_2), cVar1 != '\0')))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  FUN_00414560(&local_28,2);
  return uVar2;
}

