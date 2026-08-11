/* Ghidra address: 01503af0 */
/* Ghidra symbol: FUN_01503af0 */


undefined8 FUN_01503af0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *local_40;
  longlong local_38;
  byte local_29;
  
  local_40 = (undefined8 *)0x0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00e1c8d0(&local_29,&local_38);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8));
    if (local_29 != 0) {
      bVar3 = 0;
      bVar4 = local_29;
      do {
        lVar2 = FUN_01107b90(&PTR_FUN_01106728,1);
        FUN_004169a0(lVar2 + 8);
        *(uint *)(lVar2 + 0x80) = (uint)bVar3 % 0xb;
        FUN_01107c90(lVar2);
        FUN_004169a0(&local_40,local_38 + (ulonglong)bVar3 * 0x29);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                  (*(longlong **)(param_1 + 8),local_40,lVar2);
        bVar3 = bVar3 + 1;
        bVar4 = bVar4 - 1;
      } while (bVar4 != 0);
      FUN_004095f0(local_38,(uint)local_29 * 0x29);
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_00414480(&local_40);
  return uVar1;
}

