/* Ghidra address: 00d3a8e0 */
/* Ghidra symbol: FUN_00d3a8e0 */


longlong FUN_00d3a8e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar4 = 0;
  iVar2 = FUN_004d3e30();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_004d3de0(param_2,iVar6);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_007d94d0);
      if (cVar1 == '\0') {
        uVar3 = FUN_004d3de0(param_2,iVar6);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_007ec210);
        if (cVar1 != '\0') {
          uVar3 = FUN_004d3de0(param_2,iVar6);
          lVar4 = FUN_00d3a8e0(param_1,uVar3);
          goto joined_r0x00d3a9c0;
        }
      }
      else {
        lVar4 = FUN_004d3de0(param_2,iVar6);
        lVar5 = FUN_007de060(lVar4);
        if (lVar5 == *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18)) {
          iVar2 = FUN_00d3a7e0(param_1,lVar4);
          if (*(int *)(*(longlong *)(param_1 + 0x60) + 8) < iVar2) {
            return lVar4;
          }
          return 0;
        }
        lVar4 = FUN_00d3a840(param_1,lVar4);
joined_r0x00d3a9c0:
        if (lVar4 != 0) {
          return lVar4;
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return lVar4;
}

