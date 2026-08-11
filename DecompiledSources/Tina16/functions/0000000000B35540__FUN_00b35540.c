/* Ghidra address: 00b35540 */
/* Ghidra symbol: FUN_00b35540 */


void FUN_00b35540(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  char *local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = (char *)0x0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_0061d8e0(local_20,local_res10[0]);
  if (local_20[0] != (char *)0x0) {
    if (*(char *)(*(longlong *)(param_1 + 0x78) + 8) == '\x04') {
      if (*local_20[0] != '\"') {
        FUN_004156b0(local_20,&LAB_00b356ec,local_20[0]);
      }
      iVar1 = 0;
      if (local_20[0] != (char *)0x0) {
        iVar1 = *(int *)(local_20[0] + -4);
      }
      if (local_20[0][(longlong)iVar1 + -1] != '\"') {
        FUN_004155b0(local_20,&LAB_00b356ec);
      }
    }
    FUN_00b30010(*(undefined8 *)(param_1 + 0x80),local_30,local_20[0],
                 *(undefined2 *)(param_1 + 0x46),*(undefined1 *)(param_1 + 0x45));
    FUN_00414c70(local_20,local_30[0]);
  }
  uVar4 = 0;
  if (local_20[0] != (char *)0x0) {
    uVar4 = *(uint *)(local_20[0] + -4);
  }
  lVar2 = (**(code **)**(undefined8 **)(param_1 + 0x48))(*(undefined8 **)(param_1 + 0x48));
  FUN_004b6e40(*(undefined8 *)(param_1 + 0x48),lVar2 + 4 + (ulonglong)(ushort)uVar4);
  FUN_00b25840(*(undefined8 *)(param_1 + 0x48),uVar4);
  FUN_00b25840(*(undefined8 *)(param_1 + 0x48),0);
  if ((ushort)uVar4 != 0) {
    uVar3 = FUN_00414df0(local_20);
    FUN_00b258a0(*(undefined8 *)(param_1 + 0x48),uVar3,uVar4 & 0xffff);
  }
  FUN_004144d0(local_30);
  FUN_004144d0(local_20);
  FUN_004144d0(local_res10);
  return;
}

