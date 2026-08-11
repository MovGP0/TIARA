/* Ghidra address: 009dd360 */
/* Ghidra symbol: FUN_009dd360 */


undefined4 FUN_009dd360(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_00416db0(param_2,&DAT_009dd428);
  if (iVar1 == 0) {
    lVar2 = FUN_009dab20(param_1);
    *(undefined1 *)(lVar2 + 200) = 0;
  }
  else {
    iVar1 = FUN_00416db0(param_2,&LAB_009dd43c);
    if (iVar1 == 0) {
      lVar2 = FUN_009dab20(param_1);
      *(undefined1 *)(lVar2 + 200) = 1;
    }
    else {
      lVar2 = FUN_009dab20(param_1);
      *(undefined1 *)(lVar2 + 200) = 2;
    }
  }
  return 0;
}

