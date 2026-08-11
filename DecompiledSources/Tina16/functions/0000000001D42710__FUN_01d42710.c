/* Ghidra address: 01d42710 */
/* Ghidra symbol: FUN_01d42710 */


undefined8 FUN_01d42710(undefined8 param_1)

{
  int iVar1;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130 [2];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined2 local_110;
  undefined4 local_10c;
  undefined1 local_108 [256];
  
  local_130[0] = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_11c = 0x114;
  iVar1 = thunk_FUN_03ed3ad2(&local_11c);
  if (iVar1 == 0) {
    FUN_00414ad0(param_1,L"{cannot determine}");
  }
  else {
    FUN_0043fbc0(local_130,local_10c,8);
    FUN_0043f780(&local_138,local_118);
    FUN_0043f780(&local_140,local_114);
    FUN_0043f750(&local_148,local_110);
    FUN_00442b00(&local_150,local_108);
    FUN_00416cd0(param_1,10,&DAT_01d42898,local_130[0],&DAT_01d428ac,local_138,&DAT_01d428c0,
                 local_140,&DAT_01d428d0,local_148,&DAT_01d428e4,local_150);
  }
  FUN_00414560(&local_150,5);
  return param_1;
}

