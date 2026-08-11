/* Ghidra address: 0086b3b0 */
/* Ghidra symbol: FUN_0086b3b0 */


void FUN_0086b3b0(void)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  DAT_020127c8 = DAT_020127c8 + -1;
  if (DAT_020127c8 == -1) {
    local_68 = *(undefined8 *)PTR_DAT_02004ae0;
    uStack_60 = *(undefined8 *)(PTR_DAT_02004ae0 + 8);
    local_58 = *(undefined8 *)PTR_DAT_020031b8;
    uStack_50 = *(undefined8 *)(PTR_DAT_020031b8 + 8);
    local_48 = *(undefined8 *)PTR_DAT_020043f8;
    uStack_40 = *(undefined8 *)(PTR_DAT_020043f8 + 8);
    local_38 = *(undefined8 *)PTR_DAT_02003680;
    uStack_30 = *(undefined8 *)(PTR_DAT_02003680 + 8);
    local_28 = *(undefined8 *)PTR_DAT_02001948;
    uStack_20 = *(undefined8 *)(PTR_DAT_02001948 + 8);
    FUN_0086b6c0(&PTR_FUN_00862d28,&local_68,4);
    if (DAT_01e1bf90 == '\0') {
      FUN_00468820(&local_80,0);
      FUN_0086b4d0(&PTR_FUN_00862d28,L"ProhibitDTD",&local_80,1);
    }
  }
  FUN_00460ba0(&local_80);
  return;
}

