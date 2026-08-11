/* Ghidra address: 01a5e850 */
/* Ghidra symbol: FUN_01a5e850 */


undefined1
FUN_01a5e850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_41 = 0;
  FUN_01a5e7d0(param_1,&local_10,param_2,param_4,param_5);
  if (local_10 != 0) {
    FUN_00441640(&local_20,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    FUN_00409da0(local_30,0);
    FUN_00441640(&local_18,local_30[0]);
    FUN_00416ba0(&local_38,local_20,local_10);
    cVar1 = FUN_00440a20(local_38,1);
    if (cVar1 == '\0') {
      FUN_00416ba0(&local_40,local_18,local_10);
      cVar1 = FUN_00440a20(local_40,1);
      if (cVar1 == '\0') {
        iVar2 = FUN_004170c0(L"tdl://",local_10,1);
        if (iVar2 < 1) {
          uVar3 = FUN_00416740(local_10);
          thunk_FUN_0419adcc(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),L"open",uVar3,0,
                             0,5);
        }
        else {
          FUN_01a62740(param_1,local_10,param_3);
        }
      }
      else {
        FUN_00416ba0(&local_10,local_18,local_10);
        uVar3 = FUN_00416740(local_10);
        thunk_FUN_0419adcc(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),L"open",uVar3,0,0,
                           5);
      }
    }
    else {
      FUN_00416ba0(&local_10,local_20,local_10);
      uVar3 = FUN_00416740(local_10);
      thunk_FUN_0419adcc(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),L"open",uVar3,0,0,5)
      ;
    }
    local_41 = 1;
  }
  FUN_00414560(&local_40,3);
  FUN_00414560(&local_20,3);
  return local_41;
}

