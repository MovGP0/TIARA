/* Ghidra address: 01c0e1a0 */
/* Ghidra symbol: FUN_01c0e1a0 */


void FUN_01c0e1a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_28 [16];
  
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0x363) == '\0')) {
    uVar2 = FUN_01c07120(param_1);
    lVar3 = FUN_01c03e40(uVar2);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar3 + 0x8c));
  }
  else {
    uVar2 = FUN_01c07120(param_1);
    lVar3 = FUN_01c03e40(uVar2);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar3 + 0xb4));
  }
  FUN_01bd35f0(param_1,param_2);
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x363) != '\0')) {
    uVar2 = FUN_01c07120(param_1);
    lVar3 = FUN_01c03e40(uVar2);
    FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar3 + 0x84));
    (**(code **)(*param_1 + 0xe0))(param_1,local_28);
    FUN_005fdf50(param_1[0x62],local_28);
  }
  return;
}

