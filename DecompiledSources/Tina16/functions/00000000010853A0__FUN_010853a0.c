/* Ghidra address: 010853a0 */
/* Ghidra symbol: FUN_010853a0 */


void FUN_010853a0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 local_28 [8];
  undefined8 local_20;
  
  local_20 = 0;
  if (*(char *)(param_1 + 0xb50) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x7d8);
    plVar4 = (longlong *)FUN_006d6380(uVar1);
    uVar3 = FUN_006d5120(uVar1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_20,uVar3);
    cVar2 = FUN_010b13a0(*(undefined8 *)(param_1 + 0xac8),local_20,local_28,0);
    if (cVar2 != '\0') {
      FUN_01085110(param_1,local_20,0xffffffff);
    }
  }
  FUN_00414480(&local_20);
  return;
}

