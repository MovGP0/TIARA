/* Ghidra address: 00821e90 */
/* Ghidra symbol: FUN_00821e90 */


longlong FUN_00821e90(undefined8 param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint local_28 [2];
  undefined1 local_20;
  
  lVar2 = FUN_0068b4c0(param_1,param_2);
  if (lVar2 == -1) {
    local_20 = 0;
    local_28[0] = param_2;
    uVar3 = FUN_0044d8d0(&PTR_FUN_004347c0,1,PTR_PTR_02004940,local_28,0);
    FUN_004134c0(uVar3);
  }
  if (lVar2 != 0) {
    cVar1 = FUN_004113d0(lVar2,&DAT_00820230);
    if (cVar1 == '\0') {
      lVar2 = 0;
    }
  }
  return lVar2;
}

