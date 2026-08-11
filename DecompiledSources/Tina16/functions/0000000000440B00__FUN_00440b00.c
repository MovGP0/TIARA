/* Ghidra address: 00440b00 */
/* Ghidra symbol: FUN_00440b00 */


bool FUN_00440b00(undefined8 param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  bVar5 = false;
  uVar3 = FUN_00416740();
  uVar1 = thunk_FUN_0414b2cb(uVar3);
  if (uVar1 == 0xffffffff) {
    iVar2 = thunk_FUN_03ce33a6();
    if ((((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 0xa1)) ||
       (((iVar2 == 0x7b || (iVar2 == 0x35)) || ((iVar2 == 0x15 || (iVar2 == 0x43)))))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  else if ((uVar1 & 0x400) == 0) {
    bVar5 = (uVar1 & 0x10) != 0;
  }
  else if (param_2 == '\0') {
    if ((uVar1 & 0x10) == 0) {
      lVar4 = thunk_FUN_041ac412(uVar3,0x80000000,1,0,3,0x2000000,0);
      if (lVar4 == -1) {
        bVar5 = true;
      }
      else {
        thunk_FUN_041d2921(lVar4);
        bVar5 = false;
      }
    }
    else {
      bVar5 = true;
    }
  }
  else {
    lVar4 = thunk_FUN_041ac412(uVar3,0x80000000,1,0,3,0x2000000,0);
    if (lVar4 != -1) {
      thunk_FUN_041d2921(lVar4);
      bVar5 = (uVar1 & 0x10) != 0;
    }
  }
  return bVar5;
}

