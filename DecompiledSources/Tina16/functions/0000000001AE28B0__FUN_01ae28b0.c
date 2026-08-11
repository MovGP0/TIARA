/* Ghidra address: 01ae28b0 */
/* Ghidra symbol: FUN_01ae28b0 */


void FUN_01ae28b0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_20 [2];
  
  local_20[0] = FUN_00410e60(&PTR_FUN_00472dd0,1);
  FUN_01acff30(param_1,local_20);
  lVar1 = FUN_004aeac0(local_20[0],0);
  if ((*(char *)(lVar1 + 0x90) != '\0') && (*(longlong *)(param_1 + 0xf0) != 0)) {
    FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xae0),0);
    FUN_01a7b980(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  lVar1 = FUN_004aeac0(local_20[0],0);
  if ((*(char *)(lVar1 + 0x90) == '\0') && (*(longlong *)(param_1 + 0xf8) != 0)) {
    FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xae8),0);
    FUN_01a7bac0(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  FUN_00410f20(local_20[0]);
  return;
}

