/* Ghidra address: 015fc680 */
/* Ghidra symbol: FUN_015fc680 */


char FUN_015fc680(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  char local_11;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  local_11 = '\0';
  local_10 = FUN_005ea470(&DAT_005e7878,1,0x20019);
  FUN_005ea670(local_10,0xffffffff80000001);
  cVar1 = FUN_005ea880(local_10,*(undefined8 *)PTR_DAT_02002340,0);
  if (cVar1 != '\0') {
    local_11 = FUN_005ebec0(local_10,local_res8);
    if (local_11 != '\0') {
      FUN_005eb6d0(local_10,&local_28,local_res8);
      FUN_00414ad0(local_res10,local_28);
    }
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  FUN_00414480(&local_res8);
  return local_11;
}

