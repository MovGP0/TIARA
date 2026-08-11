/* Ghidra address: 016f66e0 */
/* Ghidra symbol: FUN_016f66e0 */


void FUN_016f66e0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  int local_30;
  int local_2c;
  
  FUN_017dcb70(*(undefined8 *)(param_1 + 0xd8));
  for (local_30 = 1; local_30 <= *(int *)(param_1 + 0x2d8); local_30 = local_30 + 1) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_30 * 8);
    for (local_2c = 1; local_2c <= (int)(uint)*(byte *)(lVar2 + 4); local_2c = local_2c + 1) {
      pbVar3 = *(byte **)(*(longlong *)(lVar2 + 0x40) + -8 + (longlong)local_2c * 8);
      bVar1 = *pbVar3;
      if (*(longlong *)(PTR_DAT_02003a58 + (ulonglong)bVar1 * 8) != 0) {
        FUN_01b053c0(pbVar3 + 0x58,pbVar3 + 0x60,pbVar3 + 0x68);
        (**(code **)(PTR_DAT_02003a58 + (ulonglong)bVar1 * 8))(lVar2,param_1,0,local_2c,0);
      }
    }
    if (*(char *)(lVar2 + 0x117) != '\0') {
      (**(code **)(lVar2 + 0xd0))
                (*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x308),lVar2,
                 *(undefined8 *)(lVar2 + 0x60));
    }
  }
  FUN_017dcdd0(*(undefined8 *)(param_1 + 0xd8));
  FUN_016f5480(param_1,0);
  if (*(longlong *)(param_1 + 0x1380) == 0) {
    if (*(char *)(param_1 + 0xed6) == '\x02') {
      uVar4 = FUN_01b102c0(&PTR_FUN_01af8670,1,param_1);
      *(undefined8 *)(param_1 + 0x1380) = uVar4;
    }
    else {
      uVar4 = FUN_01b102c0(&PTR_FUN_01af8440,1,param_1);
      *(undefined8 *)(param_1 + 0x1380) = uVar4;
    }
  }
  else {
    FUN_01b10500(*(longlong *)(param_1 + 0x1380));
  }
  return;
}

