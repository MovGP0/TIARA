/* Ghidra address: 012a39a0 */
/* Ghidra symbol: FUN_012a39a0 */


undefined8 FUN_012a39a0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_2b;
  byte local_2a;
  byte local_29;
  
  local_48 = 0;
  local_40 = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_00e17aa0(&local_29,&local_38);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x90))(*(longlong **)(param_1 + 0x78));
    if (local_29 != 0) {
      FUN_00e16e30(&local_2a,&local_2b);
      bVar5 = 0;
      bVar7 = local_29;
      do {
        uVar6 = (ulonglong)bVar5;
        FUN_004169a0(&local_40,local_38 + uVar6 * 0x29);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                          (*(longlong **)(param_1 + 8),local_40);
        if (iVar2 == -1) {
          lVar4 = FUN_01107340(&PTR_FUN_01105a20,1);
          FUN_004169a0(lVar4 + 8,local_38 + uVar6 * 0x29);
          *(undefined1 *)(lVar4 + 0x10) = 1;
          uVar1 = FUN_0040c770((double)local_2a / 2.0);
          *(undefined1 *)(lVar4 + 0x2a) = uVar1;
          FUN_00e16ec0(lVar4 + 0x2a,lVar4 + 0x118,1);
          *(uint *)(lVar4 + 0x80) = (uint)bVar5 % 0xb;
        }
        else {
          uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                            (*(longlong **)(param_1 + 8),iVar2);
          lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01105a20);
        }
        FUN_004169a0(&local_48,local_38 + uVar6 * 0x29);
        (**(code **)(**(longlong **)(param_1 + 0x78) + 0x80))
                  (*(longlong **)(param_1 + 0x78),local_48,lVar4);
        bVar5 = bVar5 + 1;
        bVar7 = bVar7 - 1;
      } while (bVar7 != 0);
      FUN_004095f0(local_38,(uint)local_29 * 0x29);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  FUN_00414560(&local_48,2);
  return uVar3;
}

