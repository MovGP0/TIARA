/* Ghidra address: 015fe700 */
/* Ghidra symbol: FUN_015fe700 */


undefined1 FUN_015fe700(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 local_res8 [4];
  undefined1 local_29;
  undefined8 local_20;
  
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_29 = 0;
  cVar2 = FUN_01d3f210(param_2);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_2 + 0x1a8);
    cVar2 = FUN_01d3f250(param_2);
    if (cVar2 == '\0') {
      lVar5 = FUN_015f3320(local_res8[0],param_2);
      *(undefined1 *)(lVar1 + 0x180) = 1;
      if (lVar5 != 0) {
        FUN_00414ad0(lVar1 + 0x188,*(undefined8 *)(lVar5 + 0x18));
      }
    }
    FUN_00414b50(&local_20,*(undefined8 *)(lVar1 + 0x188));
    iVar3 = FUN_015fd3f0(local_20);
    if ((iVar3 == 0) && (cVar2 = FUN_01773f40(lVar1,0x800), cVar2 != '\0')) {
      uVar4 = FUN_015fe680(lVar1,2);
      iVar3 = FUN_015fd5a0(uVar4);
    }
    cVar2 = FUN_015fd3b0(iVar3);
    if (cVar2 != '\0') {
      if ((*(int *)(lVar1 + 0x100) == 0) || (*(int *)(lVar1 + 0x100) == 2)) {
        local_29 = 1;
      }
      else {
        local_29 = 0;
      }
    }
  }
  FUN_00414480(&local_20);
  FUN_00414480(local_res8);
  return local_29;
}

