/* Ghidra address: 0060f970 */
/* Ghidra symbol: FUN_0060f970 */


void FUN_0060f970(void)

{
  DAT_02011fa8 = DAT_02011fa8 + -1;
  if (DAT_02011fa8 == -1) {
    FUN_0060e9b0();
    FUN_00427fb0(&DAT_02011fd0);
    FUN_00427fb0(&DAT_02011ff8);
    PTR_DAT_02011fb0 = (undefined *)thunk_FUN_041715dd(7);
    DAT_02011fb8 = thunk_FUN_041715dd(5);
    PTR_DAT_02011fc0 = (undefined *)thunk_FUN_041715dd(0xd);
    DAT_02011fc8 = thunk_FUN_03ccce41(0,0x7f00);
    FUN_0060ea90();
    DAT_02012020 = FUN_005fb6e0(&PTR_FUN_005fb1e8,1,0x98);
    DAT_02012028 = FUN_005fb6e0(&PTR_FUN_005fb1e8,1,0x18);
    DAT_02012030 = FUN_005fb6e0(&PTR_FUN_005fb620,1,0x20);
    DAT_02012040 = FUN_0060f080(&DAT_0060ee40,1);
    DAT_01dee370 = FUN_004afa90(&DAT_00473870,1);
    DAT_02012038 = FUN_004afa90(&DAT_00473870,1);
    FUN_005ef910();
    FUN_005f1390();
    FUN_004a3030(&DAT_00424f10,FUN_005fc3c0,FUN_005fc3a0);
    *(code **)PTR_PTR_02003b70 = FUN_005fbf20;
  }
  return;
}

