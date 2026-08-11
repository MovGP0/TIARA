/* Ghidra address: 004da230 */
/* Ghidra symbol: FUN_004da230 */


char FUN_004da230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar2 = FUN_00410e60(&DAT_004da0a0,1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2 + 0x10;
  }
  FUN_0041b840(local_20,lVar3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2 + 0x30;
  }
  cVar1 = FUN_004d9df0(param_1,lVar3);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_2,*(undefined8 *)(lVar2 + 0x28));
    FUN_00414ad0(param_3,*(undefined8 *)(lVar2 + 0x20));
    FUN_00414ad0(param_4,*(undefined8 *)(lVar2 + 0x18));
  }
  FUN_0041b800(local_20);
  return cVar1;
}

