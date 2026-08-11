/* Ghidra address: 00e14960 */
/* Ghidra symbol: FUN_00e14960 */


void FUN_00e14960(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined4 local_24;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x05') {
    local_2c = 0;
    local_24 = (**(code **)(*param_2 + 0x210))(param_2,0);
    FUN_00e148d0(auStack_58);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x1c8))();
    local_2c = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_24 = (**(code **)(*param_2 + 0x210))(param_2,local_2c);
        FUN_00e148d0(auStack_58);
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

