/* Ghidra address: 01be2700 */
/* Ghidra symbol: FUN_01be2700 */


bool FUN_01be2700(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if ((cVar1 == '\0') || (cVar1 = FUN_00664d50(*(undefined8 *)PTR_DAT_020054d8), cVar1 != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return false;
  }
  if ((param_1[0xb1] == 0) && (cVar1 = FUN_00664d50(*(undefined8 *)PTR_DAT_020054d8), cVar1 == '\0')
     ) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return *(int *)(param_2 + 8) != 0x202;
  }
  if (param_1[0xb4] != 0) {
    lVar3 = thunk_FUN_040c88fd();
    lVar4 = FUN_0065b870(param_1[0xb4]);
    if (lVar3 != lVar4) {
      bVar2 = true;
      goto LAB_01be279a;
    }
  }
  bVar2 = false;
LAB_01be279a:
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    if ((param_1[0xba] == 0) || (*(char *)(param_1[0xba] + 0x592) != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else if ((bVar2) && (*(int *)(param_2 + 8) != 0xb403)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

