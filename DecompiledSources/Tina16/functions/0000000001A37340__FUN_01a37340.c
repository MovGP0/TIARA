/* Ghidra address: 01a37340 */
/* Ghidra symbol: FUN_01a37340 */


void FUN_01a37340(longlong param_1,int param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x30) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x30),iVar3);
      *(undefined8 *)(param_1 + 0xf8) = uVar2;
      (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x288))
                (*(longlong **)(param_1 + 0xf8),local_30);
      FUN_00414b50(param_1 + 0xf0,local_30[0]);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0xf8))(*(longlong **)(param_1 + 0xf8));
      *(uint *)(param_1 + 0xec) = (uint)uVar1;
      if (((*(int *)(param_1 + 0xec) == 0xe) || (*(int *)(param_1 + 0xec) == 0xd)) &&
         (param_2 != iVar3)) {
        FUN_01a32310(*(undefined8 *)(param_1 + 0xf8),0,0,1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_30);
  return;
}

