/* Ghidra address: 01b9dd40 */
/* Ghidra symbol: FUN_01b9dd40 */


void FUN_01b9dd40(byte *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 local_278;
  undefined1 local_270 [256];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150 [2];
  undefined4 local_13c;
  undefined8 local_138;
  int local_12c;
  byte local_128 [264];
  
  local_278 = 0;
  local_170 = 0;
  local_160 = 0;
  local_168 = 0;
  local_150[0] = 0;
  local_158 = 0;
  local_138 = 0;
  lVar4 = (ulonglong)*param_1 + 1;
  pbVar5 = local_128;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_1;
    param_1 = param_1 + 1;
    pbVar5 = pbVar5 + 1;
  }
  FUN_004169a0(&local_158,local_128);
  FUN_00416ba0(local_150,DAT_02110df8,local_158);
  FUN_0040cf10(&DAT_02110f78,local_150[0],0);
  FUN_00409900();
  FUN_0040c9e0(&DAT_02110f78);
  FUN_00409900();
  while( true ) {
    cVar1 = FUN_0040d1c0(&DAT_02110f78);
    FUN_00409900();
    if (cVar1 != '\0') break;
    FUN_01b9dcd0();
    if (DAT_0211126b == '@') break;
    FUN_004154b0(&local_160,&DAT_0211126a,0);
    FUN_00416880(&local_168,local_160);
    uVar2 = FUN_0040e860(local_168,&local_12c);
    if (local_12c != 0) {
      FUN_01b9d990(L"Syntax error");
    }
    FUN_01b9dcd0();
    uVar3 = FUN_01b9e070(&DAT_01b9d628,1,uVar2);
    (**(code **)(*DAT_02110df0 + 0x50))(DAT_02110df0,uVar3);
    do {
      FUN_004169a0(&local_170,&DAT_0211126a);
      FUN_01b9d9f0(local_170,&local_138,&local_13c);
      FUN_00416910(local_270,local_138,0xff);
      FUN_01b9e280(DAT_02110df0,local_270,local_13c);
      FUN_01b9dcd0();
    } while (DAT_0211126b != ':');
    FUN_01b9dcd0();
    do {
      FUN_004169a0(&local_278,&DAT_0211126a);
      FUN_01b9d9f0(local_278,&local_138,&local_13c);
      FUN_00416910(local_270,local_138,0xff);
      FUN_01b9e2f0(DAT_02110df0,local_270);
      FUN_01b9dcd0();
    } while (DAT_0211126b != '%');
  }
  FUN_0040d150(&DAT_02110f78);
  FUN_00409900();
  FUN_00414480(&local_278);
  FUN_00414560(&local_170,2);
  FUN_004144d0(&local_160);
  FUN_00414560(&local_158,2);
  FUN_00414480(&local_138);
  return;
}

