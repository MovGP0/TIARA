/* Ghidra address: 004c81b0 */
/* Ghidra symbol: FUN_004c81b0 */


void FUN_004c81b0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong local_18;
  int local_c;
  
  local_18 = 0;
  uVar2 = FUN_0045ae90();
  FUN_00459ca0(uVar2,&local_18,param_2);
  lVar3 = 0;
  if (local_18 != 0) {
    lVar3 = *(longlong *)(local_18 + -8);
  }
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  if (lVar3 < iVar4 * 2) {
    iVar4 = 0;
    if (local_18 != 0) {
      iVar4 = (int)*(undefined8 *)(local_18 + -8);
    }
    local_c = 0;
    bVar1 = false;
    if (-1 < iVar4 + -1) {
      do {
        if (0x7f < *(byte *)(local_18 + local_c)) {
          bVar1 = true;
          break;
        }
        local_c = local_c + 1;
        iVar4 = iVar4 + -1;
        bVar1 = false;
      } while (iVar4 != 0);
    }
    local_c = 0;
    if (local_18 != 0) {
      local_c = (int)*(undefined8 *)(local_18 + -8);
    }
    if (bVar1) {
      FUN_004c8510(param_1,0x14);
      FUN_004c3930(param_1,&local_c,4);
      FUN_004c3c80(param_1,local_18,(longlong)local_c);
    }
    else {
      if (local_c < 0x100) {
        FUN_004c8510(param_1,6);
        FUN_004c3930(param_1,&local_c,1);
      }
      else {
        FUN_004c8510(param_1,0xc);
        FUN_004c3930(param_1,&local_c,4);
      }
      FUN_004c3c80(param_1,local_18,(longlong)local_c);
    }
  }
  else {
    uVar2 = FUN_0045adf0();
    FUN_00459ca0(uVar2,&local_18,param_2);
    FUN_004c8510(param_1,0x12);
    lVar3 = 0;
    if (local_18 != 0) {
      lVar3 = *(longlong *)(local_18 + -8);
    }
    local_c = (int)(lVar3 / 2);
    FUN_004c3930(param_1,&local_c,4);
    uVar2 = 0;
    if (local_18 != 0) {
      uVar2 = *(undefined8 *)(local_18 + -8);
    }
    FUN_004c3c80(param_1,local_18,uVar2);
  }
  FUN_00419430(&local_18,&DAT_00406578);
  return;
}

