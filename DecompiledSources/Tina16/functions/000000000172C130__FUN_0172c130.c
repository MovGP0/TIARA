/* Ghidra address: 0172c130 */
/* Ghidra symbol: FUN_0172c130 */


ulonglong FUN_0172c130(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  lVar1 = FUN_0172bd70(&PTR_FUN_01729070,CONCAT71((int7)((ulonglong)param_3 >> 8),1) & 0xffffffff,
                       param_1,param_2,*(undefined8 *)PTR_DAT_02001f18,1);
  if (*(char *)(lVar1 + 0x58) == '\0') {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(char *)(lVar1 + 0x16c) == '\0');
  }
  else {
    uVar2 = 0;
  }
  FUN_00410f20(lVar1);
  return uVar2 & 0xffffffff;
}

