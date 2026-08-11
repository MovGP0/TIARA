/* Ghidra address: 00b61330 */
/* Ghidra symbol: FUN_00b61330 */


undefined8 FUN_00b61330(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined8 local_30 [2];
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  
  local_30[0] = 0;
  FUN_004144d0(param_2);
  iVar4 = 1;
  while( true ) {
    iVar2 = 0;
    if (param_3 != 0) {
      iVar2 = *(int *)(param_3 + -4);
    }
    if (iVar2 < iVar4 + 7) break;
    FUN_00409a70(param_3 + -1 + (longlong)iVar4,&local_1c,2);
    FUN_00409a70(param_3 + -1 + (longlong)(iVar4 + 2),&local_1a,2);
    if (3 < local_1a) {
      local_1a = local_1a - 1;
    }
    iVar2 = 0;
    if (param_3 != 0) {
      iVar2 = *(int *)(param_3 + -4);
    }
    if (iVar2 < iVar4 + 9) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x40);
      sVar3 = 0;
      if (lVar1 != 0) {
        sVar3 = (short)(*(uint *)(lVar1 + -4) >> 1);
      }
      local_1e = sVar3 + 1;
    }
    else {
      FUN_00409a70(param_3 + -1 + (longlong)(iVar4 + 8),&local_1e,2);
    }
    if ((int)(uint)local_1c <= (int)(local_1e - 1)) {
      FUN_00b36db0(local_30,local_1c + 1,(uint)local_1e,local_1a,
                   *(undefined8 *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x50) + 0x18) +
                    0x18));
      FUN_004155b0(param_2,local_30[0]);
    }
    iVar4 = iVar4 + 8;
  }
  FUN_004144d0(local_30);
  return param_2;
}

