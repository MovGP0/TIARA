/* Ghidra address: 00d3cbc0 */
/* Ghidra symbol: FUN_00d3cbc0 */


int FUN_00d3cbc0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_64 [8];
  int local_5c;
  int local_58;
  int local_54;
  int local_48;
  int local_44;
  undefined1 local_38 [4];
  int local_34;
  
  FUN_00d3cb70(param_1,local_64);
  iVar4 = *(int *)(param_2 + 4);
  iVar1 = *(int *)(param_1 + 0x8c);
  FUN_00787fc0(*(undefined8 *)(param_1 + 0x18),&local_48);
  FUN_00d3c920(param_1,local_38);
  FUN_00429ca0(local_38,-local_48,-local_44);
  iVar4 = (iVar4 - iVar1) - local_44;
  iVar1 = FUN_00d3ce70(param_1);
  uVar2 = FUN_00d3c3b0(param_1);
  FUN_004238d0(&local_78,0,iVar4,uVar2,iVar4 + iVar1);
  *(undefined8 *)(param_1 + 0x9c) = local_78;
  *(undefined8 *)(param_1 + 0xa4) = uStack_70;
  if (local_58 - local_5c < 1) {
    iVar4 = iVar4 - local_34;
  }
  else {
    iVar3 = FUN_004230c0(local_38);
    iVar4 = thunk_FUN_03f3ed25(iVar4 - local_34,((local_58 - local_5c) - local_54) + 2,iVar3 - iVar1
                              );
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  iVar1 = (local_58 - local_54) + 1;
  if (iVar1 <= iVar4) {
    iVar4 = iVar1;
  }
  return iVar4;
}

