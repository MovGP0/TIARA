/* Ghidra address: 0060f8a0 */
/* Ghidra symbol: FUN_0060f8a0 */


void FUN_0060f8a0(void)

{
  undefined8 uVar1;
  
  DAT_02011fa8 = DAT_02011fa8 + 1;
  if (DAT_02011fa8 == 0) {
    FUN_00410f20(DAT_02012040);
    uVar1 = DAT_01dee058;
    DAT_01dee058 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_01dee050;
    DAT_01dee050 = 0;
    FUN_00410f20(uVar1);
    FUN_00607680();
    FUN_00410f20(DAT_01dee370);
    FUN_00410f20(DAT_02012038);
    FUN_00410f20(DAT_02012020);
    FUN_00410f20(DAT_02012028);
    FUN_00410f20(DAT_02012030);
    thunk_FUN_0416f828(DAT_02011fa0);
    FUN_004278e0(&DAT_02011fd0);
    FUN_004278e0(&DAT_02011ff8);
  }
  return;
}

