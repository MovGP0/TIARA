/* Ghidra address: 015c4270 */
/* Ghidra symbol: FUN_015c4270 */


void FUN_015c4270(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_28 = (undefined8 *)
             FUN_004b9860(&PTR_FUN_0047c498,1,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xb8),
                          0x40);
  local_20 = FUN_015c1c10(&DAT_015b87c8,1);
  FUN_015c1b40(local_20,1);
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x103) != '\0') {
    lVar1 = FUN_015c1f20(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x108),local_20);
    if (lVar1 != -1) {
      lVar1 = (**(code **)*local_28)(local_28);
      lVar2 = FUN_015c1f20(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x108),local_20);
      if (lVar2 < lVar1) {
        uVar3 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x2f,*(undefined8 *)(param_1 + 0x18));
        FUN_004134c0(uVar3);
      }
    }
  }
  FUN_004b6e40(*(undefined8 *)(param_1 + 8),0);
  uVar3 = (**(code **)*local_28)(local_28);
  FUN_004b8ba0(*(undefined8 *)(param_1 + 8),local_28,uVar3);
  uVar3 = (**(code **)*local_28)(local_28);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  return;
}

