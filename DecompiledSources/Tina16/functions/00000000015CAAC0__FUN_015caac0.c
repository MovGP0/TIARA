/* Ghidra address: 015caac0 */
/* Ghidra symbol: FUN_015caac0 */


void FUN_015caac0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_c9;
  longlong local_c8;
  int local_c0;
  int local_bc;
  undefined8 local_b8 [19];
  
  puVar7 = local_b8;
  for (lVar6 = 0x12; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_004179d0(local_b8,&DAT_015b9418);
  FUN_00409e20();
  for (local_c8 = 0; local_c8 < *(longlong *)(param_1 + 0x200);
      local_c8 = local_c8 + *(longlong *)(param_1 + 0x110)) {
    if ((longlong)*(int *)(param_1 + 0xe4) < *(longlong *)(param_1 + 0x200) - local_c8) {
      *(longlong *)(param_1 + 0x110) = (longlong)*(int *)(param_1 + 0xe4);
    }
    else {
      *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x200) - local_c8;
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x18))
                      (*(longlong **)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x108),
                       *(undefined4 *)(param_1 + 0x110));
    if ((longlong)iVar4 != *(longlong *)(param_1 + 0x110)) break;
    FUN_015c0d50(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110),param_1 + 0x158);
  }
  (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x48))(*(longlong **)(param_1 + 0x1e8),0,0);
  bVar1 = *(char *)(*(longlong *)(param_1 + 0x1e0) + 0x243) - 1;
  if (bVar1 == 0xff) {
    local_c0 = 9;
    *param_3 = *param_3 + 0xc;
    uVar5 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x1f0));
    *(undefined8 *)(param_1 + 0xd8) = uVar5;
    FUN_015c1100(*(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + 0x6d),param_1 + 0x140);
    local_bc = 0;
    if (-1 < local_c0) {
      iVar4 = local_c0 + 1;
      do {
        iVar2 = FUN_00409e80(0x7fffffff);
        *(char *)(param_1 + 0x134 + (longlong)local_bc) = (char)(iVar2 % 0x100);
        local_bc = local_bc + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(byte *)(param_1 + 0x134 + (longlong)(local_c0 + 1)) =
         ~(byte)((uint)*(undefined4 *)(param_1 + 0x158) >> 0x10);
    *(byte *)(param_1 + 0x134 + (longlong)(local_c0 + 2)) =
         ~(byte)((uint)*(undefined4 *)(param_1 + 0x158) >> 0x18);
    local_bc = 0;
    if (-1 < local_c0 + 2) {
      iVar4 = local_c0 + 3;
      do {
        local_c9 = FUN_015c0ec0(param_1 + 0x134 + (longlong)local_bc,param_1 + 0x140);
        FUN_004b89e0(*(undefined8 *)(param_1 + 0x1f0),&local_c9,1);
        local_bc = local_bc + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  else if (bVar1 < 3) {
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x20))
              ((longlong *)**(undefined8 **)(param_1 + 0xd0),0,local_b8);
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0xd0))
              ((undefined8 *)**(undefined8 **)(param_1 + 0xd0),
               *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x248));
    uVar5 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x40))
                      ((longlong *)**(undefined8 **)(param_1 + 0xd0));
    uVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x50))
                      ((longlong *)**(undefined8 **)(param_1 + 0xd0));
    (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x20))
              (*(longlong **)(param_1 + 0x1f0),uVar5,uVar3);
    FUN_004095f0(uVar5);
    iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x50))
                      ((longlong *)**(undefined8 **)(param_1 + 0xd0));
    *param_3 = *param_3 + (longlong)iVar4;
  }
  FUN_00417740(local_b8,&DAT_015b9418);
  return;
}

