/* Ghidra address: 01a87dd0 */
/* Ghidra symbol: FUN_01a87dd0 */


void FUN_01a87dd0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00f1e090(&local_10);
  if (*(longlong *)PTR_DAT_02001288 == 0) {
    if (*(longlong *)PTR_DAT_020027c0 == 0) {
      if (*(longlong *)PTR_DAT_02001d00 == 0) {
        if (*(longlong *)PTR_DAT_02003118 != 0) {
          *(undefined1 *)(*(longlong *)PTR_DAT_02003ba0 + 0x93c) =
               *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02003118 + 8) + 0x434);
        }
      }
      else {
        *(undefined1 *)(*(longlong *)PTR_DAT_02003ba0 + 0x93c) =
             *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02001d00 + 8) + 0x434);
      }
    }
    else {
      *(undefined1 *)(*(longlong *)PTR_DAT_02003ba0 + 0x93c) =
           *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_020027c0 + 8) + 0x434);
      FUN_01cc37d0(*(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 8),&local_28);
      FUN_00414ad0(*(longlong *)PTR_DAT_02003ba0 + 0x940,local_28);
    }
  }
  else {
    *(undefined1 *)(*(longlong *)PTR_DAT_02003ba0 + 0x93c) =
         *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02001288 + 8) + 0x434);
    FUN_01cc37d0(*(undefined8 *)(*(longlong *)PTR_DAT_02001288 + 8),local_20);
    FUN_00414ad0(*(longlong *)PTR_DAT_02003ba0 + 0x940,local_20[0]);
  }
  FUN_013ca610(*(undefined8 *)PTR_DAT_02003ba0,local_10);
  FUN_00410f20(local_10);
  if (*(longlong *)PTR_DAT_020027c0 != 0) {
    FUN_01c6cf20(*(undefined8 *)PTR_DAT_02004e40);
    if (param_2 == 0) {
      uVar1 = FUN_0136b960(&PTR_FUN_013631b0,1,*(undefined8 *)PTR_DAT_02004e40);
      FUN_01c6cee0(*(undefined8 *)PTR_DAT_02004e40,uVar1);
    }
    else {
      uVar1 = FUN_01364e80(&PTR_FUN_01362ec8,1,*(undefined8 *)PTR_DAT_02004e40);
      FUN_01c6cee0(*(undefined8 *)PTR_DAT_02004e40,uVar1);
    }
  }
  if (param_2 == 0) {
    if (*(char *)(*(longlong *)PTR_DAT_02003ba0 + 0x949) != '\0') {
      FUN_013cf760(*(undefined8 *)PTR_DAT_02003ba0,0);
    }
    FUN_013cbd70(*(undefined8 *)PTR_DAT_02003ba0,0);
  }
  else {
    FUN_008059a0(*(undefined8 *)PTR_DAT_02003ba0);
  }
  FUN_00414560(&local_28,2);
  return;
}

