/* Ghidra address: 01c0c0a0 */
/* Ghidra symbol: FUN_01c0c0a0 */


void FUN_01c0c0a0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 != '\0') {
    if ((((*(char *)((longlong)param_1 + 0x366) != '\x02') &&
         (*(char *)((longlong)param_1 + 0x365) != '\0')) &&
        (*(char *)((longlong)param_1 + 0x363) == '\0')) &&
       (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 == '\0')) {
      return;
    }
    FUN_00423b50(&local_38,0,1);
    FUN_00423b10(&local_38,0xfffffffe,0xfffffffc);
    uVar2 = FUN_01c07120(param_1);
    lVar3 = FUN_01c03e40(uVar2);
    FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar3 + 0x84));
    FUN_005fdf50(param_1[0x62],&local_38);
  }
  return;
}

