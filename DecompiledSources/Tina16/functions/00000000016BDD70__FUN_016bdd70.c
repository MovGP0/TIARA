/* Ghidra address: 016bdd70 */
/* Ghidra symbol: FUN_016bdd70 */


char FUN_016bdd70(undefined8 param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  char local_111;
  undefined1 local_110 [256];
  undefined8 local_10;
  
  local_10 = 0;
  local_111 = '\x01';
  cVar1 = FUN_016ba100(param_1,0x7b);
  if (cVar1 == '\0') {
    if (param_4 == '\0') {
      uVar2 = FUN_016bade0(param_1);
      *param_3 = uVar2;
      FUN_004144d0(param_2);
    }
    else {
      local_111 = FUN_016baee0(param_1,param_3);
      if (local_111 == '\0') {
        FUN_016ba100(param_1,0x22);
        FUN_016ba220(param_1,local_110,&DAT_016bde9c,0);
        FUN_016ba100(param_1,0x22);
      }
      FUN_004144d0(param_2);
    }
  }
  else {
    FUN_016bc400(param_1,&local_10);
    FUN_00414bf0(param_2,local_10);
    *param_3 = 0;
    FUN_016b9f90(param_1,0x7d);
  }
  FUN_004144d0(&local_10);
  return local_111;
}

