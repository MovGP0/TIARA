/* Ghidra address: 014c35c0 */
/* Ghidra symbol: FUN_014c35c0 */


undefined8 * FUN_014c35c0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_212 [522];
  
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  thunk_FUN_0412858d(0,local_212,0x801c,0xffffffff);
  FUN_00416830(param_2,local_212,0x105);
  FUN_00416ba0(&local_220,*param_2,L"\\DesignSoft");
  cVar1 = FUN_00440b00(local_220,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_228,*param_2,L"\\DesignSoft");
    FUN_00409a30(local_228);
    FUN_00409900();
  }
  FUN_00416ba0(&local_230,*param_2,L"\\DesignSoft\\TinaCloud");
  cVar1 = FUN_00440b00(local_230,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_238,*param_2,L"\\DesignSoft\\TinaCloud");
    FUN_00409a30(local_238);
    FUN_00409900();
  }
  FUN_00416ad0(param_2,L"\\DesignSoft\\TinaCloud\\");
  FUN_00414560(&local_238,4);
  return param_2;
}

