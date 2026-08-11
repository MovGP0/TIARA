/* Ghidra address: 01b1d450 */
/* Ghidra symbol: FUN_01b1d450 */


undefined8 FUN_01b1d450(undefined8 param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined8 local_170;
  int local_168;
  short local_162;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [256];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_158 = 0;
  local_160 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_162 = (short)((longlong)param_2 / 36000);
  param_2 = param_2 + ((uint)((longlong)param_2 / 36000) & 0xffff) * -36000;
  uVar2 = (longlong)param_2 / 600;
  local_168 = param_2 + ((uint)uVar2 & 0xffff) * -600;
  uVar3 = (longlong)local_168 / 10 & 0xffffffff;
  lVar1 = (longlong)local_168;
  local_170 = param_1;
  FUN_00414480(local_30);
  FUN_0040e780(local_138,lVar1 % 10 & 0xffff,1);
  FUN_004169a0(&local_38,local_138);
  if (local_162 == 0) {
    FUN_0043f750(&local_158,uVar2 & 0xffff);
    FUN_01b1d380(auStack_1b8,&local_160,uVar3);
    local_198 = local_160;
    FUN_00416cd0(local_30,3,local_158,&LAB_01b1d670);
  }
  else {
    FUN_0043f750(&local_140,local_162);
    FUN_01b1d380(auStack_1b8,&local_148,uVar2 & 0xffffffff);
    FUN_01b1d380(auStack_1b8,&local_150,uVar3);
    local_198 = local_148;
    local_190 = &LAB_01b1d670;
    local_188 = local_150;
    FUN_00416cd0(local_30,5,local_140,&LAB_01b1d670);
  }
  FUN_00414ad0(local_170,local_30[0]);
  FUN_00414560(&local_160,5);
  FUN_00414560(&local_38,2);
  return local_170;
}

