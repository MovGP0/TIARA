/* Ghidra address: 01b81480 */
/* Ghidra symbol: FUN_01b81480 */


undefined1 FUN_01b81480(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_res8 [4];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  wchar_t *local_10;
  
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  local_18 = 0;
  local_20 = 0;
  local_10 = (wchar_t *)0x0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00441a10(&local_10,local_res8[0]);
  if (local_10 == L".sub") {
    bVar3 = true;
  }
  else if (local_10 == (wchar_t *)0x0) {
    bVar3 = false;
  }
  else {
    iVar2 = FUN_0043e420(local_10,L".sub");
    bVar3 = iVar2 == 0;
  }
  if (bVar3) {
    FUN_0043e130(&local_20,local_res8[0]);
    FUN_00441920(&local_18,local_20);
    iVar2 = FUN_004170c0(&DAT_01b81640,local_18,1);
    if (iVar2 != 1) {
      FUN_0043e130(&local_30,local_res8[0]);
      FUN_00441920(&local_28,local_30);
      iVar2 = FUN_004170c0(&PTR_DAT_01b81654,local_28,1);
      if (iVar2 != 1) {
        FUN_0043e130(&local_40,local_res8[0]);
        FUN_00441920(&local_38,local_40);
        iVar2 = FUN_004170c0(&DAT_01b81668,local_38,1);
        if (iVar2 != 1) goto LAB_01b815c0;
      }
    }
    uVar1 = 1;
  }
  else {
LAB_01b815c0:
    uVar1 = 0;
  }
  FUN_00414560(&local_40,7);
  FUN_00414480(local_res8);
  return uVar1;
}

