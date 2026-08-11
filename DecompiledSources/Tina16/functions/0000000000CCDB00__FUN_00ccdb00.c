/* Ghidra address: 00ccdb00 */
/* Ghidra symbol: FUN_00ccdb00 */


char FUN_00ccdb00(void)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_19;
  
  local_30 = auStack_58;
  FUN_00cbf430(DAT_01eadbb0);
  cVar1 = FUN_00cbfc20(DAT_01eadbb0);
  if (cVar1 == '\0') {
    local_19 = FUN_00c99a40();
    if (local_19 != '\0') {
      (**(code **)PTR_DAT_02001a30)();
      (**(code **)PTR_DAT_020033b8)();
      FUN_00ca5390();
      (**(code **)PTR_DAT_02003c20)();
      iVar2 = (**(code **)PTR_DAT_020015d8)();
      local_19 = 0 < iVar2;
      if ((bool)local_19) {
        DAT_01eadbb8 = FUN_00618bb0(&PTR_FUN_0086ece8,1);
        DAT_01eadbc0 = FUN_00618bb0(&PTR_FUN_0086ece8,1);
        DAT_01eadbc8 = FUN_00618bb0(&PTR_FUN_0086ece8,1);
        DAT_01eadbd0 = FUN_004afa90(&DAT_00473870,1);
        FUN_00ccda20();
        (**(code **)PTR_DAT_02004a60)(FUN_00ccd970);
        FUN_00cbfc80(DAT_01eadbb0,1);
        local_19 = '\x01';
        FUN_00cbf450(DAT_01eadbb0);
        return local_19;
      }
    }
  }
  else {
    local_19 = '\x01';
  }
  FUN_00ccdc30(0,local_30);
  return local_19;
}

