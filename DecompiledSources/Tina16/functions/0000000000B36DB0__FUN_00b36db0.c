/* Ghidra address: 00b36db0 */
/* Ghidra symbol: FUN_00b36db0 */


undefined8 *
FUN_00b36db0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  FUN_004144d0(param_1);
  if (-1 < param_4) {
    iVar1 = FUN_00b23cf0(param_5);
    if (param_4 < iVar1) {
      pcVar3 = (char *)FUN_00b23d10(param_5,param_4);
      if (pcVar3 != (char *)0x0) {
        FUN_004144d0(local_20);
        if (*pcVar3 != '\0') {
          FUN_004155b0(local_20,&DAT_00b37260);
        }
        if (pcVar3[1] != '\0') {
          FUN_004155b0(local_20,&DAT_00b37270);
        }
        if (pcVar3[2] != '\0') {
          FUN_004155b0(local_20,&DAT_00b37280);
        }
        if (local_20[0] != 0) {
          FUN_00415980(param_1,4,*param_1,"style:",local_20[0],&DAT_00b372a4);
        }
        uVar2 = FUN_00b1bce0(pcVar3[6]);
        FUN_0043fba0(local_30,uVar2,6);
        FUN_00415dd0(&local_38,local_30[0],0);
        FUN_004156b0(local_20,"000000",local_38);
        iVar1 = 0;
        if (local_20[0] != 0) {
          iVar1 = *(int *)(local_20[0] + -4);
        }
        FUN_00415ad0(local_20,local_20[0],iVar1 + -5,6);
        FUN_00415980(param_1,4,*param_1,"color:",local_20[0],&DAT_00b372a4);
        FUN_0043f750(&local_40,*(undefined2 *)(pcVar3 + 7));
        FUN_00415dd0(local_20,local_40,0);
        FUN_00415980(param_1,4,*param_1,"size:",local_20[0],&DAT_00b372a4);
        FUN_00b23800(&local_48,pcVar3);
        FUN_00415530(local_20,local_48,0);
        FUN_00415980(param_1,4,*param_1,"font:",local_20[0],&DAT_00b372a4);
        if (pcVar3[5] == '\x01') {
          FUN_00414c70(local_20,"super");
        }
        else if (pcVar3[5] == '\x02') {
          FUN_00414c70(local_20,&DAT_00b37318);
        }
        else {
          FUN_004144d0(local_20);
        }
        if (local_20[0] != 0) {
          FUN_00415980(param_1,4,*param_1,"script:",local_20[0],&DAT_00b372a4);
        }
        FUN_0043f750(&local_50,param_2);
        FUN_00415dd0(&local_58,local_50,0);
        FUN_0043f750(&local_60,param_3);
        FUN_00415dd0(&local_68,local_60,0);
        FUN_00415980(param_1,6,local_58,&DAT_00b3733c,local_68,&DAT_00b3734c,*param_1,&DAT_00b3735c)
        ;
      }
    }
  }
  FUN_004144d0(&local_68);
  FUN_00414480(&local_60);
  FUN_004144d0(&local_58);
  FUN_00414480(&local_50);
  FUN_00414520(&local_48);
  FUN_00414480(&local_40);
  FUN_004144d0(&local_38);
  FUN_00414480(local_30);
  FUN_004144d0(local_20);
  return param_1;
}

