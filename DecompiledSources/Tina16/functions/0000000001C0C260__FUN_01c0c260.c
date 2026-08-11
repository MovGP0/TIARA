/* Ghidra address: 01c0c260 */
/* Ghidra symbol: FUN_01c0c260 */


void FUN_01c0c260(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  plVar2 = (longlong *)FUN_01c07120(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0xf0))(param_1), cVar1 != '\0')) {
    if ((*(char *)((longlong)param_1 + 0x366) != '\x02') &&
       (((*(char *)((longlong)param_1 + 0x365) != '\0' &&
         (*(char *)((longlong)param_1 + 0x363) == '\0')) &&
        (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 == '\0')))) {
      return;
    }
    uVar3 = FUN_01c07120(param_1);
    lVar4 = FUN_01c03e40(uVar3);
    FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar4 + 0x84));
    FUN_005fdcb0(*(undefined8 *)(param_1[0x62] + 0x80),1);
    FUN_005fdf50(param_1[0x62],&local_38);
  }
  return;
}

