/* Ghidra address: 00817b20 */
/* Ghidra symbol: FUN_00817b20 */


void FUN_00817b20(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_30;
  
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  lVar1 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(lVar1 + 0x4d6) == '\x02') {
    uVar2 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
    lVar1 = FUN_007ff990(uVar2);
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0x99) = 1;
      if (*(char *)(lVar1 + 0x4d2) == '\x02') {
        uVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xf8) + *(int *)(param_1 + 0xc);
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 300) + *(int *)(param_1 + 0x18);
      }
      else {
        local_48 = 0;
        local_44 = 0;
        local_30 = FUN_0064d1f0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10),&local_48);
        FUN_008194f0(*(undefined8 *)(param_1 + 0x20),&local_40);
        iVar4 = FUN_007fd7d0(lVar1);
        uVar3 = (int)local_30 + local_40 + iVar4 + *(int *)(param_1 + 0xc);
        iVar4 = FUN_007fd800(lVar1);
        iVar4 = local_30._4_4_ + local_3c + iVar4 + *(int *)(param_1 + 0x10);
      }
      FUN_00814be0(param_1);
      uVar2 = FUN_0065b870(lVar1);
      thunk_FUN_041b2403(uVar2,0x313,0,uVar3 & 0xffff | iVar4 << 0x10);
      FUN_00814c40(param_1);
      *(undefined1 *)(param_1 + 0x99) = 0;
      FUN_00814f60(param_1);
    }
  }
  return;
}

