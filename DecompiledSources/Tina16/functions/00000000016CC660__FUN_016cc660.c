/* Ghidra address: 016cc660 */
/* Ghidra symbol: FUN_016cc660 */


void FUN_016cc660(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150 [2];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_12c [256];
  undefined4 local_2c;
  
  local_168 = 0;
  local_160 = 0;
  local_150[0] = 0;
  local_158 = 0;
  local_138 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_016a3690(*(undefined8 *)(param_2 + 0x10),&DAT_016cc8b4);
  *(undefined8 *)(param_2 + 0x20) = 0x2000130100000200;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  FUN_00415dd0(&local_158,local_res8[0],0);
  FUN_016b9120(local_150,local_158);
  FUN_00416880(local_res8,local_150[0]);
  FUN_0043eb50(&local_160,local_res8[0]);
  FUN_00414b50(local_res8,local_160);
  FUN_0043e130(&local_168,local_res8[0]);
  FUN_00415dd0(param_2 + 0xd90,local_168,0);
  *(undefined4 *)(param_2 + 0x990) = 1;
  FUN_016b9d20();
  FUN_016b9d80(param_2);
  while( true ) {
    cVar1 = FUN_016b9d70(param_2);
    if (cVar1 != '\0') break;
    FUN_016ba960(param_2,local_12c,0,&DAT_016cc8fc,&DAT_016cc900,0);
    FUN_016bdd70(param_2,&local_138,&local_140,0);
    lVar2 = *(longlong *)(param_2 + 0x9e8);
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(param_2 + 0x9e0);
    }
    cVar1 = FUN_01d350f0(lVar2,local_12c);
    if (cVar1 == '\0') {
      FUN_016a40c0(*(undefined8 *)(param_2 + 0x10),0);
    }
    else {
      lVar2 = FUN_01d347d0(lVar2,local_2c);
      FUN_00414bf0(lVar2 + 0x10,local_138);
      *(undefined8 *)(lVar2 + 0x28) = local_140;
    }
  }
  FUN_00414560(&local_168,2);
  FUN_00414590(&local_158,2);
  FUN_004144d0(&local_138);
  FUN_00414480(local_res8);
  return;
}

