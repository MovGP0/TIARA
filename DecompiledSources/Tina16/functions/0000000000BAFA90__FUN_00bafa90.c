/* Ghidra address: 00bafa90 */
/* Ghidra symbol: FUN_00bafa90 */


void FUN_00bafa90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00bae380(param_1);
  if (param_2 != 0) {
    lVar1 = FUN_00bb1e80(&LAB_00ba3dc0,1,*(undefined8 *)(param_1 + 0x18),param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x50;
    }
    FUN_00bae3c0(param_1,&local_10,lVar1);
  }
  FUN_0041b800(&local_10);
  return;
}

