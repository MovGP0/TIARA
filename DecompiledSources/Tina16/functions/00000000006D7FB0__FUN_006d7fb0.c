/* Ghidra address: 006d7fb0 */
/* Ghidra symbol: FUN_006d7fb0 */


longlong FUN_006d7fb0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_3c;
  undefined8 local_30;
  
  local_3c = *param_2;
  lVar4 = 0;
  if (*(char *)(param_1 + 0x393) != '\0') {
    local_30 = local_3c;
    uVar2 = FUN_0065b870(param_1);
    iVar1 = FUN_004701a0(uVar2,0x130d,0,&local_3c);
    if (-1 < iVar1) {
      lVar3 = 0;
      if (-1 < iVar1) {
        iVar1 = iVar1 + 1;
        do {
          lVar3 = FUN_006d73d0(param_1,lVar3,1,1);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (lVar3 != 0) {
        iVar1 = FUN_00654c00(lVar3);
        lVar4 = 0;
        if (0 < iVar1) {
          lVar4 = FUN_00654bc0(lVar3,0);
          if (*(longlong *)(lVar4 + 0x108) != param_1) {
            lVar4 = 0;
          }
        }
      }
    }
  }
  return lVar4;
}

