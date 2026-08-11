/* Ghidra address: 00d77610 */
/* Ghidra symbol: FUN_00d77610 */


longlong FUN_00d77610(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong local_40;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_40 = 0;
  iVar2 = FUN_0043e420(*(undefined8 *)(param_1 + 0x10),param_2);
  lVar1 = param_1;
  if ((iVar2 != 0) && (iVar2 = FUN_00d77c90(param_1), lVar1 = local_40, iVar2 != 0)) {
    iVar2 = FUN_004170c0(&LAB_00d77744,param_2,1);
    if (0 < iVar2) {
      FUN_00416dc0(local_30,param_2,1,iVar2 + -1);
    }
    iVar3 = FUN_00d77c90();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        if (iVar2 < 1) {
          uVar4 = FUN_00d77ca0(param_1,iVar5);
          local_40 = FUN_00d77610(uVar4,param_2);
        }
        else {
          uVar4 = FUN_00d77ca0(param_1,iVar5);
          local_40 = FUN_00d77610(uVar4,local_30[0]);
        }
        lVar1 = local_40;
        if (local_40 != 0) break;
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  local_40 = lVar1;
  FUN_00414480(local_30);
  return local_40;
}

