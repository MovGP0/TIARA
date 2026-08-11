/* Ghidra address: 01366a90 */
/* Ghidra symbol: FUN_01366a90 */


void FUN_01366a90(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
  if (cVar1 == '\0') {
    return;
  }
  uVar3 = FUN_0198a580(param_2);
  if ((byte)uVar3 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)uVar3 & 0x1f) & 0x1eU) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if ((*(char *)(param_1 + 0x56) == '\0') &&
       (cVar1 = FUN_0139d910(0xffffffff,local_1c,local_20,local_24,param_2), cVar1 != '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0x56) = uVar2;
    return;
  }
  return;
}

