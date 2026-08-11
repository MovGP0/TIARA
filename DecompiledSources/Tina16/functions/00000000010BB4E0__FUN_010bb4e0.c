/* Ghidra address: 010bb4e0 */
/* Ghidra symbol: FUN_010bb4e0 */


undefined8 FUN_010bb4e0(longlong param_1,undefined8 *param_2,undefined8 param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar2 = FUN_01d31a40(*param_2);
  if (iVar2 == 0) {
    cVar1 = FUN_01cf0620(param_1,param_2,0,0,0xffffffff);
    if (cVar1 == '\0') {
      if (param_4 < 0x101) {
        FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0x30));
        FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0x28));
      }
      else {
        FUN_01d32430(*param_2,*(undefined8 *)(param_1 + 0x30));
        FUN_01d32430(*param_2,*(undefined8 *)(param_1 + 0x28));
      }
      FUN_01d30f00(*param_2,param_1 + 0x38,1);
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

