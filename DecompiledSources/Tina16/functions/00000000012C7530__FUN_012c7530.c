/* Ghidra address: 012c7530 */
/* Ghidra symbol: FUN_012c7530 */


longlong FUN_012c7530(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  longlong local_res18 [2];
  longlong local_10;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (param_2 == 0) {
    local_10 = FUN_006df4b0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x330) + 0x748) + 0x550));
  }
  else {
    local_10 = FUN_006dd580(param_2);
  }
  while( true ) {
    if (local_10 == 0) {
      bVar3 = false;
    }
    else {
      lVar1 = *(longlong *)(local_10 + 0x10);
      if (lVar1 == local_res18[0]) {
        bVar3 = true;
      }
      else if ((lVar1 == 0) || (local_res18[0] == 0)) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_0043e420(lVar1,local_res18[0]);
        bVar3 = iVar2 == 0;
      }
      bVar3 = !bVar3;
    }
    if (!bVar3) break;
    local_10 = FUN_006dd3e0(local_10);
  }
  FUN_00414480(local_res18);
  return local_10;
}

