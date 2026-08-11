/* Ghidra address: 0162be90 */
/* Ghidra symbol: FUN_0162be90 */


longlong FUN_0162be90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RSI;
  undefined4 local_30;
  
  if (*(int *)(param_2 + 0x10) == 1) {
    uVar2 = FUN_004aeac0(param_2,0);
    unaff_RSI = FUN_0161c6d0(uVar2,param_3,param_4);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x10) + -1;
    local_30 = iVar1;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_004aeac0(param_2,local_30);
        uVar3 = FUN_004aeac0(param_2,local_30 + -1);
        if (local_30 == iVar1) {
          lVar4 = FUN_0161c6d0(uVar3,param_3,param_4);
          lVar5 = FUN_0161c6d0(uVar2,param_3,param_4);
        }
        else {
          lVar4 = FUN_0161c6d0(uVar3,param_3,param_4);
          lVar5 = unaff_RSI;
        }
        unaff_RSI = FUN_0161dde0(lVar4,lVar5);
        if (lVar4 == 0) {
          FUN_0162aa50(param_1,unaff_RSI,uVar3,0);
        }
        if (lVar5 == 0) {
          FUN_0162aa50(param_1,unaff_RSI,uVar2,1);
        }
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
  }
  return unaff_RSI;
}

