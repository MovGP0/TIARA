/* Ghidra address: 01d03430 */
/* Ghidra symbol: FUN_01d03430 */


undefined4 FUN_01d03430(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [256];
  undefined1 local_118 [264];
  
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_234 = 0xffffffff;
  FUN_01d03060(param_1,&local_220,*(undefined8 *)PTR_DAT_02001f18);
  FUN_00416910(local_118,local_220,0xff);
  FUN_004169a0(&local_228,local_118);
  iVar1 = FUN_004170c0(&DAT_01d03568,local_228,1);
  FUN_004169a0(&local_230,local_118);
  iVar2 = FUN_004170c0(&LAB_01d03578,local_230,1);
  if (iVar2 == 0) {
    iVar2 = 0x100;
  }
  if (iVar1 != 0) {
    FUN_004151b0(local_218,local_118,iVar1 + 1,(iVar2 - iVar1) + -1);
    local_234 = FUN_01d3d840(local_218,0xff);
  }
  FUN_00414560(&local_230,3);
  return local_234;
}

