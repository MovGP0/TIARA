/* Ghidra address: 00882f90 */
/* Ghidra symbol: FUN_00882f90 */


void FUN_00882f90(void)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c0 [2];
  undefined1 local_1b0 [416];
  
  local_1c0[0] = 0;
  if (DAT_01e21a38 == 0) {
    DAT_01e21a38 = FUN_00452dc0(L"WS2_32.DLL",0x8000);
    if (DAT_01e21a38 == 0) {
      iVar1 = thunk_FUN_03ce33a6();
    }
    else {
      iVar1 = (*(code *)PTR_FUN_01e21678)(0x202,local_1b0);
      if (iVar1 == 0) goto LAB_00883057;
      thunk_FUN_041c8c2f(DAT_01e21a38);
      DAT_01e21a38 = 0;
    }
    FUN_0041ddd0(local_1c0,PTR_PTR_02003e50);
    local_1d0 = L"WS2_32.DLL";
    local_1c8 = 0x11;
    uVar2 = FUN_00883110(&PTR_FUN_00882c78,1,iVar1,local_1c0[0],&local_1d0,0);
    FUN_004134c0(uVar2);
  }
LAB_00883057:
  FUN_00414480(local_1c0);
  return;
}

