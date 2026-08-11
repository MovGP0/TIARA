/* Ghidra address: 01768520 */
/* Ghidra symbol: FUN_01768520 */


undefined8 * FUN_01768520(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00441920(local_20,*param_1);
  cVar1 = FUN_00440a20(*param_1,1);
  if (cVar1 == '\0') {
    if (param_3 != 0) {
      FUN_00441640(local_30,*(undefined8 *)(param_3 + 0x60));
      FUN_00416ba0(param_1,local_30[0],local_20[0]);
    }
    cVar1 = FUN_00440a20(*param_1,1);
    if (cVar1 == '\0') {
      FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02005010,&DAT_017686e4,L"TINA.INI");
      plVar2 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
      cVar1 = (**(code **)(*plVar2 + 0x30))
                        (plVar2,L"Schematic Editor",L"ReadMacroContentFromMacroLib",0);
      if (cVar1 != '\0') {
        FUN_00416cd0(param_1,3,*(undefined8 *)PTR_DAT_02005010,L"\\MacroLib\\",local_20[0]);
      }
      FUN_00410f20(plVar2);
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return param_1;
}

