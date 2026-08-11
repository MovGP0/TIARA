/* Ghidra address: 00b89cd0 */
/* Ghidra symbol: FUN_00b89cd0 */


undefined8 FUN_00b89cd0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong local_res18 [2];
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar2 = 0;
  FUN_00414ad0(param_2,&LAB_00b89e04);
  while( true ) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
    if (iVar2 < iVar1) {
      FUN_004b5390(*(undefined8 *)(param_1 + 0x10),local_20,iVar2);
      if (local_20[0] == local_res18[0]) {
        bVar3 = true;
      }
      else if ((local_20[0] == 0) || (local_res18[0] == 0)) {
        bVar3 = false;
      }
      else {
        iVar1 = FUN_0043e420(local_20[0],local_res18[0]);
        bVar3 = iVar1 == 0;
      }
      bVar3 = !bVar3;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) break;
    iVar2 = iVar2 + 1;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  if (iVar2 < iVar1) {
    FUN_004b3cf0(*(undefined8 *)(param_1 + 0x10),param_2,iVar2);
  }
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return param_2;
}

