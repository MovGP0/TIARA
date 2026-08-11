/* Ghidra address: 018a9960 */
/* Ghidra symbol: FUN_018a9960 */


void FUN_018a9960(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  bVar4 = (byte)param_2;
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x508) + 0xa9);
    if (bVar4 != 0) {
      FUN_00414480(&DAT_02110668);
    }
    if ((bVar4 & (*(ushort *)(param_1 + 0x34) & 0x10) == 0) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x508) + 0x130))
                (*(longlong **)(param_1 + 0x508),param_1);
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x718) != 0) {
      FUN_01894a70(*(longlong *)(param_1 + 0x508));
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x718);
      *(longlong *)(lVar2 + 0x5d0) = param_1;
      *(code **)(lVar2 + 0x5c8) = FUN_018ac0e0;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x6f0);
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x200) = param_1;
      *(code **)(lVar2 + 0x1f8) = FUN_018ac200;
    }
    FUN_007fdf50(*(undefined8 *)(param_1 + 0x508),param_2);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x510),param_2);
    if (bVar4 == 0) {
      DAT_02110670 = 0;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    cVar3 = FUN_004113d0(lVar2,&PTR_FUN_018a1608);
    if (cVar3 != '\0') {
      FUN_006fa3b0(*(undefined8 *)(lVar2 + 0x6f8),param_2);
    }
    if (bVar4 != bVar1) {
      FUN_018aba70(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 0x4b8) = bVar4;
  }
  return;
}

