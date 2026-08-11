/* Ghidra address: 01729f90 */
/* Ghidra symbol: FUN_01729f90 */


longlong FUN_01729f90(longlong param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined8 local_res18 [2];
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_78;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  cVar1 = FUN_00440a20(local_res18[0],1);
  if (cVar1 != '\0') {
    uVar2 = FUN_00440210(local_res18[0],0x20);
    *(undefined8 *)(local_res8 + 8) = uVar2;
    local_2c = FUN_004406f0(*(undefined8 *)(local_res8 + 8),0,2);
    uVar2 = FUN_004095c0((longlong)local_2c);
    *(undefined8 *)(local_res8 + 0x18) = uVar2;
    FUN_004406f0(*(undefined8 *)(local_res8 + 8),0,0);
    FUN_00440610(*(undefined8 *)(local_res8 + 8),*(undefined8 *)(local_res8 + 0x18),local_2c);
    local_20 = *(undefined8 *)(local_res8 + 8);
    thunk_FUN_041d2921(local_20);
    FUN_00bac3d0(&local_48);
    FUN_0041b840(local_res8 + 0x10,local_48);
    FUN_004414c0(&local_50,local_res18[0],L".xml");
    cVar1 = FUN_00440a20(local_50,1);
    if (cVar1 != '\0') {
      FUN_004414c0(&local_58,local_res18[0],L".xml");
      FUN_01729d90(auStack_78,local_58);
    }
  }
  FUN_00414560(&local_58,2);
  FUN_0041b800(&local_48);
  FUN_0041b800(&local_28);
  FUN_00414480(local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

