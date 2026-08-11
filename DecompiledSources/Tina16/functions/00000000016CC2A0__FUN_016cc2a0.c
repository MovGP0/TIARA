/* Ghidra address: 016cc2a0 */
/* Ghidra symbol: FUN_016cc2a0 */


void FUN_016cc2a0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258 [256];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140 [2];
  undefined8 local_130;
  undefined1 local_128 [264];
  
  local_260 = 0;
  local_270 = 0;
  local_268 = 0;
  local_158 = 0;
  local_150 = 0;
  local_140[0] = 0;
  local_148 = 0;
  local_130 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  lVar2 = FUN_016b97f0(&DAT_016b45f0,1,0);
  FUN_016a3690(*(undefined8 *)(lVar2 + 0x10),&DAT_016cc5c4);
  *(undefined8 *)(lVar2 + 0x20) = 0x2000130100000200;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  FUN_00415dd0(&local_148,local_res8[0],0);
  FUN_016b9120(local_140,local_148);
  FUN_00416880(local_res8,local_140[0]);
  FUN_0043eb50(&local_150,local_res8[0]);
  FUN_00414b50(local_res8,local_150);
  FUN_0043e130(&local_158,local_res8[0]);
  FUN_00415dd0(lVar2 + 0xd90,local_158,0);
  *(undefined4 *)(lVar2 + 0x990) = 1;
  FUN_016b9d20(lVar2);
  FUN_016b9d80(lVar2);
  while( true ) {
    cVar1 = FUN_016b9d70(lVar2);
    if (cVar1 != '\0') break;
    FUN_016ba960(lVar2,local_128,0,&DAT_016cc60c,&DAT_016cc610,0);
    cVar1 = FUN_016ba100(lVar2,0x7b);
    if (cVar1 == '\0') {
      FUN_016bad90(lVar2,local_258);
      FUN_004154b0(&local_130,local_258,0);
    }
    else {
      FUN_016bc400(lVar2,&local_130);
      FUN_016b9f90(lVar2,0x7d);
      FUN_00415980(&local_130,3,&DAT_016cc63c,local_130,&DAT_016cc64c);
    }
    FUN_004154b0(&local_268,local_128,0);
    FUN_00415980(&local_260,3,local_268,&DAT_016cc65c,local_130);
    FUN_00416880(&local_270,local_260);
    (**(code **)(*param_2 + 0x78))(param_2,local_270);
  }
  FUN_00410f20(lVar2);
  FUN_00414480(&local_270);
  FUN_00414590(&local_268,2);
  FUN_00414560(&local_158,2);
  FUN_00414590(&local_148,2);
  FUN_004144d0(&local_130);
  FUN_00414480(local_res8);
  return;
}

