/* Ghidra address: 01b7fa60 */
/* Ghidra symbol: FUN_01b7fa60 */


undefined1 FUN_01b7fa60(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong local_res8;
  longlong local_res10;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = 0;
  local_28 = 0;
  local_18 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610();
  local_29 = 0;
  iVar1 = 1;
  while( true ) {
    iVar2 = 0;
    if (local_res10 != 0) {
      iVar2 = *(int *)(local_res10 + -4);
    }
    if ((iVar2 < iVar1) || (*(short *)(local_res10 + -2 + (longlong)iVar1 * 2) != 0x20)) break;
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0;
  if (local_res10 != 0) {
    iVar2 = *(int *)(local_res10 + -4);
  }
  if ((iVar1 <= iVar2) && (*(short *)(local_res10 + -2 + (longlong)iVar1 * 2) == 0x21)) {
    do {
      iVar1 = iVar1 + 1;
      iVar2 = 0;
      if (local_res10 != 0) {
        iVar2 = *(int *)(local_res10 + -4);
      }
    } while ((iVar1 <= iVar2) && (*(short *)(local_res10 + -2 + (longlong)iVar1 * 2) == 0x20));
    iVar2 = 0;
    if (local_res8 != 0) {
      iVar2 = *(int *)(local_res8 + -4);
    }
    iVar3 = 0;
    if (local_res10 != 0) {
      iVar3 = *(int *)(local_res10 + -4);
    }
    if (iVar1 + iVar2 <= iVar3) {
      iVar2 = 0;
      if (local_res8 != 0) {
        iVar2 = *(int *)(local_res8 + -4);
      }
      FUN_00416dc0(&local_18,local_res10,iVar1,iVar2 + 1);
      FUN_0043e1a0(&local_10,local_18);
      FUN_0043e1a0(&local_28,local_res8);
      FUN_00416ba0(&local_20,&DAT_01b7fc2c,local_28);
      iVar1 = FUN_00416db0(local_10,local_20);
      if (iVar1 == 0) {
        local_29 = 1;
      }
    }
  }
  FUN_00414560(&local_28,4);
  FUN_00414560(&local_res8,2);
  return local_29;
}

