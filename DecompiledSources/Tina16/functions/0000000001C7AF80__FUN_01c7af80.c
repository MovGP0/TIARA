/* Ghidra address: 01c7af80 */
/* Ghidra symbol: FUN_01c7af80 */


void FUN_01c7af80(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  
  if (((param_2 != (longlong *)0x0) &&
      (cVar1 = (**(code **)(*param_2 + 0x118))(param_2), cVar1 != '\0')) &&
     (lVar2 = FUN_01c7da00(*(undefined8 *)(param_1 + 0x240)), lVar2 != 0)) {
    uVar3 = FUN_01c7da00(*(undefined8 *)(param_1 + 0x240));
    lVar2 = FUN_012be9c0(uVar3,param_2);
    cVar4 = lVar2 != 0;
    cVar1 = FUN_017ff250(param_2);
    if (cVar1 != '\0') {
      cVar4 = cVar4 + '\x02';
    }
    if (cVar4 == '\x01') {
      *(short *)PTR_DAT_02003e28 = *(short *)PTR_DAT_02003e28 + 1;
    }
    else if (cVar4 == '\x02') {
      *(short *)PTR_DAT_02002b60 = *(short *)PTR_DAT_02002b60 + 1;
    }
    else if (cVar4 == '\x03') {
      *(short *)PTR_DAT_02004528 = *(short *)PTR_DAT_02004528 + 1;
    }
  }
  return;
}

