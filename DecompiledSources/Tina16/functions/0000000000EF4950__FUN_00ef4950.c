/* Ghidra address: 00ef4950 */
/* Ghidra symbol: FUN_00ef4950 */


void FUN_00ef4950(longlong param_1,byte param_2,byte param_3,undefined8 *param_4,undefined8 param_5)

{
  ushort uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_44;
  undefined4 uStack_3c;
  
  local_44 = *param_4;
  uStack_3c = *(undefined4 *)(param_4 + 1);
  if ((param_2 < 0x3f) && (param_3 < 0x3f)) {
    uVar5 = (ulonglong)param_2;
    uVar6 = (ulonglong)param_3;
    if (*(longlong *)(**(longlong **)(param_1 + 0xd0) + uVar5 * 0x200 + uVar6 * 8) == 0) {
      uVar3 = FUN_004095c0(0x70a);
      *(undefined8 *)(**(longlong **)(param_1 + 0xd0) + uVar5 * 0x200 + uVar6 * 8) = uVar3;
      if (*(longlong *)(**(longlong **)(param_1 + 0xd0) + uVar5 * 0x200 + uVar6 * 8) == 0) {
        FUN_00ef4260(CONCAT71((int7)((uVar5 << 6) >> 8),1),param_5);
        return;
      }
      **(undefined2 **)(**(longlong **)(param_1 + 0xd0) + uVar5 * 0x200 + uVar6 * 8) = 0;
    }
    uVar1 = (ushort)local_44;
    if ((uint)**(ushort **)(**(longlong **)(param_1 + 0xd0) + uVar5 * 0x200 + uVar6 * 8) +
        (uint)(ushort)local_44 < 0x385) {
      bVar2 = 1;
      if ((char)local_44 != '\0') {
        puVar4 = (undefined2 *)((longlong)&local_44 + 2);
        do {
          *(undefined2 *)
           (*(longlong *)
             (**(longlong **)(param_1 + 0xd0) + (ulonglong)param_2 * 0x200 + (ulonglong)param_3 * 8)
           + (ulonglong)
             ((uint)**(ushort **)
                      (**(longlong **)(param_1 + 0xd0) + (ulonglong)param_2 * 0x200 +
                      (ulonglong)param_3 * 8) + (uint)bVar2) * 2) = *puVar4;
          bVar2 = bVar2 + 1;
          puVar4 = puVar4 + 1;
          local_44._0_1_ = (char)local_44 + -1;
        } while ((char)local_44 != '\0');
      }
      **(short **)
        (**(longlong **)(param_1 + 0xd0) + (ulonglong)param_2 * 0x200 + (ulonglong)param_3 * 8) =
           **(short **)
             (**(longlong **)(param_1 + 0xd0) + (ulonglong)param_2 * 0x200 + (ulonglong)param_3 * 8)
           + uVar1;
    }
    else {
      FUN_00ef4260(CONCAT71((uint7)(byte)((ulonglong)local_44 >> 8),2),param_5);
    }
  }
  else {
    FUN_00ef4260(6,param_5);
  }
  return;
}

