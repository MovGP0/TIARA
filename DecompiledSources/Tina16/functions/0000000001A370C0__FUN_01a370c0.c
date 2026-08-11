/* Ghidra address: 01a370c0 */
/* Ghidra symbol: FUN_01a370c0 */


void FUN_01a370c0(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30;
  
  local_30 = 0;
  iVar4 = 0;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x30) + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x30),iVar3);
      *(undefined8 *)(param_1 + 0xf8) = uVar2;
      (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x288))
                (*(longlong **)(param_1 + 0xf8),&local_30);
      FUN_00414b50(param_1 + 0xf0,local_30);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0xf8))(*(longlong **)(param_1 + 0xf8));
      *(uint *)(param_1 + 0xec) = (uint)uVar1;
      if ((*(int *)(param_1 + 0xec) == 0xe) || (*(int *)(param_1 + 0xec) == 0xd)) {
        uVar2 = FUN_01a31ec0(*(undefined8 *)(param_1 + 0xf8),0,1);
        *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar4 * 8) = uVar2;
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(&local_30);
  return;
}

