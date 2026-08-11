/* Ghidra address: 009f43d0 */
/* Ghidra symbol: FUN_009f43d0 */


undefined8 FUN_009f43d0(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int local_2c [3];
  
  plVar2 = (longlong *)FUN_009f4390();
  uVar3 = 0;
  if (plVar2 != (longlong *)0x0) {
    local_2c[0] = -1;
    cVar1 = (**(code **)(*plVar2 + 0x140))(plVar2,param_1,local_2c);
    if (cVar1 == '\0') {
      local_2c[0] = (**(code **)(*plVar2 + 0xb0))(plVar2,param_1);
    }
    if (-1 < local_2c[0]) {
      uVar3 = FUN_00a01490(plVar2,local_2c[0]);
    }
  }
  return uVar3;
}

