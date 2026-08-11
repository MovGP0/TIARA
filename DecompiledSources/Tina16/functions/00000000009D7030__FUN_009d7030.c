/* Ghidra address: 009d7030 */
/* Ghidra symbol: FUN_009d7030 */


undefined4 FUN_009d7030(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 == (longlong *)0x0) {
      *param_2 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x120))(plVar2);
      if (cVar3 == '\x01') {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x118))
                          (*(longlong **)(param_1 + 0x20));
        *param_2 = uVar4;
      }
      else {
        *param_2 = 1;
      }
    }
  }
  else {
    uVar4 = (**(code **)*puVar1)(puVar1);
    *param_2 = uVar4;
  }
  return 0;
}

