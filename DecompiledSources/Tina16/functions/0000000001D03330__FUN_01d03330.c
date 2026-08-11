/* Ghidra address: 01d03330 */
/* Ghidra symbol: FUN_01d03330 */


undefined4 FUN_01d03330(undefined8 param_1)

{
  byte bVar1;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 local_208 [256];
  undefined1 local_108 [256];
  
  local_218 = 0;
  local_210 = 0;
  local_21c = 0xffffffff;
  FUN_01d03060(param_1,&local_210,*(undefined8 *)PTR_DAT_02001f18);
  FUN_00416910(local_108,local_210,0xff);
  FUN_004169a0(&local_218,local_108);
  bVar1 = FUN_004170c0(&LAB_01d03428,local_218,1);
  if (bVar1 != 0) {
    FUN_004151b0(local_208,local_108,bVar1 + 1,0x100);
    local_21c = FUN_01d3d820(local_208,0xff);
  }
  FUN_00414560(&local_218,2);
  return local_21c;
}

