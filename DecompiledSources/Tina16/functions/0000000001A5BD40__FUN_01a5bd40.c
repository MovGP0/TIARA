/* Ghidra address: 01a5bd40 */
/* Ghidra symbol: FUN_01a5bd40 */


void FUN_01a5bd40(longlong param_1)

{
  int iVar1;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288 [16];
  uint local_278;
  undefined8 local_270;
  
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_00414b50(&local_290,L"c:\\Attila\\Devel Files\\Other\\ImportPic Test\\");
  *(undefined1 *)(param_1 + 0x810) = 0;
  FUN_00416ba0(&local_2b0,local_290,L"*.tsc");
  iVar1 = FUN_00441230(local_2b0,0x1ff,local_288);
  if (iVar1 == 0) {
    do {
      if ((local_278 & 0x10) == 0) {
        FUN_00416ba0(&local_298,local_290,local_270);
        FUN_01c681b0(*(undefined8 *)PTR_DAT_02004e40,local_298,0,0,0,0,1);
        FUN_01a5bad0(param_1,0);
        while (*(char *)(param_1 + 0x811) != '\0') {
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        }
        thunk_FUN_0419965d(500);
      }
      iVar1 = FUN_00441290(local_288);
    } while ((iVar1 == 0) && (*(char *)(param_1 + 0x810) == '\0'));
    FUN_004412c0(local_288);
  }
  if (*(char *)(param_1 + 0x810) == '\0') {
    FUN_00416ba0(&local_2b8,local_290,L"Ext\\*.png");
    iVar1 = FUN_00441230(local_2b8,0x1ff,local_288);
    if (iVar1 == 0) {
      do {
        if ((local_278 & 0x10) == 0) {
          FUN_00416cd0(&local_298,3,local_290,L"Ext\\",local_270);
          FUN_00414b50(&local_2a0,local_298);
          *(undefined1 *)(param_1 + 0x293c) = 1;
          FUN_004414c0(&local_2a8,local_2a0,L".cir");
          FUN_0043e1a0(&local_2c0,local_2a0);
          FUN_00414ad0(param_1 + 0x890,local_2c0);
          *(undefined1 *)(param_1 + 0x2ae8) = 1;
          FUN_01a5b280(param_1,local_2a8,local_2a0);
          while (*(char *)(param_1 + 0x811) != '\0') {
            FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
          }
          thunk_FUN_0419965d(500);
        }
        iVar1 = FUN_00441290(local_288);
      } while ((iVar1 == 0) && (*(char *)(param_1 + 0x810) == '\0'));
      FUN_004412c0(local_288);
    }
  }
  FUN_00414560(&local_2c0,7);
  FUN_00417740(local_288,&DAT_00432b90);
  return;
}

