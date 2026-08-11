/* Ghidra address: 01229220 */
/* Ghidra symbol: FUN_01229220 */


void FUN_01229220(longlong param_1)

{
  short sVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7b0),&local_10);
  FUN_00414ad0(PTR_DAT_02005aa0,local_10);
  if ((*(longlong *)PTR_DAT_02004ff0 == 0) ||
     ((*(short *)(*(longlong *)PTR_DAT_02004ff0 + 6) == 0x5f &&
      (*(short *)(*(longlong *)PTR_DAT_02004ff0 + 0xc) == 0x5f)))) {
    if (*(short *)(PTR_DAT_020021e8 + 0x1fa8) == 0x46) {
      FUN_00416780(&local_18,*(undefined2 *)(PTR_DAT_020021e8 + 0x1fa4));
      FUN_00416cd0(&DAT_021076f8,3,&DAT_012294c8,local_18,&LAB_012294d8);
    }
    else {
      sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa4);
      if (sVar1 == 0x4c) {
        FUN_00414ad0(&DAT_021076f8,&DAT_01229478);
      }
      else if (sVar1 == 0x48) {
        FUN_00414ad0(&DAT_021076f8,&DAT_0122948c);
      }
      else if (sVar1 == 0x50) {
        FUN_00414ad0(&DAT_021076f8,&DAT_012294a0);
      }
      else if (sVar1 == 0x53) {
        FUN_00414ad0(&DAT_021076f8,&DAT_012294b4);
      }
    }
    FUN_00416780(&local_20,*(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6));
    FUN_00416cd0(PTR_DAT_02004ff0,5,DAT_021076f0,&LAB_012294d8,DAT_021076f8,local_20,&LAB_012294d8);
  }
  FUN_00414ad0(&DAT_02107710,*(undefined8 *)PTR_DAT_02004ff0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x868),*(undefined8 *)PTR_DAT_02004ff0);
  if (*(longlong *)PTR_DAT_02001a00 != 0) {
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001a00 + 0x778),0);
  }
  FUN_00414560(&local_20,2);
  FUN_00414480(&local_10);
  return;
}

