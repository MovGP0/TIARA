/* Ghidra address: 01aa37d0 */
/* Ghidra symbol: FUN_01aa37d0 */


void FUN_01aa37d0(int param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_228;
  undefined1 local_220 [256];
  undefined8 local_120 [2];
  char local_10b [81];
  undefined1 local_ba [162];
  
  local_228 = 0;
  local_120[0] = 0;
  if (PTR_DAT_02004010[0x82d] != '\0') {
    local_10b[0] = '\0';
    iVar2 = 1;
    if (0 < param_1) {
      do {
        if (local_10b[0] != '\0') {
          FUN_00415110(local_10b,&DAT_01aa3948,0x50);
        }
        FUN_004169a0(local_120,local_10b);
        FUN_00416ad0(local_120,*(undefined8 *)(*param_2 + -8 + (longlong)iVar2 * 8));
        FUN_00416910(local_220,local_120[0],0xff);
        FUN_00415020(local_10b,local_220,0x50);
        iVar2 = iVar2 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    FUN_004169a0(&local_228,local_10b);
    uVar1 = FUN_00442620(local_ba,local_228);
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar1,L"Warning",0x10);
  }
  FUN_00414480(&local_228);
  FUN_00414480(local_120);
  return;
}

