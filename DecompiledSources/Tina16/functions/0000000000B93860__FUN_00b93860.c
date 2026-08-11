/* Ghidra address: 00b93860 */
/* Ghidra symbol: FUN_00b93860 */


undefined8 FUN_00b93860(undefined8 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char *pcVar6;
  char cVar7;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148;
  char local_147;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined2 local_128;
  
  local_160 = 0;
  local_158 = 0;
  local_140 = 0;
  local_150 = 0;
  local_138 = 0;
  local_130 = 0;
  FUN_004169a0(&local_130,param_2);
  iVar2 = FUN_004170c0(&DAT_00b93b50,local_130,1);
  if (iVar2 == 2) {
    lVar5 = 3;
  }
  else {
    lVar5 = 1;
  }
  uVar3 = (uint)lVar5;
  if (param_2[lVar5] == '\\') {
    local_128 = 0x5c01;
    uVar3 = (uint)(byte)((char)lVar5 + 1);
  }
  else {
    local_128 = (ushort)local_128._1_1_ << 8;
  }
  FUN_00415260(param_2,param_3,1,uVar3 - 1);
  while( true ) {
    FUN_004169a0(&local_160,param_2);
    iVar2 = FUN_004170c0(&DAT_00b93b60,local_160,1);
    if (iVar2 < 1) break;
    FUN_004169a0(&local_138,param_2);
    cVar7 = FUN_004170c0(&DAT_00b93b60,local_138,1);
    pcVar6 = param_2;
    for (; cVar7 != '\0'; cVar7 = cVar7 + -1) {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
      if ((byte)(cVar1 + 0xa0U) < 0x20 && (1 << (cVar1 + 0xa0U & 0x1f) & 0x7fffffeU) != 0) {
        cVar1 = cVar1 + -0x20;
      }
      FUN_004154b0(&local_140,&local_128,0);
      local_148 = 1;
      local_147 = cVar1;
      FUN_004154b0(&local_150,&local_148,0);
      FUN_004155b0(&local_140,local_150);
      FUN_00415560(&local_128,local_140);
    }
    FUN_004169a0(&local_158,param_2);
    uVar4 = FUN_004170c0(&DAT_00b93b60,local_158,1);
    FUN_00415260(param_2,param_3,1,uVar4);
  }
  for (cVar7 = *param_2; cVar7 != '\0'; cVar7 = cVar7 + -1) {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
    if ((byte)(cVar1 + 0xa0U) < 0x20 && (1 << (cVar1 + 0xa0U & 0x1f) & 0x7fffffeU) != 0) {
      cVar1 = cVar1 + -0x20;
    }
    *param_2 = cVar1;
  }
  FUN_00414ff0(param_1,&local_128);
  FUN_00414560(&local_160,2);
  FUN_004144d0(&local_150);
  FUN_004144d0(&local_140);
  FUN_00414560(&local_138,2);
  return param_1;
}

