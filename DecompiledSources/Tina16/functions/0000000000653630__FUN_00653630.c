/* Ghidra address: 00653630 */
/* Ghidra symbol: FUN_00653630 */


undefined8 FUN_00653630(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 local_20;
  
  plVar1 = *(longlong **)(param_2 + 0x78);
  if (*(char *)(param_2 + 0x2e4) == '\0') {
    cVar3 = FUN_0065be20(plVar1);
    if (cVar3 != '\0') {
      (**(code **)(*plVar1 + 0xe0))(plVar1,local_38);
      local_20 = local_30;
      goto LAB_00653687;
    }
  }
  local_20 = plVar1[0x13];
LAB_00653687:
  lVar2 = plVar1[0x65];
  local_20 = CONCAT44(local_20._4_4_ - (*(int *)(lVar2 + 0x14) + *(int *)(lVar2 + 0x1c)),
                      (int)local_20 - (*(int *)(lVar2 + 0x10) + *(int *)(lVar2 + 0x18)));
  return local_20;
}

