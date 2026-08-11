/* Ghidra address: 005fff20 */
/* Ghidra symbol: FUN_005fff20 */


void FUN_005fff20(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_210;
  undefined1 local_208 [512];
  
  local_210 = 0;
  iVar1 = thunk_FUN_03ce33a6();
  if (iVar1 != 0) {
    iVar1 = thunk_FUN_04094731(0x1000,0,iVar1,0x400,local_208,0x100,0);
    if (iVar1 != 0) {
      FUN_00416830(&local_210,local_208,0x100);
      uVar2 = FUN_0044d490(&PTR_FUN_00472738,1,local_210);
      FUN_004134c0(uVar2);
      goto code_r0x005fffa5;
    }
  }
  FUN_005ffeb0();
code_r0x005fffa5:
  FUN_00414480(&local_210);
  return;
}

