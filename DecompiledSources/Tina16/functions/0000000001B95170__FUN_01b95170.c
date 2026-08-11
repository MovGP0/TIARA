/* Ghidra address: 01b95170 */
/* Ghidra symbol: FUN_01b95170 */


longlong FUN_01b95170(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  do {
    if (param_1 == 0) {
      return 0;
    }
    cVar1 = FUN_01b95130(param_1);
    if (cVar1 != '\0') {
      uVar3 = FUN_00416740(*(undefined8 *)(param_1 + 0x10));
      uVar4 = FUN_00416740(param_2);
      iVar2 = FUN_004277a0(0x400,1,uVar3,0xffffffff,uVar4,0xffffffff);
      if (iVar2 == 2) {
        return param_1;
      }
    }
    param_1 = FUN_006dd3e0(param_1);
  } while( true );
}

