/* Ghidra address: 00abd270 */
/* Ghidra symbol: FUN_00abd270 */


undefined1 FUN_00abd270(longlong param_1,longlong param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_29;
  
  local_29 = 0;
  if ((*(int *)(param_1 + 0x6c) != 0) &&
     (param_3 <= *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c))) {
    lVar4 = 0;
    param_3 = param_3 - *(int *)(param_1 + 0x68);
    *param_5 = *(int *)(param_1 + 0x7c);
    lVar2 = *(longlong *)(param_1 + 0xf0);
    for (iVar3 = 0; iVar3 < *(int *)(lVar2 + 0x10); iVar3 = iVar3 + 1) {
      lVar4 = FUN_00ac5680(*(undefined8 *)(param_1 + 0xf0),iVar3);
      iVar1 = *(int *)(lVar4 + 0x20);
      if (param_3 < iVar1) break;
      *param_5 = *param_5 + *(int *)(lVar4 + 0x18) + *(int *)(lVar4 + 0x10) + *(int *)(lVar4 + 0x14)
      ;
      param_3 = param_3 - iVar1;
    }
    if (iVar3 < *(int *)(lVar2 + 0x10)) {
      if (param_2 == 0) {
        *param_4 = *(int *)(lVar4 + 0x2c);
      }
      else {
        if (0 < *(int *)(lVar4 + 0x38)) {
          uVar5 = FUN_005ffa40(param_2);
          thunk_FUN_04186fad(uVar5,*(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x38));
        }
        iVar3 = FUN_00ab6950(param_1,param_2,*(undefined8 *)(lVar4 + 8),param_3,0);
        *param_4 = *(int *)(lVar4 + 0x2c) + iVar3;
        if (0 < *(int *)(lVar4 + 0x38)) {
          uVar5 = FUN_005ffa40(param_2);
          thunk_FUN_04186fad(uVar5,0,0);
        }
      }
      local_29 = 1;
    }
  }
  return local_29;
}

