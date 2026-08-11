/* Ghidra address: 00440a20 */
/* Ghidra symbol: FUN_00440a20 */


bool FUN_00440a20(undefined8 param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  uVar4 = FUN_00416740(param_1);
  uVar2 = thunk_FUN_0414b2cb(uVar4);
  if (uVar2 == 0xffffffff) {
    iVar3 = thunk_FUN_03ce33a6();
    if ((((iVar3 != 2) && (iVar3 != 3)) && (iVar3 != 0x7b)) &&
       (cVar1 = FUN_004409d0(auStack_68,param_1), cVar1 != '\0')) {
      return true;
    }
    bVar6 = false;
  }
  else if ((uVar2 & 0x400) == 0) {
    bVar6 = (uVar2 & 0x10) == 0;
  }
  else if (param_2 == '\0') {
    bVar6 = true;
  }
  else if ((uVar2 & 0x10) == 0) {
    local_48 = 3;
    local_40 = 0;
    local_38 = 0;
    lVar5 = thunk_FUN_041ac412(uVar4,0x80000000,1,0);
    if (lVar5 == -1) {
      iVar3 = thunk_FUN_03ce33a6();
      bVar6 = iVar3 == 0x20;
    }
    else {
      thunk_FUN_041d2921(lVar5);
      bVar6 = true;
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

