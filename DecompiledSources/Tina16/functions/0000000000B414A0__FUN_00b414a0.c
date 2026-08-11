/* Ghidra address: 00b414a0 */
/* Ghidra symbol: FUN_00b414a0 */


undefined4 FUN_00b414a0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  undefined8 local_20;
  undefined1 local_12;
  undefined1 local_11 [5];
  undefined1 local_c [4];
  
  local_20 = 0;
  local_2c = 0;
  FUN_0040d200(&local_12,10,0);
  FUN_00409a70(param_1,&local_12,10);
  FUN_00414c70(&local_20,&DAT_00b41634);
  uVar2 = FUN_00414df0(&local_20);
  cVar1 = FUN_0043e2c0(uVar2,&local_12,2);
  if (cVar1 != '\0') {
    local_2c = 7;
  }
  FUN_00414c70(&local_20,&DAT_00b41644);
  uVar2 = FUN_00414df0(&local_20);
  cVar1 = FUN_0043e2c0(uVar2,local_c,4);
  if (cVar1 != '\0') {
    local_2c = 5;
  }
  FUN_00414c70(&local_20,&DAT_00b41658);
  uVar2 = FUN_00414df0(&local_20);
  cVar1 = FUN_0043e2c0(uVar2,local_11,3);
  if (cVar1 != '\0') {
    local_2c = 6;
  }
  FUN_00414c70(&local_20,&DAT_00b41668);
  uVar2 = FUN_00414df0(&local_20);
  cVar1 = FUN_0043e2c0(uVar2,&local_12,10);
  if (cVar1 != '\0') {
    local_2c = 3;
  }
  FUN_00414c70(&local_20,&DAT_00b41680);
  uVar2 = FUN_00414df0(&local_20);
  cVar1 = FUN_0043e2c0(uVar2,&local_12,10);
  if (cVar1 != '\0') {
    local_2c = 2;
  }
  FUN_004144d0(&local_20);
  return local_2c;
}

