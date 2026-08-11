/* Ghidra address: 00548b00 */
/* Ghidra symbol: FUN_00548b00 */


undefined8 FUN_00548b00(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00548d90(param_1);
  if ((*(ushort *)(lVar2 + 8) & 4) == 0) {
    lVar2 = FUN_00548d90(param_1);
    if (((*(ushort *)(lVar2 + 8) & 2) != 0) &&
       (lVar2 = FUN_00548d90(param_1), (*(ushort *)(lVar2 + 8) & 1) == 0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))(*(longlong **)(param_1 + 0x38));
      if (lVar2 == 0) {
        return 0;
      }
      return 1;
    }
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))(*(longlong **)(param_1 + 0x38));
    if (lVar2 == 0) {
      uVar3 = 4;
    }
    else {
      uVar3 = 5;
    }
  }
  else {
    lVar2 = FUN_00548d90(param_1);
    cVar1 = FUN_0053c6d0(*(undefined2 *)(lVar2 + 8),0,2);
    if (cVar1 == '\0') {
      uVar3 = 2;
    }
    else if (cVar1 == '\x01') {
      uVar3 = 3;
    }
    else if (cVar1 == '\x02') {
      uVar3 = 8;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

