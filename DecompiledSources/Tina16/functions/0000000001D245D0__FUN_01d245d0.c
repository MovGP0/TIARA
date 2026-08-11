/* Ghidra address: 01d245d0 */
/* Ghidra symbol: FUN_01d245d0 */


void FUN_01d245d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  
  while( true ) {
    cVar3 = FUN_0040d1c0(param_2);
    FUN_00409900();
    if (cVar3 != '\0') break;
    uVar2 = FUN_0040db30(param_2);
    *(undefined1 *)(param_1 + 0x88f) = uVar2;
    FUN_00409900();
    uVar1 = FUN_0040ed20(param_3,*(undefined1 *)(param_1 + 0x88f));
    FUN_0040d060(uVar1);
    FUN_00409900();
  }
  return;
}

