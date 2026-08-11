/* Ghidra address: 0160f110 */
/* Ghidra symbol: FUN_0160f110 */


undefined8 FUN_0160f110(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint local_30;
  undefined2 uStack_2c;
  
  local_30 = *param_2;
  uStack_2c = (undefined2)param_2[1];
  uVar1 = local_30 & 0xff;
  if ((char)local_30 == '\0') {
    uVar1 = FUN_0160f0c0(&local_30);
  }
  if (uVar1 == 1) {
    FUN_00414ad0(param_1,&DAT_0160f200);
  }
  else if (uVar1 == 2) {
    FUN_00414ad0(param_1,&DAT_0160f214);
  }
  else if (uVar1 == 3) {
    FUN_00414ad0(param_1,&DAT_0160f228);
  }
  else if (uVar1 == 4) {
    FUN_00414ad0(param_1,&DAT_0160f23c);
  }
  else if (uVar1 == 5) {
    FUN_00414ad0(param_1,L"-Ofast");
  }
  else if (uVar1 == 6) {
    FUN_00414ad0(param_1,&DAT_0160f26c);
  }
  else if (uVar1 == 7) {
    FUN_00414ad0(param_1,&LAB_0160f280);
  }
  else {
    FUN_00414ad0(param_1,&DAT_0160f200);
  }
  return param_1;
}

