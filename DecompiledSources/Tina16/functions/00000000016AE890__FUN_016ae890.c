/* Ghidra address: 016ae890 */
/* Ghidra symbol: FUN_016ae890 */


undefined1 FUN_016ae890(longlong *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  undefined1 local_41;
  undefined8 local_40 [2];
  int local_2c;
  
  local_40[0] = 0;
  local_41 = 0;
  iVar3 = 0;
  local_58 = param_2;
  local_50 = param_3;
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      uVar4 = (uint)(iVar3 + iVar2) >> 1;
      (**(code **)(*param_1 + 0x18))(param_1,local_40,uVar4);
      local_2c = FUN_0043e6d0(local_40[0],local_58);
      cVar1 = FUN_016ae860(auStack_78);
      if (cVar1 == '\0') {
        iVar2 = uVar4 - 1;
        if (local_2c == 0) {
          local_41 = 1;
        }
      }
      else {
        iVar3 = uVar4 + 1;
      }
    } while (iVar3 <= iVar2);
  }
  *local_50 = iVar3;
  FUN_00414480(local_40);
  return local_41;
}

