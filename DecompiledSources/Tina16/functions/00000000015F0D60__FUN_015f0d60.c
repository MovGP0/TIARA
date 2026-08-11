/* Ghidra address: 015f0d60 */
/* Ghidra symbol: FUN_015f0d60 */


undefined8
FUN_015f0d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            longlong param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460 [2];
  undefined8 local_450;
  byte *local_448;
  undefined8 local_440;
  undefined1 local_231 [513];
  undefined8 local_30 [2];
  
  local_498 = 0;
  local_478 = 0;
  local_480 = 0;
  local_488 = 0;
  local_490 = 0;
  local_468 = 0;
  local_470 = 0;
  local_460[0] = 0;
  local_30[0] = 0;
  local_440 = 0;
  local_448 = (byte *)0x0;
  local_450 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_004168e0(local_460,local_res10[0]);
  FUN_00b0cea0(&local_448,local_460[0],0xfde9);
  iVar4 = 0;
  if (local_448 != (byte *)0x0) {
    iVar4 = *(int *)(local_448 + -4);
  }
  if (0 < iVar4) {
    cVar2 = FUN_00c53600(*local_448);
    if (cVar2 != '\0') {
      FUN_004156b0(&local_448,&DAT_015f1138,local_448);
    }
  }
  FUN_004425e0(local_231,local_448);
  cVar2 = _is_vhdl_keyword(local_231);
  if (cVar2 != '\0') {
    FUN_00415980(&local_448,3,"sKeywordStart",local_448,"sKeywordEnd");
  }
  iVar3 = 1;
  iVar4 = 0;
  if (local_448 != (byte *)0x0) {
    iVar4 = *(int *)(local_448 + -4);
  }
  FUN_004144d0(&local_450);
  if (0 < iVar4) {
    do {
      if (param_5 == 0) {
        cVar2 = FUN_00c535d0(local_448[(longlong)iVar3 + -1]);
        if (cVar2 == '\0') {
          cVar2 = FUN_00c53600(local_448[(longlong)iVar3 + -1]);
          if (cVar2 == '\0') {
            bVar1 = local_448[(longlong)iVar3 + -1];
            FUN_0043f750(&local_470,bVar1);
            FUN_00416cd0(&local_468,3,&DAT_015f117c,local_470,&DAT_015f1190);
            FUN_00415dd0(local_30,local_468,0);
            FUN_00416880(&local_480,local_448);
            FUN_00416760(&local_488,bVar1);
            FUN_00416880(&local_490,local_30[0]);
            FUN_00450070(&local_478,local_480,local_488,local_490,1);
            FUN_00415dd0(&local_448,local_478);
            iVar4 = 0;
            if (local_448 != (byte *)0x0) {
              iVar4 = *(int *)(local_448 + -4);
            }
          }
        }
      }
      else {
        cVar2 = FUN_00c535d0(local_448[(longlong)iVar3 + -1]);
        if (cVar2 == '\0') {
          cVar2 = FUN_00c53600(local_448[(longlong)iVar3 + -1]);
          if (cVar2 == '\0') goto LAB_015f1037;
        }
        FUN_004153d0(&local_498,local_448[(longlong)iVar3 + -1],0);
        FUN_004155b0(&local_450,local_498);
      }
LAB_015f1037:
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar4);
  }
  if (param_5 == 0) {
    FUN_00414bf0(param_1,local_448);
  }
  else {
    FUN_00414bf0(param_1,local_450);
  }
  FUN_004144d0(&local_498);
  FUN_00414560(&local_490,6);
  FUN_00414520(local_460);
  FUN_00414590(&local_450,3);
  FUN_004144d0(local_30);
  FUN_00414480(local_res10);
  return param_1;
}

