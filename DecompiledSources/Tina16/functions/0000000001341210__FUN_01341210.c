/* Ghidra address: 01341210 */
/* Ghidra symbol: FUN_01341210 */


undefined1 FUN_01341210(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 local_59;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_59 = 1;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x3d0) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x3d0),iVar4);
      iVar1 = FUN_01b07e10(param_1,uVar2);
      if (iVar1 <= *(int *)(param_1 + 0x2d8)) {
        FUN_016f5520(param_1,*(undefined8 *)
                              (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar1 * 8));
        local_59 = FUN_01340aa0(param_1,*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar1 * 8)
                               );
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x3d0) + 0x10)) {
    FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),0);
    if (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x1838) != 0) {
      puVar3 = (undefined8 *)FUN_0198d3a0(*(undefined8 *)(param_1 + 0xa0),0x8001,0);
      *(undefined1 *)(puVar3 + 0x92) = *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x490);
      FUN_00417c40((longlong)puVar3 + 0x492,*(longlong *)(param_1 + 0xa0) + 0x492,&DAT_01d0d0b8);
      *(undefined4 *)(puVar3 + 0x1bc) = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0xde0);
      (**(code **)(*(longlong *)puVar3[0x87] + 0x10))
                ((longlong *)puVar3[0x87],*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x438));
      *(undefined1 *)(puVar3 + 0x43) = *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x218);
      FUN_00414ad0(puVar3 + 0x6c,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x360));
      FUN_0153bc10(0,puVar3,0,0);
      FUN_01cc6020(*(undefined8 *)PTR_DAT_020027c0);
      uVar2 = (**(code **)*puVar3)(puVar3);
      FUN_00418590(uVar2,&DAT_01984da0);
    }
  }
  FUN_019af250(*(undefined8 *)(param_1 + 0xa0));
  FUN_00414560(&local_50,5);
  return local_59;
}

