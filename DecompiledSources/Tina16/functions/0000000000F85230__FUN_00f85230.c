/* Ghidra address: 00f85230 */
/* Ghidra symbol: FUN_00f85230 */


void FUN_00f85230(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 local_61;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined1 local_2c [12];
  
  FUN_00417580(local_48,&DAT_00e021a8);
  FUN_00417580(local_60,&DAT_00e021a8);
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x90))();
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xd08) + 0x10);
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd08),iVar4);
      *(undefined1 *)(lVar2 + 0x18) = 0;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((*(char *)(param_1 + 0x6b0) != '\0') || (*(char *)(param_1 + 0x6b1) != '\0')) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xd00) + 0x10);
    iVar4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd00),iVar4);
        uVar1 = _get_digital_node_value
                          (*(undefined8 *)(param_1 + 0xd68),*(undefined4 *)(lVar2 + 8),&local_61,
                           &local_30,local_2c,0);
        if (*(int *)(lVar2 + 8) == 0) {
          local_61 = 0x30;
        }
        FUN_015f4e60(local_60,local_61,local_30,uVar1);
        FUN_00f85120(param_1,*(undefined4 *)(lVar2 + 8),local_60);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_015f79c0(*(undefined8 *)(param_1 + 0xd08),*(undefined8 *)(param_1 + 0x6b8),*PTR_DAT_02005978);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x28))(*(longlong **)(param_1 + 0x6b8));
  if (0 < iVar3) {
    FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,*(undefined8 *)(param_1 + 0x6b8),0,1);
  }
  FUN_00417840(local_60,&DAT_00e021a8,2);
  return;
}

