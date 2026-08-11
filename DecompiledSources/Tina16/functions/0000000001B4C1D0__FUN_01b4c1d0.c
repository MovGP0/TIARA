/* Ghidra address: 01b4c1d0 */
/* Ghidra symbol: FUN_01b4c1d0 */


void FUN_01b4c1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_38 = 0;
  local_40 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  cVar1 = FUN_00440a20(local_res8,1);
  if (cVar1 != '\0') {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*local_20 + 0xd8))(local_20,local_res8);
    iVar2 = (**(code **)(*local_20 + 0x28))();
    local_24 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_20 + 0x18))(local_20,&local_40,local_24);
        local_58 = 3;
        FUN_00450070(&local_38,local_40,local_res10,local_res18);
        (**(code **)(*local_20 + 0x40))(local_20,local_24,local_38);
        local_24 = local_24 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    (**(code **)(*local_20 + 0x100))(local_20,local_res8);
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_40,2);
  FUN_00414560(&local_res8,3);
  return;
}

