/* Ghidra address: 01950a30 */
/* Ghidra symbol: FUN_01950a30 */


void FUN_01950a30(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  code *local_38;
  undefined8 local_30;
  
  local_38 = (code *)*param_2;
  local_30 = param_2[1];
  lVar2 = (**(code **)(*param_1 + 0x118))(param_1);
  if (lVar2 == 0) {
    lVar3 = FUN_01950600(param_1);
    if (lVar3 != 0) {
      cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01934910);
      if (cVar1 != '\0') {
        lVar2 = *(longlong *)(lVar3 + 0x218);
      }
    }
  }
  if ((lVar2 == 0) || (*(char *)(*(longlong *)(lVar2 + 0x1a8) + 0x20) != '\0')) {
    FUN_0186a990(&local_38);
  }
  else {
    (*local_38)(local_30);
  }
  return;
}

