/* Ghidra address: 01a8aa10 */
/* Ghidra symbol: FUN_01a8aa10 */


void FUN_01a8aa10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  if ((*(longlong *)PTR_DAT_02002418 == 0) && (*(longlong *)(param_1 + 0x798) != 0)) {
    uVar1 = FUN_007fc180(&PTR_FUN_0135cbe0,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02002418 = uVar1;
    local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00f1e090(&local_10);
    if (*(longlong *)PTR_DAT_020027c0 == 0) {
      if (*(longlong *)PTR_DAT_02001d00 == 0) {
        if (*(longlong *)PTR_DAT_02003118 != 0) {
          *(undefined1 *)(*(longlong *)PTR_DAT_02002418 + 0x749) =
               *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02003118 + 8) + 0x434);
        }
      }
      else {
        *(undefined1 *)(*(longlong *)PTR_DAT_02002418 + 0x749) =
             *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02001d00 + 8) + 0x434);
      }
    }
    else {
      *(undefined1 *)(*(longlong *)PTR_DAT_02002418 + 0x749) =
           *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_020027c0 + 8) + 0x434);
      FUN_01cc37d0(*(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 8),local_20);
      FUN_00414ad0(*(longlong *)PTR_DAT_02002418 + 0x750,local_20[0]);
    }
    FUN_0135e230(*(undefined8 *)PTR_DAT_02002418,local_10);
    FUN_00410f20(local_10);
    if (*(longlong *)PTR_DAT_020027c0 != 0) {
      FUN_01c6cf20(*(undefined8 *)PTR_DAT_02004e40);
      uVar1 = FUN_01364e80(&PTR_FUN_01362ec8,1,*(undefined8 *)PTR_DAT_02004e40);
      FUN_01c6cee0(*(undefined8 *)PTR_DAT_02004e40,uVar1);
    }
    FUN_008059a0(*(undefined8 *)PTR_DAT_02002418);
  }
  FUN_00414480(local_20);
  return;
}

