/* Ghidra address: 004c5fa0 */
/* Ghidra symbol: FUN_004c5fa0 */


bool FUN_004c5fa0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  bool local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  dVar3 = (double)FUN_0058d490(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
  if (*(char *)(param_1 + 0x7f) == '\0') {
    uVar2 = FUN_00460ba0(&local_40);
    cVar1 = FUN_004c5b80(param_1,uVar2);
    if (cVar1 == '\0') {
      if ((*(int *)(*(longlong *)(param_1 + 0xb8) + 0x24) == -0x80000000) || (dVar3 != 0.0)) {
        local_61 = false;
      }
      else {
        local_61 = true;
      }
    }
    else {
      cVar1 = FUN_0046c3d0(&local_40);
      if (cVar1 == '\0') {
        FUN_00468860(&local_60,dVar3);
        cVar1 = FUN_0046f320(&local_60,&local_40);
        if (cVar1 != '\0') {
          local_61 = true;
          goto code_r0x004c6099;
        }
      }
      local_61 = false;
    }
  }
  else {
    dVar4 = (double)FUN_0058d490(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xb8));
    local_61 = dVar3 == dVar4;
  }
code_r0x004c6099:
  FUN_00460ba0(&local_60);
  FUN_00460ba0(&local_40);
  return local_61;
}

