/* Ghidra address: 0046f400 */
/* Ghidra symbol: FUN_0046f400 */


void FUN_0046f400(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  if (*(longlong *)PTR_DAT_020048b8 != 0) {
    uVar2 = FUN_00414520(&local_20);
    uVar1 = (**(code **)PTR_DAT_020048b8)(0,0x400,0,uVar2);
    FUN_00460800(uVar1,0xb,8);
    FUN_004168b0(&DAT_02010988,local_20);
    FUN_004168b0(&local_38,local_20);
    FUN_0043e600(local_30,local_38);
    FUN_00414ad0(&DAT_02010990,local_30[0]);
    FUN_004168b0(&local_48,local_20);
    FUN_0043e5a0(&local_40,local_48);
    FUN_00414ad0(&DAT_02010998,local_40);
    uVar2 = FUN_00414520(&local_20);
    uVar1 = (**(code **)PTR_DAT_020048b8)(0xffffffff,0x400,0,uVar2);
    FUN_00460800(uVar1,0xb,8);
    FUN_004168b0(&DAT_020109a0,local_20);
    FUN_004168b0(&local_58,local_20);
    FUN_0043e600(&local_50,local_58);
    FUN_00414ad0(&DAT_020109a8,local_50);
    FUN_004168b0(&local_68,local_20);
    FUN_0043e5a0(&local_60,local_68);
    FUN_00414ad0(&DAT_020109b0,local_60);
    iVar3 = -0x80;
    puVar4 = &DAT_020109b8;
    do {
      FUN_0043f750(&local_70,iVar3);
      FUN_00414ad0(puVar4,local_70);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 8;
    } while (iVar3 != 0x100);
  }
  FUN_00414560(&local_70,9);
  FUN_00414520(&local_20);
  return;
}

