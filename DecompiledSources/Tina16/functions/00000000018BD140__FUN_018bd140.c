/* Ghidra address: 018bd140 */
/* Ghidra symbol: FUN_018bd140 */


void FUN_018bd140(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  puVar2 = auStack_78;
  if ((param_2 != (longlong *)0x0) && (local_20 = param_2[0x29], puVar2 = auStack_78, local_20 != 0)
     ) {
    local_30 = FUN_018bc4b0(param_1,*(undefined8 *)(local_20 + 0x20));
    *(byte *)((longlong)param_2 + 0xd1) = *(byte *)((longlong)param_2 + 0xd1) | 0x10;
    if ((local_30 == 0) ||
       (((*(byte *)(param_2 + 0x1a) & 4) != 0 ||
        (cVar3 = FUN_004113d0(param_2,&PTR_FUN_01929d50), cVar3 != '\0')))) {
      FUN_01952c40(param_2,&local_48,local_30);
      FUN_00414ad0(local_20 + 0x30,local_48);
    }
    else {
      (**(code **)(*param_2 + 0x1e0))(param_2,&local_50,local_30);
      FUN_00414ad0(local_20 + 0x30,local_50);
    }
    *(byte *)((longlong)param_2 + 0xd1) = *(byte *)((longlong)param_2 + 0xd1) & 0xef;
    local_28 = local_20;
    lVar1 = local_28;
    do {
      local_28 = lVar1;
      lVar1 = *(longlong *)(local_28 + 0x28);
      if (lVar1 == *(longlong *)(param_1 + 0x78)) break;
    } while (lVar1 != 0);
    *(undefined1 *)(local_28 + 0x38) = 0;
    puVar2 = local_40;
  }
  local_40 = puVar2;
  FUN_00414560(&local_50,2);
  return;
}

