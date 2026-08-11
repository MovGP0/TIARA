/* Ghidra address: 004a5070 */
/* Ghidra symbol: FUN_004a5070 */


bool FUN_004a5070(undefined8 param_1,undefined *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *local_res10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  longlong local_20;
  bool local_11;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_res10 = param_2;
  if (param_2 == (undefined *)0x0) {
    local_res10 = PTR_IMAGE_DOS_HEADER_0200c280;
  }
  uVar1 = FUN_00416740(param_1);
  lVar2 = thunk_FUN_040ef657(local_res10,uVar1,10);
  local_11 = lVar2 != 0;
  if (local_11) {
    local_48 = 10;
    local_20 = lVar2;
    local_10 = FUN_004baae0(&PTR_FUN_0047d7f8,1,local_res10,param_1);
    uVar1 = FUN_004b8d00(local_10,*param_3);
    *param_3 = uVar1;
    FUN_00410f20(local_10);
  }
  local_11 = lVar2 != 0;
  return local_11;
}

