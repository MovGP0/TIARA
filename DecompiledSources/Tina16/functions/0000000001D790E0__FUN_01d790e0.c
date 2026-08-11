/* Ghidra address: 01d790e0 */
/* Ghidra symbol: FUN_01d790e0 */


longlong * FUN_01d790e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_10 = FUN_005ea470(&DAT_005e7878,1,0x20019);
  FUN_005ea670(local_10,0xffffffff80000001);
  FUN_00416ba0(&local_28,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005eaa60(local_10,local_28);
  if (cVar1 == '\0') {
    FUN_01d790a0(auStack_68,&local_40);
    FUN_00414ad0(param_1,local_40);
  }
  else {
    FUN_005eb6d0(local_10,param_1,local_res10);
    if (*param_1 == 0) {
      FUN_01d790a0(auStack_68,&local_30);
      FUN_00414ad0(param_1,local_30);
    }
    else {
      iVar2 = FUN_00416db0(local_res10,L"TempDir");
      if (iVar2 == 0) {
        cVar1 = FUN_00b96de0(*param_1);
        if (cVar1 == '\0') {
          FUN_00b96df0(*param_1);
        }
      }
    }
  }
  FUN_005ea630(local_10);
  FUN_00410f20(local_10);
  FUN_00414560(&local_40,4);
  FUN_00414560(&local_res10,2);
  return param_1;
}

